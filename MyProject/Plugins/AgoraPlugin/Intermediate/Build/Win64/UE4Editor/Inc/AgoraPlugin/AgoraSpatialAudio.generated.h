// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSpatialAudioZone;
struct FRemoteVoicePositionInfo;
struct FVector;
struct FRtcConnection;
struct FLocalSpatialAudioConfig;
#ifdef AGORAPLUGIN_AgoraSpatialAudio_generated_h
#error "AgoraSpatialAudio.generated.h already included, missing '#pragma once' in AgoraSpatialAudio.h"
#endif
#define AGORAPLUGIN_AgoraSpatialAudio_generated_h

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FRemoteVoicePositionInfo>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FLocalSpatialAudioConfig>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execmuteRemoteAudioStream); \
	DECLARE_FUNCTION(execSetPlayerAttenuation); \
	DECLARE_FUNCTION(execSetZones); \
	DECLARE_FUNCTION(execMuteAllRemoteAudioStreams); \
	DECLARE_FUNCTION(execMuteLocalAudioStream); \
	DECLARE_FUNCTION(execSetParameters); \
	DECLARE_FUNCTION(execUpdatePlayerPositionInfo); \
	DECLARE_FUNCTION(execUpdateSelfPositionEx); \
	DECLARE_FUNCTION(execUpdateSelfPosition); \
	DECLARE_FUNCTION(execSetDistanceUnit); \
	DECLARE_FUNCTION(execSetAudioRecvRange); \
	DECLARE_FUNCTION(execSetMaxAudioRecvCount); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execSetRemoteAudioAttenuation); \
	DECLARE_FUNCTION(execClearRemotePositionsEx); \
	DECLARE_FUNCTION(execClearRemotePositions); \
	DECLARE_FUNCTION(execRemoveRemotePositionEx); \
	DECLARE_FUNCTION(execRemoveRemotePosition); \
	DECLARE_FUNCTION(execUpdateRemotePositionEx); \
	DECLARE_FUNCTION(execUpdateRemotePosition); \
	DECLARE_FUNCTION(execInitialize);


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execmuteRemoteAudioStream); \
	DECLARE_FUNCTION(execSetPlayerAttenuation); \
	DECLARE_FUNCTION(execSetZones); \
	DECLARE_FUNCTION(execMuteAllRemoteAudioStreams); \
	DECLARE_FUNCTION(execMuteLocalAudioStream); \
	DECLARE_FUNCTION(execSetParameters); \
	DECLARE_FUNCTION(execUpdatePlayerPositionInfo); \
	DECLARE_FUNCTION(execUpdateSelfPositionEx); \
	DECLARE_FUNCTION(execUpdateSelfPosition); \
	DECLARE_FUNCTION(execSetDistanceUnit); \
	DECLARE_FUNCTION(execSetAudioRecvRange); \
	DECLARE_FUNCTION(execSetMaxAudioRecvCount); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execSetRemoteAudioAttenuation); \
	DECLARE_FUNCTION(execClearRemotePositionsEx); \
	DECLARE_FUNCTION(execClearRemotePositions); \
	DECLARE_FUNCTION(execRemoveRemotePositionEx); \
	DECLARE_FUNCTION(execRemoveRemotePosition); \
	DECLARE_FUNCTION(execUpdateRemotePositionEx); \
	DECLARE_FUNCTION(execUpdateRemotePosition); \
	DECLARE_FUNCTION(execInitialize);


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUILocalSpatialAudioEngine(); \
	friend struct Z_Construct_UClass_UILocalSpatialAudioEngine_Statics; \
public: \
	DECLARE_CLASS(UILocalSpatialAudioEngine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UILocalSpatialAudioEngine)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUILocalSpatialAudioEngine(); \
	friend struct Z_Construct_UClass_UILocalSpatialAudioEngine_Statics; \
public: \
	DECLARE_CLASS(UILocalSpatialAudioEngine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UILocalSpatialAudioEngine)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UILocalSpatialAudioEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UILocalSpatialAudioEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UILocalSpatialAudioEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UILocalSpatialAudioEngine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UILocalSpatialAudioEngine(UILocalSpatialAudioEngine&&); \
	NO_API UILocalSpatialAudioEngine(const UILocalSpatialAudioEngine&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UILocalSpatialAudioEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UILocalSpatialAudioEngine(UILocalSpatialAudioEngine&&); \
	NO_API UILocalSpatialAudioEngine(const UILocalSpatialAudioEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UILocalSpatialAudioEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UILocalSpatialAudioEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UILocalSpatialAudioEngine)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_33_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UILocalSpatialAudioEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
