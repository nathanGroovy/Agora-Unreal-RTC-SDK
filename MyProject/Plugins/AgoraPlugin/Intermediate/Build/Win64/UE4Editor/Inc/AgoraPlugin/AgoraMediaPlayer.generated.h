// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSpatialAudioParams;
enum class EAUDIO_DUAL_MONO_MODE : uint8;
class UIAudioSpectrumObserver;
class UIVideoFrameObserver;
class UIAudioPcmFrameSink;
enum class ERAW_AUDIO_FRAME_OP_MODE_TYPE : uint8;
class UIMediaPlayerSourceObserver;
enum class ERENDER_MODE_TYPE : uint8;
enum class EMEDIA_PLAYER_STATE : uint8;
struct FPlayerStreamInfo;
struct FAgoraMediaSource;
class UIMediaPlayerCustomDataProvider;
#ifdef AGORAPLUGIN_AgoraMediaPlayer_generated_h
#error "AgoraMediaPlayer.generated.h already included, missing '#pragma once' in AgoraMediaPlayer.h"
#endif
#define AGORAPLUGIN_AgoraMediaPlayer_generated_h

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FPlayerStreamInfo>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAgoraMediaSource_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FAgoraMediaSource>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSoundPositionParams); \
	DECLARE_FUNCTION(execSetSpatialAudioParams); \
	DECLARE_FUNCTION(execUnloadSrc); \
	DECLARE_FUNCTION(execPlayPreloadedSrc); \
	DECLARE_FUNCTION(execPreloadSrc); \
	DECLARE_FUNCTION(execSwitchSrc); \
	DECLARE_FUNCTION(execSwitchAgoraCDNSrc); \
	DECLARE_FUNCTION(execRenewAgoraCDNSrcToken); \
	DECLARE_FUNCTION(execEnableAutoSwitchAgoraCDN); \
	DECLARE_FUNCTION(execGetCurrentAgoraCDNIndex); \
	DECLARE_FUNCTION(execSwitchAgoraCDNLineByIndex); \
	DECLARE_FUNCTION(execGetAgoraCDNLineCount); \
	DECLARE_FUNCTION(execOpenWithAgoraCDNSrc); \
	DECLARE_FUNCTION(execGetPlaySrc); \
	DECLARE_FUNCTION(execGetPlayerSdkVersion); \
	DECLARE_FUNCTION(execSetAudioDualMonoMode); \
	DECLARE_FUNCTION(execUnregisterMediaPlayerAudioSpectrumObserver); \
	DECLARE_FUNCTION(execRegisterMediaPlayerAudioSpectrumObserver); \
	DECLARE_FUNCTION(execUnregisterVideoFrameObserver); \
	DECLARE_FUNCTION(execRegisterVideoFrameObserver); \
	DECLARE_FUNCTION(execUnregisterAudioFrameObserver); \
	DECLARE_FUNCTION(execRegisterAudioFrameObserver); \
	DECLARE_FUNCTION(execUnregisterPlayerSourceObserver); \
	DECLARE_FUNCTION(execRegisterPlayerSourceObserver); \
	DECLARE_FUNCTION(execSetRenderMode); \
	DECLARE_FUNCTION(execSetView); \
	DECLARE_FUNCTION(execGetPublishSignalVolume); \
	DECLARE_FUNCTION(execAdjustPublishSignalVolume); \
	DECLARE_FUNCTION(execGetPlayoutVolume); \
	DECLARE_FUNCTION(execAdjustPlayoutVolume); \
	DECLARE_FUNCTION(execGetMute); \
	DECLARE_FUNCTION(execMute); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execSetExternalSubtitle); \
	DECLARE_FUNCTION(execSelectInternalSubtitle); \
	DECLARE_FUNCTION(execTakeScreenshot); \
	DECLARE_FUNCTION(execSetPlayerOptionInString); \
	DECLARE_FUNCTION(execSetPlayerOptionInInt); \
	DECLARE_FUNCTION(execSelectAudioTrack); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetLoopCount); \
	DECLARE_FUNCTION(execGetStreamInfo); \
	DECLARE_FUNCTION(execGetStreamCount); \
	DECLARE_FUNCTION(execGetPlayPosition); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execSetAudioPitch); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execOpenWithMediaSource); \
	DECLARE_FUNCTION(execOpenWithCustomSource); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execGetMediaPlayerId);


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSoundPositionParams); \
	DECLARE_FUNCTION(execSetSpatialAudioParams); \
	DECLARE_FUNCTION(execUnloadSrc); \
	DECLARE_FUNCTION(execPlayPreloadedSrc); \
	DECLARE_FUNCTION(execPreloadSrc); \
	DECLARE_FUNCTION(execSwitchSrc); \
	DECLARE_FUNCTION(execSwitchAgoraCDNSrc); \
	DECLARE_FUNCTION(execRenewAgoraCDNSrcToken); \
	DECLARE_FUNCTION(execEnableAutoSwitchAgoraCDN); \
	DECLARE_FUNCTION(execGetCurrentAgoraCDNIndex); \
	DECLARE_FUNCTION(execSwitchAgoraCDNLineByIndex); \
	DECLARE_FUNCTION(execGetAgoraCDNLineCount); \
	DECLARE_FUNCTION(execOpenWithAgoraCDNSrc); \
	DECLARE_FUNCTION(execGetPlaySrc); \
	DECLARE_FUNCTION(execGetPlayerSdkVersion); \
	DECLARE_FUNCTION(execSetAudioDualMonoMode); \
	DECLARE_FUNCTION(execUnregisterMediaPlayerAudioSpectrumObserver); \
	DECLARE_FUNCTION(execRegisterMediaPlayerAudioSpectrumObserver); \
	DECLARE_FUNCTION(execUnregisterVideoFrameObserver); \
	DECLARE_FUNCTION(execRegisterVideoFrameObserver); \
	DECLARE_FUNCTION(execUnregisterAudioFrameObserver); \
	DECLARE_FUNCTION(execRegisterAudioFrameObserver); \
	DECLARE_FUNCTION(execUnregisterPlayerSourceObserver); \
	DECLARE_FUNCTION(execRegisterPlayerSourceObserver); \
	DECLARE_FUNCTION(execSetRenderMode); \
	DECLARE_FUNCTION(execSetView); \
	DECLARE_FUNCTION(execGetPublishSignalVolume); \
	DECLARE_FUNCTION(execAdjustPublishSignalVolume); \
	DECLARE_FUNCTION(execGetPlayoutVolume); \
	DECLARE_FUNCTION(execAdjustPlayoutVolume); \
	DECLARE_FUNCTION(execGetMute); \
	DECLARE_FUNCTION(execMute); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execSetExternalSubtitle); \
	DECLARE_FUNCTION(execSelectInternalSubtitle); \
	DECLARE_FUNCTION(execTakeScreenshot); \
	DECLARE_FUNCTION(execSetPlayerOptionInString); \
	DECLARE_FUNCTION(execSetPlayerOptionInInt); \
	DECLARE_FUNCTION(execSelectAudioTrack); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetLoopCount); \
	DECLARE_FUNCTION(execGetStreamInfo); \
	DECLARE_FUNCTION(execGetStreamCount); \
	DECLARE_FUNCTION(execGetPlayPosition); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execSetAudioPitch); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execOpenWithMediaSource); \
	DECLARE_FUNCTION(execOpenWithCustomSource); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execGetMediaPlayerId);


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMediaPlayer(); \
	friend struct Z_Construct_UClass_UIMediaPlayer_Statics; \
