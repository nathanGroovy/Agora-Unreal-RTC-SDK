// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMediaRecorderConfiguration;
class UIMediaRecorderObserver;
#ifdef AGORAPLUGIN_AgoraMediaRecorder_generated_h
#error "AgoraMediaRecorder.generated.h already included, missing '#pragma once' in AgoraMediaRecorder.h"
#endif
#define AGORAPLUGIN_AgoraMediaRecorder_generated_h

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FMediaRecorderConfiguration>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execSetMediaRecorderObserver);


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execSetMediaRecorderObserver);


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMediaRecorder(); \
	friend struct Z_Construct_UClass_UIMediaRecorder_Statics; \
public: \
	DECLARE_CLASS(UIMediaRecorder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaRecorder)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUIMediaRecorder(); \
	friend struct Z_Construct_UClass_UIMediaRecorder_Statics; \
public: \
	DECLARE_CLASS(UIMediaRecorder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaRecorder)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaRecorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaRecorder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaRecorder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaRecorder(UIMediaRecorder&&); \
	NO_API UIMediaRecorder(const UIMediaRecorder&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaRecorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaRecorder(UIMediaRecorder&&); \
	NO_API UIMediaRecorder(const UIMediaRecorder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaRecorder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaRecorder)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_48_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMediaRecorder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h


#define FOREACH_ENUM_EMEDIARECORDERSTREAMTYPE(op) \
	op(EMediaRecorderStreamType::STREAM_TYPE_NULL) \
	op(EMediaRecorderStreamType::STREAM_TYPE_AUDIO) \
	op(EMediaRecorderStreamType::STREAM_TYPE_VIDEO) \
	op(EMediaRecorderStreamType::STREAM_TYPE_BOTH) 

enum class EMediaRecorderStreamType : uint8;
template<> AGORAPLUGIN_API UEnum* StaticEnum<EMediaRecorderStreamType>();

#define FOREACH_ENUM_EMEDIARECORDERCONTAINERFORMAT(op) \
	op(EMediaRecorderContainerFormat::FORMAT_NULL) \
	op(EMediaRecorderContainerFormat::FORMAT_MP4) 

enum class EMediaRecorderContainerFormat : uint8;
template<> AGORAPLUGIN_API UEnum* StaticEnum<EMediaRecorderContainerFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
