// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlayerUpdatedInfo;
struct FSrcInfo;
enum class EPLAYER_PRELOAD_EVENT : uint8;
enum class EMEDIA_PLAYER_STATE : uint8;
struct FENUMWRAP_MEDIA_PLAYER_ERROR;
#ifdef AGORAPLUGIN_AgoraIMediaPlayerSourceObserver_generated_h
#error "AgoraIMediaPlayerSourceObserver.generated.h already included, missing '#pragma once' in AgoraIMediaPlayerSourceObserver.h"
#endif
#define AGORAPLUGIN_AgoraIMediaPlayerSourceObserver_generated_h

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FPlayerUpdatedInfo>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCacheStatistics_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FCacheStatistics>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSrcInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FSrcInfo>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FENUMWRAP_MEDIA_PLAYER_ERROR>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_177_DELEGATE \
struct _Script_AgoraPlugin_eventOnSeek_Parms \
{ \
	int64 offset; \
	int32 whence; \
}; \
static inline void FOnSeek_DelegateWrapper(const FMulticastScriptDelegate& OnSeek, int64 offset, int32 whence) \
{ \
	_Script_AgoraPlugin_eventOnSeek_Parms Parms; \
	Parms.offset=offset; \
	Parms.whence=whence; \
	OnSeek.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_176_DELEGATE \
struct _Script_AgoraPlugin_eventOnReadData_Parms \
{ \
	TArray<int64> buffer; \
	int32 bufferSize; \
}; \
static inline void FOnReadData_DelegateWrapper(const FMulticastScriptDelegate& OnReadData, const TArray<int64>& buffer, int32 bufferSize) \
{ \
	_Script_AgoraPlugin_eventOnReadData_Parms Parms; \
	Parms.buffer=buffer; \
	Parms.bufferSize=bufferSize; \
	OnReadData.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_175_DELEGATE \
struct _Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms \
{ \
	int32 volume; \
}; \
static inline void FOnAudioVolumeIndicationSource_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVolumeIndicationSource, int32 volume) \
{ \
	_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms Parms; \
	Parms.volume=volume; \
	OnAudioVolumeIndicationSource.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_174_DELEGATE \
struct _Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms \
{ \
	FPlayerUpdatedInfo info; \
}; \
static inline void FOnPlayerInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerInfoUpdated, FPlayerUpdatedInfo const& info) \
{ \
	_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms Parms; \
	Parms.info=info; \
	OnPlayerInfoUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_173_DELEGATE \
struct _Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms \
{ \
	FSrcInfo from; \
	FSrcInfo to; \
}; \
static inline void FOnPlayerSrcInfoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSrcInfoChanged, FSrcInfo const& from, FSrcInfo const& to) \
{ \
	_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms Parms; \
	Parms.from=from; \
	Parms.to=to; \
	OnPlayerSrcInfoChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_172_DELEGATE \
static inline void FOnAgoraCDNTokenWillExpire_DelegateWrapper(const FMulticastScriptDelegate& OnAgoraCDNTokenWillExpire) \
{ \
	OnAgoraCDNTokenWillExpire.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_171_DELEGATE \
static inline void FOnCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnCompleted) \
{ \
	OnCompleted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_170_DELEGATE \
struct _Script_AgoraPlugin_eventOnPreloadEvent_Parms \
{ \
	FString src; \
	EPLAYER_PRELOAD_EVENT event; \
}; \
static inline void FOnPreloadEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPreloadEvent, const FString& src, EPLAYER_PRELOAD_EVENT event) \
{ \
	_Script_AgoraPlugin_eventOnPreloadEvent_Parms Parms; \
	Parms.src=src; \
	Parms.event=event; \
	OnPreloadEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_169_DELEGATE \
struct _Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms \
{ \
	int64 playCachedBuffer; \
}; \
static inline void FOnPlayBufferUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayBufferUpdated, int64 playCachedBuffer) \
{ \
	_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms Parms; \
	Parms.playCachedBuffer=playCachedBuffer; \
	OnPlayBufferUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_168_DELEGATE \
struct _Script_AgoraPlugin_eventOnMetaDataSource_Parms \
{ \
	int64 data; \
	int32 length; \
}; \
static inline void FOnMetaDataSource_DelegateWrapper(const FMulticastScriptDelegate& OnMetaDataSource, int64 data, int32 length) \
{ \
	_Script_AgoraPlugin_eventOnMetaDataSource_Parms Parms; \
	Parms.data=data; \
	Parms.length=length; \
	OnMetaDataSource.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_167_DELEGATE \
struct _Script_AgoraPlugin_eventOnPlayerEvent_Parms \
{ \
	TEnumAsByte<EMEDIA_PLAYER_EVENT> eventCode; \
	int64 elapsedTime; \
	FString message; \
}; \
static inline void FOnPlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerEvent, EMEDIA_PLAYER_EVENT eventCode, int64 elapsedTime, const FString& message) \
{ \
	_Script_AgoraPlugin_eventOnPlayerEvent_Parms Parms; \
	Parms.eventCode=eventCode; \
	Parms.elapsedTime=elapsedTime; \
	Parms.message=message; \
	OnPlayerEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_166_DELEGATE \
struct _Script_AgoraPlugin_eventOnPositionChanged_Parms \
{ \
	int64 position_ms; \
}; \
static inline void FOnPositionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPositionChanged, int64 position_ms) \
{ \
	_Script_AgoraPlugin_eventOnPositionChanged_Parms Parms; \
	Parms.position_ms=position_ms; \
	OnPositionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_165_DELEGATE \
struct _Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms \
{ \
	EMEDIA_PLAYER_STATE state; \
	FENUMWRAP_MEDIA_PLAYER_ERROR ec; \
}; \
static inline void FOnPlayerSourceStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSourceStateChanged, EMEDIA_PLAYER_STATE state, FENUMWRAP_MEDIA_PLAYER_ERROR ec) \
{ \
	_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms Parms; \
	Parms.state=state; \
	Parms.ec=ec; \
	OnPlayerSourceStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_RPC_WRAPPERS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMediaPlayerSourceObserver(); \
	friend struct Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics; \
public: \
	DECLARE_CLASS(UIMediaPlayerSourceObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaPlayerSourceObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_INCLASS \
private: \
	static void StaticRegisterNativesUIMediaPlayerSourceObserver(); \
	friend struct Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics; \
public: \
	DECLARE_CLASS(UIMediaPlayerSourceObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaPlayerSourceObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaPlayerSourceObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaPlayerSourceObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaPlayerSourceObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaPlayerSourceObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaPlayerSourceObserver(UIMediaPlayerSourceObserver&&); \
	NO_API UIMediaPlayerSourceObserver(const UIMediaPlayerSourceObserver&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaPlayerSourceObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaPlayerSourceObserver(UIMediaPlayerSourceObserver&&); \
	NO_API UIMediaPlayerSourceObserver(const UIMediaPlayerSourceObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaPlayerSourceObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaPlayerSourceObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaPlayerSourceObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_185_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_188_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMediaPlayerSourceObserver>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_RPC_WRAPPERS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMediaPlayerCustomDataProvider(); \
	friend struct Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics; \
public: \
	DECLARE_CLASS(UIMediaPlayerCustomDataProvider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaPlayerCustomDataProvider)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_INCLASS \
private: \
	static void StaticRegisterNativesUIMediaPlayerCustomDataProvider(); \
	friend struct Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics; \
public: \
	DECLARE_CLASS(UIMediaPlayerCustomDataProvider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaPlayerCustomDataProvider)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaPlayerCustomDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaPlayerCustomDataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaPlayerCustomDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaPlayerCustomDataProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaPlayerCustomDataProvider(UIMediaPlayerCustomDataProvider&&); \
	NO_API UIMediaPlayerCustomDataProvider(const UIMediaPlayerCustomDataProvider&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaPlayerCustomDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaPlayerCustomDataProvider(UIMediaPlayerCustomDataProvider&&); \
	NO_API UIMediaPlayerCustomDataProvider(const UIMediaPlayerCustomDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaPlayerCustomDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaPlayerCustomDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaPlayerCustomDataProvider)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_240_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_243_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMediaPlayerCustomDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h


#define FOREACH_ENUM_EPLAYER_PRELOAD_EVENT(op) \
	op(EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_BEGIN) \
	op(EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_COMPLETE) \
	op(EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_ERROR) 

enum class EPLAYER_PRELOAD_EVENT : uint8;
template<> AGORAPLUGIN_API UEnum* StaticEnum<EPLAYER_PRELOAD_EVENT>();

#define FOREACH_ENUM_EMEDIA_PLAYER_EVENT(op) \
	op(PLAYER_EVENT_SEEK_BEGIN) \
	op(PLAYER_EVENT_SEEK_COMPLETE) \
	op(PLAYER_EVENT_SEEK_ERROR) \
	op(PLAYER_EVENT_AUDIO_TRACK_CHANGED) \
	op(PLAYER_EVENT_BUFFER_LOW) \
	op(PLAYER_EVENT_BUFFER_RECOVER) \
	op(PLAYER_EVENT_FREEZE_START) \
	op(PLAYER_EVENT_FREEZE_STOP) \
	op(PLAYER_EVENT_SWITCH_BEGIN) \
	op(PLAYER_EVENT_SWITCH_COMPLETE) \
	op(PLAYER_EVENT_SWITCH_ERROR) \
	op(PLAYER_EVENT_FIRST_DISPLAYED) \
	op(PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT) \
	op(PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE) \
	op(PLAYER_EVENT_TRY_OPEN_START) \
	op(PLAYER_EVENT_TRY_OPEN_SUCCEED) \
	op(PLAYER_EVENT_TRY_OPEN_FAILED) 
#define FOREACH_ENUM_EENUMCUSTOM_MEDIA_PLAYER_ERROR(op) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NONE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_ARGUMENTS) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERNAL) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NO_RESOURCE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_MEDIA_SOURCE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN_STREAM_TYPE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_OBJ_NOT_INITIALIZED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_CODEC_NOT_SUPPORTED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_VIDEO_RENDER_FAILED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_STATE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_URL_NOT_FOUND) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_CONNECTION_STATE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_SRC_BUFFER_UNDERFLOW) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERRUPTED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NOT_SUPPORTED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_TOKEN_EXPIRED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_IP_EXPIRED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN) 

enum class EENUMCUSTOM_MEDIA_PLAYER_ERROR : uint8;
template<> AGORAPLUGIN_API UEnum* StaticEnum<EENUMCUSTOM_MEDIA_PLAYER_ERROR>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
