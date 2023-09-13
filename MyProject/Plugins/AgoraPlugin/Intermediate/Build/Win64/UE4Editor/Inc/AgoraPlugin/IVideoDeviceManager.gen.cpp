// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/IVideoDeviceManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVideoDeviceManager() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIVideoDeviceCollection_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIVideoDeviceCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIVideoDeviceManager_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIVideoDeviceManager();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVideoFormat();
// End Cross Module References
	DEFINE_FUNCTION(UIVideoDeviceCollection::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceCollection::execGetDevice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceNameUTF8);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceIdUTF8);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDevice(Z_Param_index,Z_Param_Out_deviceNameUTF8,Z_Param_Out_deviceIdUTF8);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceCollection::execSetDevice)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceIdUTF8);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetDevice(Z_Param_Out_deviceIdUTF8);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceCollection::execGetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCount();
		P_NATIVE_END;
	}
	void UIVideoDeviceCollection::StaticRegisterNativesUIVideoDeviceCollection()
	{
		UClass* Class = UIVideoDeviceCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCount", &UIVideoDeviceCollection::execGetCount },
			{ "GetDevice", &UIVideoDeviceCollection::execGetDevice },
			{ "Release", &UIVideoDeviceCollection::execRelease },
			{ "SetDevice", &UIVideoDeviceCollection::execSetDevice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics
	{
		struct IVideoDeviceCollection_eventGetCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventGetCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceCollection, nullptr, "GetCount", nullptr, nullptr, sizeof(IVideoDeviceCollection_eventGetCount_Parms), Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceCollection_GetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics
	{
		struct IVideoDeviceCollection_eventGetDevice_Parms
		{
			int32 index;
			FString deviceNameUTF8;
			FString deviceIdUTF8;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceNameUTF8;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventGetDevice_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_deviceNameUTF8 = { "deviceNameUTF8", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventGetDevice_Parms, deviceNameUTF8), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventGetDevice_Parms, deviceIdUTF8), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventGetDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_deviceNameUTF8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_deviceIdUTF8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceCollection, nullptr, "GetDevice", nullptr, nullptr, sizeof(IVideoDeviceCollection_eventGetDevice_Parms), Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceCollection_Release_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceCollection_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceCollection_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceCollection, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIVideoDeviceCollection_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceCollection_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIVideoDeviceCollection_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics
	{
		struct IVideoDeviceCollection_eventSetDevice_Parms
		{
			FString deviceIdUTF8;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventSetDevice_Parms, deviceIdUTF8), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventSetDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::NewProp_deviceIdUTF8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceCollection, nullptr, "SetDevice", nullptr, nullptr, sizeof(IVideoDeviceCollection_eventSetDevice_Parms), Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIVideoDeviceCollection_NoRegister()
	{
		return UIVideoDeviceCollection::StaticClass();
	}
	struct Z_Construct_UClass_UIVideoDeviceCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIVideoDeviceCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIVideoDeviceCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIVideoDeviceCollection_GetCount, "GetCount" }, // 4142573077
		{ &Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice, "GetDevice" }, // 3404850564
		{ &Z_Construct_UFunction_UIVideoDeviceCollection_Release, "Release" }, // 3473551765
		{ &Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice, "SetDevice" }, // 1101542495
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoDeviceCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IVideoDeviceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIVideoDeviceCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIVideoDeviceCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIVideoDeviceCollection_Statics::ClassParams = {
		&UIVideoDeviceCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIVideoDeviceCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoDeviceCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIVideoDeviceCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIVideoDeviceCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIVideoDeviceCollection, 789156320);
	template<> AGORAPLUGIN_API UClass* StaticClass<UIVideoDeviceCollection>()
	{
		return UIVideoDeviceCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIVideoDeviceCollection(Z_Construct_UClass_UIVideoDeviceCollection, &UIVideoDeviceCollection::StaticClass, TEXT("/Script/AgoraPlugin"), TEXT("UIVideoDeviceCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIVideoDeviceCollection);
	DEFINE_FUNCTION(UIVideoDeviceManager::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execStopDeviceTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StopDeviceTest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execStartDeviceTest)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_hwnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StartDeviceTest(Z_Param_hwnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execGetCapability)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceIdUTF8);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceCapabilityNumber);
		P_GET_STRUCT_REF(FVideoFormat,Z_Param_Out_capability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCapability(Z_Param_deviceIdUTF8,Z_Param_deviceCapabilityNumber,Z_Param_Out_capability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execNumberOfCapabilities)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceIdUTF8);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NumberOfCapabilities(Z_Param_deviceIdUTF8);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execGetDevice)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceIdUTF8);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDevice(Z_Param_Out_deviceIdUTF8);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execSetDevice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceIdUTF8);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetDevice(Z_Param_deviceIdUTF8);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execEnumerateVideoDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UIVideoDeviceCollection**)Z_Param__Result=P_THIS->EnumerateVideoDevices();
		P_NATIVE_END;
	}
	void UIVideoDeviceManager::StaticRegisterNativesUIVideoDeviceManager()
	{
		UClass* Class = UIVideoDeviceManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateVideoDevices", &UIVideoDeviceManager::execEnumerateVideoDevices },
			{ "GetCapability", &UIVideoDeviceManager::execGetCapability },
			{ "GetDevice", &UIVideoDeviceManager::execGetDevice },
			{ "NumberOfCapabilities", &UIVideoDeviceManager::execNumberOfCapabilities },
			{ "Release", &UIVideoDeviceManager::execRelease },
			{ "SetDevice", &UIVideoDeviceManager::execSetDevice },
			{ "StartDeviceTest", &UIVideoDeviceManager::execStartDeviceTest },
			{ "StopDeviceTest", &UIVideoDeviceManager::execStopDeviceTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics
	{
		struct IVideoDeviceManager_eventEnumerateVideoDevices_Parms
		{
			UIVideoDeviceCollection* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventEnumerateVideoDevices_Parms, ReturnValue), Z_Construct_UClass_UIVideoDeviceCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "EnumerateVideoDevices", nullptr, nullptr, sizeof(IVideoDeviceManager_eventEnumerateVideoDevices_Parms), Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics
	{
		struct IVideoDeviceManager_eventGetCapability_Parms
		{
			FString deviceIdUTF8;
			int32 deviceCapabilityNumber;
			FVideoFormat capability;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_deviceCapabilityNumber;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_capability;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventGetCapability_Parms, deviceIdUTF8), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_deviceCapabilityNumber = { "deviceCapabilityNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventGetCapability_Parms, deviceCapabilityNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_capability = { "capability", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventGetCapability_Parms, capability), Z_Construct_UScriptStruct_FVideoFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventGetCapability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_deviceIdUTF8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_deviceCapabilityNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_capability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "GetCapability", nullptr, nullptr, sizeof(IVideoDeviceManager_eventGetCapability_Parms), Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_GetCapability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics
	{
		struct IVideoDeviceManager_eventGetDevice_Parms
		{
			FString deviceIdUTF8;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventGetDevice_Parms, deviceIdUTF8), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventGetDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::NewProp_deviceIdUTF8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "GetDevice", nullptr, nullptr, sizeof(IVideoDeviceManager_eventGetDevice_Parms), Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_GetDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics
	{
		struct IVideoDeviceManager_eventNumberOfCapabilities_Parms
		{
			FString deviceIdUTF8;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventNumberOfCapabilities_Parms, deviceIdUTF8), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventNumberOfCapabilities_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::NewProp_deviceIdUTF8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "NumberOfCapabilities", nullptr, nullptr, sizeof(IVideoDeviceManager_eventNumberOfCapabilities_Parms), Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_Release_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIVideoDeviceManager_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics
	{
		struct IVideoDeviceManager_eventSetDevice_Parms
		{
			FString deviceIdUTF8;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventSetDevice_Parms, deviceIdUTF8), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventSetDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::NewProp_deviceIdUTF8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "SetDevice", nullptr, nullptr, sizeof(IVideoDeviceManager_eventSetDevice_Parms), Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_SetDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics
	{
		struct IVideoDeviceManager_eventStartDeviceTest_Parms
		{
			int64 hwnd;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_hwnd;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::NewProp_hwnd = { "hwnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventStartDeviceTest_Parms, hwnd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventStartDeviceTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::NewProp_hwnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "StartDeviceTest", nullptr, nullptr, sizeof(IVideoDeviceManager_eventStartDeviceTest_Parms), Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics
	{
		struct IVideoDeviceManager_eventStopDeviceTest_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IVideoDeviceManager_eventStopDeviceTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "StopDeviceTest", nullptr, nullptr, sizeof(IVideoDeviceManager_eventStopDeviceTest_Parms), Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIVideoDeviceManager_NoRegister()
	{
		return UIVideoDeviceManager::StaticClass();
	}
	struct Z_Construct_UClass_UIVideoDeviceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIVideoDeviceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIVideoDeviceManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices, "EnumerateVideoDevices" }, // 2821703024
		{ &Z_Construct_UFunction_UIVideoDeviceManager_GetCapability, "GetCapability" }, // 3132098627
		{ &Z_Construct_UFunction_UIVideoDeviceManager_GetDevice, "GetDevice" }, // 2369361664
		{ &Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities, "NumberOfCapabilities" }, // 3320551832
		{ &Z_Construct_UFunction_UIVideoDeviceManager_Release, "Release" }, // 841227744
		{ &Z_Construct_UFunction_UIVideoDeviceManager_SetDevice, "SetDevice" }, // 476859818
		{ &Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest, "StartDeviceTest" }, // 4243851073
		{ &Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest, "StopDeviceTest" }, // 3825669310
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoDeviceManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IVideoDeviceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIVideoDeviceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIVideoDeviceManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIVideoDeviceManager_Statics::ClassParams = {
		&UIVideoDeviceManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIVideoDeviceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoDeviceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIVideoDeviceManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIVideoDeviceManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIVideoDeviceManager, 2759981925);
	template<> AGORAPLUGIN_API UClass* StaticClass<UIVideoDeviceManager>()
	{
		return UIVideoDeviceManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIVideoDeviceManager(Z_Construct_UClass_UIVideoDeviceManager, &UIVideoDeviceManager::StaticClass, TEXT("/Script/AgoraPlugin"), TEXT("UIVideoDeviceManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIVideoDeviceManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
