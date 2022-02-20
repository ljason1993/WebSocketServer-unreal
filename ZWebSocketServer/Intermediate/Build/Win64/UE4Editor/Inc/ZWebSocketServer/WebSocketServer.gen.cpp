// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZWebSocketServer/Public/WebSocketServer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocketServer() {}
// Cross Module References
	ZWEBSOCKETSERVER_API UClass* Z_Construct_UClass_AWebSocketServer_NoRegister();
	ZWEBSOCKETSERVER_API UClass* Z_Construct_UClass_AWebSocketServer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ZWebSocketServer();
// End Cross Module References
	DEFINE_FUNCTION(AWebSocketServer::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWebSocketServer::execSend)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Send(Z_Param_msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWebSocketServer::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWebSocketServer::execStart)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Start(Z_Param_Port);
		P_NATIVE_END;
	}
	static FName NAME_AWebSocketServer_OnH5MsgCallback = FName(TEXT("OnH5MsgCallback"));
	void AWebSocketServer::OnH5MsgCallback(const FString& msg)
	{
		WebSocketServer_eventOnH5MsgCallback_Parms Parms;
		Parms.msg=msg;
		ProcessEvent(FindFunctionChecked(NAME_AWebSocketServer_OnH5MsgCallback),&Parms);
	}
	void AWebSocketServer::StaticRegisterNativesAWebSocketServer()
	{
		UClass* Class = AWebSocketServer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsRunning", &AWebSocketServer::execIsRunning },
			{ "Send", &AWebSocketServer::execSend },
			{ "Start", &AWebSocketServer::execStart },
			{ "Stop", &AWebSocketServer::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWebSocketServer_IsRunning_Statics
	{
		struct WebSocketServer_eventIsRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWebSocketServer_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebSocketServer_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWebSocketServer_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSocketServer_eventIsRunning_Parms), &Z_Construct_UFunction_AWebSocketServer_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWebSocketServer_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWebSocketServer_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWebSocketServer_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocketServer" },
		{ "Comment", "// \xe8\xbf\x94\xe5\x9b\x9e\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\xbd\x93\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe6\xad\xa3\xe5\x9c\xa8\xe8\xbf\x90\xe8\xa1\x8c\n// Returns whether the server is currently running\n" },
		{ "ModuleRelativePath", "Public/WebSocketServer.h" },
		{ "ToolTip", "\xe8\xbf\x94\xe5\x9b\x9e\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\xbd\x93\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe6\xad\xa3\xe5\x9c\xa8\xe8\xbf\x90\xe8\xa1\x8c\nReturns whether the server is currently running" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWebSocketServer_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWebSocketServer, nullptr, "IsRunning", nullptr, nullptr, sizeof(WebSocketServer_eventIsRunning_Parms), Z_Construct_UFunction_AWebSocketServer_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWebSocketServer_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWebSocketServer_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWebSocketServer_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWebSocketServer_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWebSocketServer_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics::NewProp_msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketServer_eventOnH5MsgCallback_Parms, msg), METADATA_PARAMS(Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics::NewProp_msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics::NewProp_msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics::NewProp_msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocketServer" },
		{ "Comment", "// web\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe4\xbf\xa1\xe6\x81\xaf\xe5\x9b\x9e\xe8\xb0\x83\n// web client message callback\n" },
		{ "ModuleRelativePath", "Public/WebSocketServer.h" },
		{ "ToolTip", "web\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe4\xbf\xa1\xe6\x81\xaf\xe5\x9b\x9e\xe8\xb0\x83\nweb client message callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWebSocketServer, nullptr, "OnH5MsgCallback", nullptr, nullptr, sizeof(WebSocketServer_eventOnH5MsgCallback_Parms), Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWebSocketServer_Send_Statics
	{
		struct WebSocketServer_eventSend_Parms
		{
			FString msg;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWebSocketServer_Send_Statics::NewProp_msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWebSocketServer_Send_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketServer_eventSend_Parms, msg), METADATA_PARAMS(Z_Construct_UFunction_AWebSocketServer_Send_Statics::NewProp_msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWebSocketServer_Send_Statics::NewProp_msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWebSocketServer_Send_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWebSocketServer_Send_Statics::NewProp_msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWebSocketServer_Send_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocketServer" },
		{ "Comment", "// \xe5\x8f\x91\xe9\x80\x81\xe4\xbf\xa1\xe6\x81\xaf\xe5\x88\xb0\xe6\x89\x80\xe6\x9c\x89\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf \n// send message to all web client\n" },
		{ "ModuleRelativePath", "Public/WebSocketServer.h" },
		{ "ToolTip", "\xe5\x8f\x91\xe9\x80\x81\xe4\xbf\xa1\xe6\x81\xaf\xe5\x88\xb0\xe6\x89\x80\xe6\x9c\x89\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\nsend message to all web client" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWebSocketServer_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWebSocketServer, nullptr, "Send", nullptr, nullptr, sizeof(WebSocketServer_eventSend_Parms), Z_Construct_UFunction_AWebSocketServer_Send_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWebSocketServer_Send_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWebSocketServer_Send_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWebSocketServer_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWebSocketServer_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWebSocketServer_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWebSocketServer_Start_Statics
	{
		struct WebSocketServer_eventStart_Parms
		{
			int32 Port;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AWebSocketServer_Start_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketServer_eventStart_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWebSocketServer_Start_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebSocketServer_eventStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWebSocketServer_Start_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSocketServer_eventStart_Parms), &Z_Construct_UFunction_AWebSocketServer_Start_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWebSocketServer_Start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWebSocketServer_Start_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWebSocketServer_Start_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWebSocketServer_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocketServer" },
		{ "Comment", "// \xe5\xbc\x80\xe5\x90\xafWebSocket\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\n// Open WebSocket Server\n" },
		{ "ModuleRelativePath", "Public/WebSocketServer.h" },
		{ "ToolTip", "\xe5\xbc\x80\xe5\x90\xafWebSocket\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\nOpen WebSocket Server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWebSocketServer_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWebSocketServer, nullptr, "Start", nullptr, nullptr, sizeof(WebSocketServer_eventStart_Parms), Z_Construct_UFunction_AWebSocketServer_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWebSocketServer_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWebSocketServer_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWebSocketServer_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWebSocketServer_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWebSocketServer_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWebSocketServer_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWebSocketServer_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocketServer" },
		{ "Comment", "// \xe5\x85\xb3\xe9\x97\xadWebSocket\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8 BeginDestroy\xe6\x97\xb6\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb0\x83\xe7\x94\xa8\n// Close WebSocket Server \xef\xbc\x88The automatic call this func when BeginDestroy\xef\xbc\x89\n" },
		{ "ModuleRelativePath", "Public/WebSocketServer.h" },
		{ "ToolTip", "\xe5\x85\xb3\xe9\x97\xadWebSocket\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8 BeginDestroy\xe6\x97\xb6\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb0\x83\xe7\x94\xa8\nClose WebSocket Server \xef\xbc\x88The automatic call this func when BeginDestroy\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWebSocketServer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWebSocketServer, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWebSocketServer_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWebSocketServer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWebSocketServer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWebSocketServer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWebSocketServer_NoRegister()
	{
		return AWebSocketServer::StaticClass();
	}
	struct Z_Construct_UClass_AWebSocketServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWebSocketServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ZWebSocketServer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWebSocketServer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWebSocketServer_IsRunning, "IsRunning" }, // 3272068917
		{ &Z_Construct_UFunction_AWebSocketServer_OnH5MsgCallback, "OnH5MsgCallback" }, // 2617158633
		{ &Z_Construct_UFunction_AWebSocketServer_Send, "Send" }, // 3976259588
		{ &Z_Construct_UFunction_AWebSocketServer_Start, "Start" }, // 461719324
		{ &Z_Construct_UFunction_AWebSocketServer_Stop, "Stop" }, // 1541620135
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebSocketServer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WebSocketServer.h" },
		{ "ModuleRelativePath", "Public/WebSocketServer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWebSocketServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWebSocketServer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWebSocketServer_Statics::ClassParams = {
		&AWebSocketServer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWebSocketServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWebSocketServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWebSocketServer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWebSocketServer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWebSocketServer, 1240246155);
	template<> ZWEBSOCKETSERVER_API UClass* StaticClass<AWebSocketServer>()
	{
		return AWebSocketServer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWebSocketServer(Z_Construct_UClass_AWebSocketServer, &AWebSocketServer::StaticClass, TEXT("/Script/ZWebSocketServer"), TEXT("AWebSocketServer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWebSocketServer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