public: \
	DECLARE_CLASS(UIMediaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaPlayer)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUIMediaPlayer(); \
	friend struct Z_Construct_UClass_UIMediaPlayer_Statics; \
public: \
	DECLARE_CLASS(UIMediaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaPlayer)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaPlayer(UIMediaPlayer&&); \
	NO_API UIMediaPlayer(const UIMediaPlayer&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaPlayer(UIMediaPlayer&&); \
	NO_API UIMediaPlayer(const UIMediaPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaPlayer)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_93_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMediaPlayer>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCacheFileCount); \
	DECLARE_FUNCTION(execGetMaxCacheFileSize); \
	DECLARE_FUNCTION(execGetMaxCacheFileCount); \
	DECLARE_FUNCTION(execGetCacheDir); \
	DECLARE_FUNCTION(execEnableAutoRemoveCache); \
	DECLARE_FUNCTION(execSetMaxCacheFileSize); \
	DECLARE_FUNCTION(execSetMaxCacheFileCount); \
	DECLARE_FUNCTION(execSetCacheDir); \
	DECLARE_FUNCTION(execRemoveCacheByUri); \
	DECLARE_FUNCTION(execRemoveOldCache); \
	DECLARE_FUNCTION(execRemoveAllCaches);


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCacheFileCount); \
	DECLARE_FUNCTION(execGetMaxCacheFileSize); \
	DECLARE_FUNCTION(execGetMaxCacheFileCount); \
	DECLARE_FUNCTION(execGetCacheDir); \
	DECLARE_FUNCTION(execEnableAutoRemoveCache); \
	DECLARE_FUNCTION(execSetMaxCacheFileSize); \
	DECLARE_FUNCTION(execSetMaxCacheFileCount); \
	DECLARE_FUNCTION(execSetCacheDir); \
	DECLARE_FUNCTION(execRemoveCacheByUri); \
	DECLARE_FUNCTION(execRemoveOldCache); \
	DECLARE_FUNCTION(execRemoveAllCaches);


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMediaPlayerCacheManager(); \
	friend struct Z_Construct_UClass_UIMediaPlayerCacheManager_Statics; \
