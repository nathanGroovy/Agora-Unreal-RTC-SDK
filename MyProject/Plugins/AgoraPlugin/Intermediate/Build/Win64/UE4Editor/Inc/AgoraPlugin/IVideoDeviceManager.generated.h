// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVideoFormat;
class UIVideoDeviceCollection;
#ifdef AGORAPLUGIN_IVideoDeviceManager_generated_h
#error "IVideoDeviceManager.generated.h already included, missing '#pragma once' in IVideoDeviceManager.h"
#endif
#define AGORAPLUGIN_IVideoDeviceManager_generated_h

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execGetDevice); \
	DECLARE_FUNCTION(execSetDevice); \
	DECLARE_FUNCTION(execGetCount);


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execGetDevice); \
	DECLARE_FUNCTION(execSetDevice); \
	DECLARE_FUNCTION(execGetCount);


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIVideoDeviceCollection(); \
	friend struct Z_Construct_UClass_UIVideoDeviceCollection_Statics; \
public: \
	DECLARE_CLASS(UIVideoDeviceCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIVideoDeviceCollection)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUIVideoDeviceCollection(); \
	friend struct Z_Construct_UClass_UIVideoDeviceCollection_Statics; \
public: \
	DECLARE_CLASS(UIVideoDeviceCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIVideoDeviceCollection)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIVideoDeviceCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIVideoDeviceCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIVideoDeviceCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIVideoDeviceCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIVideoDeviceCollection(UIVideoDeviceCollection&&); \
	NO_API UIVideoDeviceCollection(const UIVideoDeviceCollection&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIVideoDeviceCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIVideoDeviceCollection(UIVideoDeviceCollection&&); \
	NO_API UIVideoDeviceCollection(const UIVideoDeviceCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIVideoDeviceCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIVideoDeviceCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIVideoDeviceCollection)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_11_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIVideoDeviceCollection>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execStopDeviceTest); \
	DECLARE_FUNCTION(execStartDeviceTest); \
	DECLARE_FUNCTION(execGetCapability); \
	DECLARE_FUNCTION(execNumberOfCapabilities); \
	DECLARE_FUNCTION(execGetDevice); \
	DECLARE_FUNCTION(execSetDevice); \
	DECLARE_FUNCTION(execEnumerateVideoDevices);


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execStopDeviceTest); \
	DECLARE_FUNCTION(execStartDeviceTest); \
	DECLARE_FUNCTION(execGetCapability); \
	DECLARE_FUNCTION(execNumberOfCapabilities); \
	DECLARE_FUNCTION(execGetDevice); \
	DECLARE_FUNCTION(execSetDevice); \
	DECLARE_FUNCTION(execEnumerateVideoDevices);


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIVideoDeviceManager(); \
	friend struct Z_Construct_UClass_UIVideoDeviceManager_Statics; \
public: \
	DECLARE_CLASS(UIVideoDeviceManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIVideoDeviceManager)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUIVideoDeviceManager(); \
	friend struct Z_Construct_UClass_UIVideoDeviceManager_Statics; \
public: \
	DECLARE_CLASS(UIVideoDeviceManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIVideoDeviceManager)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIVideoDeviceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIVideoDeviceManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIVideoDeviceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIVideoDeviceManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIVideoDeviceManager(UIVideoDeviceManager&&); \
	NO_API UIVideoDeviceManager(const UIVideoDeviceManager&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIVideoDeviceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIVideoDeviceManager(UIVideoDeviceManager&&); \
	NO_API UIVideoDeviceManager(const UIVideoDeviceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIVideoDeviceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIVideoDeviceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIVideoDeviceManager)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_31_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIVideoDeviceManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
