// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRecorderInfo;
struct FENUMWRAP_RecorderState;
enum class ERecorderErrorCode : uint8;
#ifdef AGORAPLUGIN_IMediaRecorderObserver_generated_h
#error "IMediaRecorderObserver.generated.h already included, missing '#pragma once' in IMediaRecorderObserver.h"
#endif
#define AGORAPLUGIN_IMediaRecorderObserver_generated_h

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_13_DELEGATE \
struct _Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms \
{ \
	FString channelId; \
	int64 uid; \
	FRecorderInfo info; \
}; \
static inline void FOnRecorderInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnRecorderInfoUpdated, const FString& channelId, int64 uid, FRecorderInfo const& info) \
{ \
	_Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.uid=uid; \
	Parms.info=info; \
	OnRecorderInfoUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_12_DELEGATE \
struct _Script_AgoraPlugin_eventOnRecorderStateChanged_Parms \
{ \
	FString channelId; \
	int64 uid; \
	FENUMWRAP_RecorderState state; \
	ERecorderErrorCode error; \
}; \
static inline void FOnRecorderStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRecorderStateChanged, const FString& channelId, int64 uid, FENUMWRAP_RecorderState state, ERecorderErrorCode error) \
{ \
	_Script_AgoraPlugin_eventOnRecorderStateChanged_Parms Parms; \
	Parms.channelId=channelId; \
	Parms.uid=uid; \
	Parms.state=state; \
	Parms.error=error; \
	OnRecorderStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_RPC_WRAPPERS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMediaRecorderObserver(); \
	friend struct Z_Construct_UClass_UIMediaRecorderObserver_Statics; \
public: \
	DECLARE_CLASS(UIMediaRecorderObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaRecorderObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUIMediaRecorderObserver(); \
	friend struct Z_Construct_UClass_UIMediaRecorderObserver_Statics; \
public: \
	DECLARE_CLASS(UIMediaRecorderObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaRecorderObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaRecorderObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaRecorderObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaRecorderObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaRecorderObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaRecorderObserver(UIMediaRecorderObserver&&); \
	NO_API UIMediaRecorderObserver(const UIMediaRecorderObserver&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaRecorderObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaRecorderObserver(UIMediaRecorderObserver&&); \
	NO_API UIMediaRecorderObserver(const UIMediaRecorderObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaRecorderObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaRecorderObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaRecorderObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_17_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMediaRecorderObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
