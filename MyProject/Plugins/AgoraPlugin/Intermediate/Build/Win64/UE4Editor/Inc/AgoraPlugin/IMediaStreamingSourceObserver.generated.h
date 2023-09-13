// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESTREAMING_SRC_ERR : uint8;
enum class ESTREAMING_SRC_STATE : uint8;
#ifdef AGORAPLUGIN_IMediaStreamingSourceObserver_generated_h
#error "IMediaStreamingSourceObserver.generated.h already included, missing '#pragma once' in IMediaStreamingSourceObserver.h"
#endif
#define AGORAPLUGIN_IMediaStreamingSourceObserver_generated_h

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_16_DELEGATE \
struct _Script_AgoraPlugin_eventOnMetaData_Parms \
{ \
	int64 data; \
	int32 length; \
}; \
static inline void FOnMetaData_DelegateWrapper(const FMulticastScriptDelegate& OnMetaData, const int64 data, int32 length) \
{ \
	_Script_AgoraPlugin_eventOnMetaData_Parms Parms; \
	Parms.data=data; \
	Parms.length=length; \
	OnMetaData.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_15_DELEGATE \
struct _Script_AgoraPlugin_eventOnProgress_Parms \
{ \
	int64 position_ms; \
}; \
static inline void FOnProgress_DelegateWrapper(const FMulticastScriptDelegate& OnProgress, int64 position_ms) \
{ \
	_Script_AgoraPlugin_eventOnProgress_Parms Parms; \
	Parms.position_ms=position_ms; \
	OnProgress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_14_DELEGATE \
struct _Script_AgoraPlugin_eventOnEofOnce_Parms \
{ \
	int64 progress_ms; \
	int64 repeat_count; \
}; \
static inline void FOnEofOnce_DelegateWrapper(const FMulticastScriptDelegate& OnEofOnce, int64 progress_ms, int64 repeat_count) \
{ \
	_Script_AgoraPlugin_eventOnEofOnce_Parms Parms; \
	Parms.progress_ms=progress_ms; \
	Parms.repeat_count=repeat_count; \
	OnEofOnce.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_13_DELEGATE \
struct _Script_AgoraPlugin_eventOnSeekDone_Parms \
{ \
	ESTREAMING_SRC_ERR err_code; \
}; \
static inline void FOnSeekDone_DelegateWrapper(const FMulticastScriptDelegate& OnSeekDone, ESTREAMING_SRC_ERR err_code) \
{ \
	_Script_AgoraPlugin_eventOnSeekDone_Parms Parms; \
	Parms.err_code=err_code; \
	OnSeekDone.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_12_DELEGATE \
struct _Script_AgoraPlugin_eventOnOpenDone_Parms \
{ \
	ESTREAMING_SRC_ERR err_code; \
}; \
static inline void FOnOpenDone_DelegateWrapper(const FMulticastScriptDelegate& OnOpenDone, ESTREAMING_SRC_ERR err_code) \
{ \
	_Script_AgoraPlugin_eventOnOpenDone_Parms Parms; \
	Parms.err_code=err_code; \
	OnOpenDone.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_11_DELEGATE \
struct _Script_AgoraPlugin_eventOnStateChanged_Parms \
{ \
	ESTREAMING_SRC_STATE state; \
	ESTREAMING_SRC_ERR err_code; \
}; \
static inline void FOnStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStateChanged, ESTREAMING_SRC_STATE state, ESTREAMING_SRC_ERR err_code) \
{ \
	_Script_AgoraPlugin_eventOnStateChanged_Parms Parms; \
	Parms.state=state; \
	Parms.err_code=err_code; \
	OnStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_RPC_WRAPPERS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMediaStreamingSourceObserver(); \
	friend struct Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics; \
public: \
	DECLARE_CLASS(UIMediaStreamingSourceObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaStreamingSourceObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUIMediaStreamingSourceObserver(); \
	friend struct Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics; \
public: \
	DECLARE_CLASS(UIMediaStreamingSourceObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaStreamingSourceObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaStreamingSourceObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaStreamingSourceObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaStreamingSourceObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaStreamingSourceObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaStreamingSourceObserver(UIMediaStreamingSourceObserver&&); \
	NO_API UIMediaStreamingSourceObserver(const UIMediaStreamingSourceObserver&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaStreamingSourceObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaStreamingSourceObserver(UIMediaStreamingSourceObserver&&); \
	NO_API UIMediaStreamingSourceObserver(const UIMediaStreamingSourceObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaStreamingSourceObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaStreamingSourceObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaStreamingSourceObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_23_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMediaStreamingSourceObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
