// Fill out your copyright notice in the Description page of Project Settings.


#include "WebSocketServer.h"
#include "Containers/Ticker.h"
#include "IPAddress.h"
#include "IWebSocketNetworkingModule.h"
#include "WebSocketNetworkingDelegates.h"
#include <string>

AWebSocketServer::AWebSocketServer()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AWebSocketServer::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWebSocketServer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	WebSocketServerTick(DeltaTime);
}

void AWebSocketServer::BeginDestroy()
{
	Super::BeginDestroy();
	Stop();
}

bool AWebSocketServer::Start(int Port)
{
	FWebSocketClientConnectedCallBack CallBack;
	CallBack.BindUObject(this, &AWebSocketServer::OnWebSocketClientConnected);

	Server = FModuleManager::Get().LoadModuleChecked<IWebSocketNetworkingModule>(TEXT("WebSocketNetworking")).CreateServer();

	if (!Server || !Server->Init(Port, CallBack))
	{
		Server.Reset();
		return false;
	}

	return true;
}

void AWebSocketServer::Stop()
{
	if (IsRunning()) {
		Server.Reset();
	}
}

bool AWebSocketServer::WebSocketServerTick(float DeltaTime)
{
	if (IsRunning()) {
		Server->Tick();
		return true;
	}
	else {
		return false;
	}
}

void AWebSocketServer::Send(const FGuid& InTargetClientId, const TArray<uint8>& InUTF8Payload)
{
	if (FWebSocketConnection* Connection = Connections.FindByPredicate([&InTargetClientId](const FWebSocketConnection& InConnection)
	{ return InConnection.Id == InTargetClientId; }))
	{
		Connection->Socket->Send(InUTF8Payload.GetData(), InUTF8Payload.Num(), /*PrependSize=*/false);
	}
}

void AWebSocketServer::Send(const FString msg)
{
	FTCHARToUTF8 utf8Str(*msg);
	int32 utf8StrLen = utf8Str.Length();

	TArray<uint8> uint8Array;
	uint8Array.SetNum(utf8StrLen);
	memcpy(uint8Array.GetData(), utf8Str.Get(), utf8StrLen);

	for (auto& ws : Connections) {
		ws.Socket->Send(uint8Array.GetData(), uint8Array.Num(), /*PrependSize=*/false);
	}
}

bool AWebSocketServer::IsRunning() const
{
	return !!Server;
}

void AWebSocketServer::_DebugLog(FString msg, float delayTime, FColor color)
{
	GEngine->AddOnScreenDebugMessage(-1, delayTime, color, " >LJason< " + msg);// 打印到屏幕
	UE_LOG(LogTemp, Log, TEXT(" >LJason<  %s"), *msg);// 打印到outputlog
}

void AWebSocketServer::OnWebSocketClientConnected(INetworkingWebSocket* Socket)
{
	_DebugLog("----OnWebSocketClientConnected ", 10, FColor::Red);
	if (ensureMsgf(Socket, TEXT("Socket was null while creating a new websocket connection.")))
	{
		FWebSocketConnection Connection = FWebSocketConnection{ Socket };

		FWebSocketPacketReceivedCallBack ReceiveCallBack;
		ReceiveCallBack.BindUObject(this, &AWebSocketServer::ReceivedRawPacket, Connection.Id);
		Socket->SetReceiveCallBack(ReceiveCallBack);

		FWebSocketInfoCallBack CloseCallback;
		CloseCallback.BindUObject(this, &AWebSocketServer::OnSocketClose, Socket);
		Socket->SetSocketClosedCallBack(CloseCallback);

		Connections.Add(MoveTemp(Connection));
	}
}

void AWebSocketServer::ReceivedRawPacket(void* Data, int32 Size, FGuid ClientId)
{
	TArrayView<uint8> dataArrayView = MakeArrayView(static_cast<uint8*>(Data), Size);
	const std::string cstr(reinterpret_cast<const char*>(
		dataArrayView.GetData()),
		dataArrayView.Num());
	FString frameAsFString = UTF8_TO_TCHAR(cstr.c_str());

	OnH5MsgCallback(frameAsFString);
}

void AWebSocketServer::OnSocketClose(INetworkingWebSocket* Socket)
{
	int32 Index = Connections.IndexOfByPredicate([Socket](const FWebSocketConnection& Connection) { return Connection.Socket == Socket; });

	_DebugLog("----OnSocketClose " + FString::FromInt(Index), 10, FColor::Red);
	if (Index != INDEX_NONE)
	{
		OnConnectionClosed().Broadcast(Connections[Index].Id);
		Connections.RemoveAtSwap(Index);
	}
}