public: \
	DECLARE_CLASS(UIMediaPlayerCacheManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaPlayerCacheManager)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_INCLASS \
private: \
	static void StaticRegisterNativesUIMediaPlayerCacheManager(); \
	friend struct Z_Construct_UClass_UIMediaPlayerCacheManager_Statics; \
public: \
	DECLARE_CLASS(UIMediaPlayerCacheManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaPlayerCacheManager)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaPlayerCacheManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaPlayerCacheManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaPlayerCacheManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaPlayerCacheManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaPlayerCacheManager(UIMediaPlayerCacheManager&&); \
	NO_API UIMediaPlayerCacheManager(const UIMediaPlayerCacheManager&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaPlayerCacheManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaPlayerCacheManager(UIMediaPlayerCacheManager&&); \
	NO_API UIMediaPlayerCacheManager(const UIMediaPlayerCacheManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaPlayerCacheManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaPlayerCacheManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaPlayerCacheManager)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_216_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMediaPlayerCacheManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h


#define FOREACH_ENUM_EMEDIA_STREAM_TYPE(op) \
	op(EMEDIA_STREAM_TYPE::STREAM_TYPE_UNKNOWN) \
	op(EMEDIA_STREAM_TYPE::STREAM_TYPE_VIDEO) \
	op(EMEDIA_STREAM_TYPE::STREAM_TYPE_AUDIO) \
	op(EMEDIA_STREAM_TYPE::STREAM_TYPE_SUBTITLE) 

enum class EMEDIA_STREAM_TYPE : uint8;
template<> AGORAPLUGIN_API UEnum* StaticEnum<EMEDIA_STREAM_TYPE>();

#define FOREACH_ENUM_EAUDIO_DUAL_MONO_MODE(op) \
	op(EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_STEREO) \
	op(EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_L) \
	op(EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_R) \
	op(EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_MIX) 

enum class EAUDIO_DUAL_MONO_MODE : uint8;
template<> AGORAPLUGIN_API UEnum* StaticEnum<EAUDIO_DUAL_MONO_MODE>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
