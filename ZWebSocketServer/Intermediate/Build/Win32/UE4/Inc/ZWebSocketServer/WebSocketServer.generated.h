// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZWEBSOCKETSERVER_WebSocketServer_generated_h
#error "WebSocketServer.generated.h already included, missing '#pragma once' in WebSocketServer.h"
#endif
#define ZWEBSOCKETSERVER_WebSocketServer_generated_h

#define HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_SPARSE_DATA
#define HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart);


#define HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart);


#define HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_EVENT_PARMS \
	struct WebSocketServer_eventOnH5MsgCallback_Parms \
	{ \
		FString msg; \
	};


#define HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_CALLBACK_WRAPPERS
#define HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWebSocketServer(); \
	friend struct Z_Construct_UClass_AWebSocketServer_Statics; \
public: \
	DECLARE_CLASS(AWebSocketServer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZWebSocketServer"), NO_API) \
	DECLARE_SERIALIZER(AWebSocketServer)


#define HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAWebSocketServer(); \
	friend struct Z_Construct_UClass_AWebSocketServer_Statics; \
public: \
	DECLARE_CLASS(AWebSocketServer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZWebSocketServer"), NO_API) \
	DECLARE_SERIALIZER(AWebSocketServer)


#define HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWebSocketServer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWebSocketServer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWebSocketServer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWebSocketServer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWebSocketServer(AWebSocketServer&&); \
	NO_API AWebSocketServer(const AWebSocketServer&); \
public:


#define HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWebSocketServer(AWebSocketServer&&); \
	NO_API AWebSocketServer(const AWebSocketServer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWebSocketServer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWebSocketServer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWebSocketServer)


#define HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_15_PROLOG \
	HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_EVENT_PARMS


#define HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_SPARSE_DATA \
	HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_RPC_WRAPPERS \
	HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_INCLASS \
	HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_SPARSE_DATA \
	HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZWEBSOCKETSERVER_API UClass* StaticClass<class AWebSocketServer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ZWebSocketServer_Source_ZWebSocketServer_Public_WebSocketServer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
