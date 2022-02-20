// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WebSocketNetDriver.h"
#include "UObject/StrongObjectPtr.h"
#include "INetworkingWebSocket.h"
#include "IWebSocketServer.h"
#include "Modules/ModuleManager.h"
#include "Engine.h"
#include "WebSocketServer.generated.h"

UCLASS()
class ZWEBSOCKETSERVER_API AWebSocketServer : public AActor
{
	GENERATED_BODY()
	
public:	
	AWebSocketServer();

protected:
	virtual void BeginPlay() override;

	virtual void BeginDestroy() override;
public:	
	
	virtual void Tick(float DeltaTime) override;


public:
	// web客户端信息回调
	// web client message callback
	UFUNCTION(BlueprintImplementableEvent, Category = "WebSocketServer")
	void OnH5MsgCallback(const FString& msg);

public:
	// 开启WebSocket服务器
	// Open WebSocket Server
	UFUNCTION(BlueprintCallable, Category = "WebSocketServer")
	bool Start(int Port);

	// 关闭WebSocket服务器 BeginDestroy时自动调用
	// Close WebSocket Server （The automatic call this func when BeginDestroy）
	UFUNCTION(BlueprintCallable, Category = "WebSocketServer")
	void Stop();

	// 在actor tick内自动调动 用于维护websocket的连接
	// It is automatically called in actor tick to maintain the connection of websocket
	bool WebSocketServerTick(float DeltaTime);

	// TODO：按客户端id，发送信息
	// TODO: Send information by client ID
	void Send(const FGuid& InTargetClientId, const TArray<uint8>& InUTF8Payload);

	// 发送信息到所有客户端 
	// send message to all web client
	UFUNCTION(BlueprintCallable, Category = "WebSocketServer")
	void Send(const FString msg);

	// 返回服务器当前是否正在运行
	// Returns whether the server is currently running
	UFUNCTION(BlueprintCallable, Category = "WebSocketServer")
	bool IsRunning() const;

	// 当连接结束时的回调
	// Callback when a socket is closed
	DECLARE_MULTICAST_DELEGATE_OneParam(FOnConnectionClosed, FGuid /*ClientId*/);
	FOnConnectionClosed& OnConnectionClosed() { return OnConnectionClosedDelegate; }

	// 打印整合 屏幕及log
	void _DebugLog(FString msg, float delayTime, FColor color);


private:
	// 当websocket客户端已连接
	// Handles a new client connecting
	void OnWebSocketClientConnected(INetworkingWebSocket* Socket);

	// 处理将接收到的数据包发送到消息路由器。
	// Handles sending the received packet to the message router.
	void ReceivedRawPacket(void* Data, int32 Size, FGuid ClientId);

	// 当websocket客户端已断开
	// Handles a client close
	void OnSocketClose(INetworkingWebSocket* Socket);




private:
	/** Holds a web socket connection to a client. */
	class FWebSocketConnection
	{
	public:

		explicit FWebSocketConnection(INetworkingWebSocket* InSocket)
			: Socket(InSocket)
			, Id(FGuid::NewGuid())
		{
		}

		FWebSocketConnection(FWebSocketConnection&& WebSocketConnection)
			: Id(WebSocketConnection.Id)
		{
			Socket = WebSocketConnection.Socket;
			WebSocketConnection.Socket = nullptr;
		}

		~FWebSocketConnection()
		{
			if (Socket)
			{
				delete Socket;
				Socket = nullptr;
			}
		}

		FWebSocketConnection(const FWebSocketConnection&) = delete;
		FWebSocketConnection& operator=(const FWebSocketConnection&) = delete;
		FWebSocketConnection& operator=(FWebSocketConnection&&) = delete;

		/** Underlying WebSocket. */
		INetworkingWebSocket* Socket = nullptr;

		/** Generated ID for this client. */
		FGuid Id;
	};



private:
	/** Holds the LibWebSocket wrapper. */
	TUniquePtr<IWebSocketServer> Server;

	/** Holds all active connections. */
	TArray<FWebSocketConnection> Connections;

	/** Delegate triggered when a connection is closed */
	FOnConnectionClosed OnConnectionClosedDelegate;

};
