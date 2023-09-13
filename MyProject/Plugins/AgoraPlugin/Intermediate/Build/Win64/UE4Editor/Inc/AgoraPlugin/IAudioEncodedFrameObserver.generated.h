// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEncodedAudioFrameInfo;
struct FPacket;
#ifdef AGORAPLUGIN_IAudioEncodedFrameObserver_generated_h
#error "IAudioEncodedFrameObserver.generated.h already included, missing '#pragma once' in IAudioEncodedFrameObserver.h"
#endif
#define AGORAPLUGIN_IAudioEncodedFrameObserver_generated_h

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FEncodedAudioFrameInfo>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FEncodedAudioFrameAdvancedSettings>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPacket_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FPacket>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_82_DELEGATE \
struct _Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms \
{ \
	TArray<int64> frameBuffer; \
	int32 length; \
	FEncodedAudioFrameInfo audioEncodedFrameInfo; \
}; \
static inline void FOnMixedAudioEncodedFrame_DelegateWrapper(const FMulticastScriptDelegate& OnMixedAudioEncodedFrame, const TArray<int64>& frameBuffer, int32 length, FEncodedAudioFrameInfo const& audioEncodedFrameInfo) \
{ \
	_Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms Parms; \
	Parms.frameBuffer=frameBuffer; \
	Parms.length=length; \
	Parms.audioEncodedFrameInfo=audioEncodedFrameInfo; \
	OnMixedAudioEncodedFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_81_DELEGATE \
struct _Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms \
{ \
	TArray<int64> frameBuffer; \
	int32 length; \
	FEncodedAudioFrameInfo audioEncodedFrameInfo; \
}; \
static inline void FOnPlaybackAudioEncodedFrame_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackAudioEncodedFrame, const TArray<int64>& frameBuffer, int32 length, FEncodedAudioFrameInfo const& audioEncodedFrameInfo) \
{ \
	_Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms Parms; \
	Parms.frameBuffer=frameBuffer; \
	Parms.length=length; \
	Parms.audioEncodedFrameInfo=audioEncodedFrameInfo; \
	OnPlaybackAudioEncodedFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_80_DELEGATE \
struct _Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms \
{ \
	TArray<int64> frameBuffer; \
	int32 length; \
	FEncodedAudioFrameInfo audioEncodedFrameInfo; \
}; \
static inline void FOnRecordAudioEncodedFrame_DelegateWrapper(const FMulticastScriptDelegate& OnRecordAudioEncodedFrame, const TArray<int64>& frameBuffer, int32 length, FEncodedAudioFrameInfo const& audioEncodedFrameInfo) \
{ \
	_Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms Parms; \
	Parms.frameBuffer=frameBuffer; \
	Parms.length=length; \
	Parms.audioEncodedFrameInfo=audioEncodedFrameInfo; \
	OnRecordAudioEncodedFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_79_DELEGATE \
struct _Script_AgoraPlugin_eventOnReceiveVideoPacket_Parms \
{ \
	FPacket packet; \
}; \
static inline void FOnReceiveVideoPacket_DelegateWrapper(const FMulticastScriptDelegate& OnReceiveVideoPacket, FPacket const& packet) \
{ \
	_Script_AgoraPlugin_eventOnReceiveVideoPacket_Parms Parms; \
	Parms.packet=packet; \
	OnReceiveVideoPacket.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_78_DELEGATE \
struct _Script_AgoraPlugin_eventOnReceiveAudioPacket_Parms \
{ \
	FPacket packet; \
}; \
static inline void FOnReceiveAudioPacket_DelegateWrapper(const FMulticastScriptDelegate& OnReceiveAudioPacket, FPacket const& packet) \
{ \
	_Script_AgoraPlugin_eventOnReceiveAudioPacket_Parms Parms; \
	Parms.packet=packet; \
	OnReceiveAudioPacket.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_77_DELEGATE \
struct _Script_AgoraPlugin_eventOnSendVideoPacket_Parms \
{ \
	FPacket packet; \
}; \
static inline void FOnSendVideoPacket_DelegateWrapper(const FMulticastScriptDelegate& OnSendVideoPacket, FPacket const& packet) \
{ \
	_Script_AgoraPlugin_eventOnSendVideoPacket_Parms Parms; \
	Parms.packet=packet; \
	OnSendVideoPacket.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_76_DELEGATE \
struct _Script_AgoraPlugin_eventOnSendAudioPacket_Parms \
{ \
	FPacket packet; \
}; \
static inline void FOnSendAudioPacket_DelegateWrapper(const FMulticastScriptDelegate& OnSendAudioPacket, FPacket const& packet) \
{ \
	_Script_AgoraPlugin_eventOnSendAudioPacket_Parms Parms; \
	Parms.packet=packet; \
	OnSendAudioPacket.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_RPC_WRAPPERS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIPacketObserver(); \
	friend struct Z_Construct_UClass_UIPacketObserver_Statics; \
public: \
	DECLARE_CLASS(UIPacketObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIPacketObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUIPacketObserver(); \
	friend struct Z_Construct_UClass_UIPacketObserver_Statics; \
public: \
	DECLARE_CLASS(UIPacketObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIPacketObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIPacketObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIPacketObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIPacketObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIPacketObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIPacketObserver(UIPacketObserver&&); \
	NO_API UIPacketObserver(const UIPacketObserver&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIPacketObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIPacketObserver(UIPacketObserver&&); \
	NO_API UIPacketObserver(const UIPacketObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIPacketObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIPacketObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIPacketObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_87_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIPacketObserver>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_RPC_WRAPPERS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIAudioEncodedFrameObserver(); \
	friend struct Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics; \
public: \
	DECLARE_CLASS(UIAudioEncodedFrameObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIAudioEncodedFrameObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_INCLASS \
private: \
	static void StaticRegisterNativesUIAudioEncodedFrameObserver(); \
	friend struct Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics; \
public: \
	DECLARE_CLASS(UIAudioEncodedFrameObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIAudioEncodedFrameObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAudioEncodedFrameObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAudioEncodedFrameObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAudioEncodedFrameObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAudioEncodedFrameObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAudioEncodedFrameObserver(UIAudioEncodedFrameObserver&&); \
	NO_API UIAudioEncodedFrameObserver(const UIAudioEncodedFrameObserver&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAudioEncodedFrameObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAudioEncodedFrameObserver(UIAudioEncodedFrameObserver&&); \
	NO_API UIAudioEncodedFrameObserver(const UIAudioEncodedFrameObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAudioEncodedFrameObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAudioEncodedFrameObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAudioEncodedFrameObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_114_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIAudioEncodedFrameObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h


#define FOREACH_ENUM_EAUDIO_CODEC_TYPE(op) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_NULL) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_OPUS) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMA) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMU) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_G722) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_AACLC) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_JC1) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC2) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_LPCNET) 

enum class EAUDIO_CODEC_TYPE : uint8;
template<> AGORAPLUGIN_API UEnum* StaticEnum<EAUDIO_CODEC_TYPE>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
