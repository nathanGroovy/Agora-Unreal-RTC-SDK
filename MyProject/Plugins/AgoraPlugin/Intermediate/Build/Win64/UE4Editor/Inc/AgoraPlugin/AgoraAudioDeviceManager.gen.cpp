// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraAudioDeviceManager() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioDeviceCollection_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioDeviceCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioDeviceManager_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioDeviceManager();
// End Cross Module References
	DEFINE_FUNCTION(UIAudioDeviceCollection::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceCollection::execIsApplicationMute)
	{
		P_GET_UBOOL(Z_Param_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IsApplicationMute(Z_Param_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceCollection::execSetApplicationMute)
	{
		P_GET_UBOOL(Z_Param_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetApplicationMute(Z_Param_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceCollection::execGetApplicationVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetApplicationVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceCollection::execSetApplicationVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetApplicationVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceCollection::execGetDefaultDevice)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDefaultDevice(Z_Param_Out_deviceName,Z_Param_Out_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceCollection::execSetDevice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetDevice(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceCollection::execGetDevice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDevice(Z_Param_index,Z_Param_Out_deviceName,Z_Param_Out_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceCollection::execGetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCount();
		P_NATIVE_END;
	}
	void UIAudioDeviceCollection::StaticRegisterNativesUIAudioDeviceCollection()
	{
		UClass* Class = UIAudioDeviceCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetApplicationVolume", &UIAudioDeviceCollection::execGetApplicationVolume },
			{ "GetCount", &UIAudioDeviceCollection::execGetCount },
			{ "GetDefaultDevice", &UIAudioDeviceCollection::execGetDefaultDevice },
			{ "GetDevice", &UIAudioDeviceCollection::execGetDevice },
			{ "IsApplicationMute", &UIAudioDeviceCollection::execIsApplicationMute },
			{ "Release", &UIAudioDeviceCollection::execRelease },
			{ "SetApplicationMute", &UIAudioDeviceCollection::execSetApplicationMute },
			{ "SetApplicationVolume", &UIAudioDeviceCollection::execSetApplicationVolume },
			{ "SetDevice", &UIAudioDeviceCollection::execSetDevice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume_Statics
	{
		struct IAudioDeviceCollection_eventGetApplicationVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventGetApplicationVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventGetApplicationVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceCollection, nullptr, "GetApplicationVolume", nullptr, nullptr, sizeof(IAudioDeviceCollection_eventGetApplicationVolume_Parms), Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceCollection_GetCount_Statics
	{
		struct IAudioDeviceCollection_eventGetCount_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventGetCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceCollection_GetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_GetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceCollection_GetCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceCollection_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceCollection, nullptr, "GetCount", nullptr, nullptr, sizeof(IAudioDeviceCollection_eventGetCount_Parms), Z_Construct_UFunction_UIAudioDeviceCollection_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_GetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceCollection_GetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_GetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceCollection_GetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceCollection_GetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics
	{
		struct IAudioDeviceCollection_eventGetDefaultDevice_Parms
		{
			FString deviceName;
			FString deviceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventGetDefaultDevice_Parms, deviceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventGetDefaultDevice_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventGetDefaultDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::NewProp_deviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::NewProp_deviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceCollection, nullptr, "GetDefaultDevice", nullptr, nullptr, sizeof(IAudioDeviceCollection_eventGetDefaultDevice_Parms), Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics
	{
		struct IAudioDeviceCollection_eventGetDevice_Parms
		{
			int32 index;
			FString deviceName;
			FString deviceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventGetDevice_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventGetDevice_Parms, deviceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventGetDevice_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventGetDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::NewProp_deviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::NewProp_deviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceCollection, nullptr, "GetDevice", nullptr, nullptr, sizeof(IAudioDeviceCollection_eventGetDevice_Parms), Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics
	{
		struct IAudioDeviceCollection_eventIsApplicationMute_Parms
		{
			bool mute;
			int32 ReturnValue;
		};
		static void NewProp_mute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mute;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((IAudioDeviceCollection_eventIsApplicationMute_Parms*)Obj)->mute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IAudioDeviceCollection_eventIsApplicationMute_Parms), &Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::NewProp_mute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventIsApplicationMute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::NewProp_mute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceCollection, nullptr, "IsApplicationMute", nullptr, nullptr, sizeof(IAudioDeviceCollection_eventIsApplicationMute_Parms), Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceCollection_Release_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceCollection_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceCollection_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceCollection, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceCollection_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceCollection_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceCollection_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics
	{
		struct IAudioDeviceCollection_eventSetApplicationMute_Parms
		{
			bool mute;
			int32 ReturnValue;
		};
		static void NewProp_mute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mute;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((IAudioDeviceCollection_eventSetApplicationMute_Parms*)Obj)->mute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IAudioDeviceCollection_eventSetApplicationMute_Parms), &Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::NewProp_mute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventSetApplicationMute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::NewProp_mute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceCollection, nullptr, "SetApplicationMute", nullptr, nullptr, sizeof(IAudioDeviceCollection_eventSetApplicationMute_Parms), Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume_Statics
	{
		struct IAudioDeviceCollection_eventSetApplicationVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventSetApplicationVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventSetApplicationVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceCollection, nullptr, "SetApplicationVolume", nullptr, nullptr, sizeof(IAudioDeviceCollection_eventSetApplicationVolume_Parms), Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice_Statics
	{
		struct IAudioDeviceCollection_eventSetDevice_Parms
		{
			FString deviceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventSetDevice_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceCollection_eventSetDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice_Statics::NewProp_deviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceCollection, nullptr, "SetDevice", nullptr, nullptr, sizeof(IAudioDeviceCollection_eventSetDevice_Parms), Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIAudioDeviceCollection_NoRegister()
	{
		return UIAudioDeviceCollection::StaticClass();
	}
	struct Z_Construct_UClass_UIAudioDeviceCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAudioDeviceCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIAudioDeviceCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIAudioDeviceCollection_GetApplicationVolume, "GetApplicationVolume" }, // 2524144369
		{ &Z_Construct_UFunction_UIAudioDeviceCollection_GetCount, "GetCount" }, // 2193012910
		{ &Z_Construct_UFunction_UIAudioDeviceCollection_GetDefaultDevice, "GetDefaultDevice" }, // 2615666379
		{ &Z_Construct_UFunction_UIAudioDeviceCollection_GetDevice, "GetDevice" }, // 2042354613
		{ &Z_Construct_UFunction_UIAudioDeviceCollection_IsApplicationMute, "IsApplicationMute" }, // 658582770
		{ &Z_Construct_UFunction_UIAudioDeviceCollection_Release, "Release" }, // 510425063
		{ &Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationMute, "SetApplicationMute" }, // 387769229
		{ &Z_Construct_UFunction_UIAudioDeviceCollection_SetApplicationVolume, "SetApplicationVolume" }, // 1033871731
		{ &Z_Construct_UFunction_UIAudioDeviceCollection_SetDevice, "SetDevice" }, // 4068495761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioDeviceCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAudioDeviceCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAudioDeviceCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIAudioDeviceCollection_Statics::ClassParams = {
		&UIAudioDeviceCollection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIAudioDeviceCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioDeviceCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAudioDeviceCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIAudioDeviceCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIAudioDeviceCollection, 3558045493);
	template<> AGORAPLUGIN_API UClass* StaticClass<UIAudioDeviceCollection>()
	{
		return UIAudioDeviceCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIAudioDeviceCollection(Z_Construct_UClass_UIAudioDeviceCollection, &UIAudioDeviceCollection::StaticClass, TEXT("/Script/AgoraPlugin"), TEXT("UIAudioDeviceCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAudioDeviceCollection);
	DEFINE_FUNCTION(UIAudioDeviceManager::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execFollowSystemRecordingDevice)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FollowSystemRecordingDevice(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execFollowSystemPlaybackDevice)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FollowSystemPlaybackDevice(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execStopAudioDeviceLoopbackTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StopAudioDeviceLoopbackTest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execStartAudioDeviceLoopbackTest)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_indicationInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StartAudioDeviceLoopbackTest(Z_Param_indicationInterval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execStopRecordingDeviceTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StopRecordingDeviceTest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execStartRecordingDeviceTest)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_indicationInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StartRecordingDeviceTest(Z_Param_indicationInterval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execStopPlaybackDeviceTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StopPlaybackDeviceTest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execStartPlaybackDeviceTest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_testAudioFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StartPlaybackDeviceTest(Z_Param_testAudioFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execGetRecordingDeviceMute)
	{
		P_GET_UBOOL_REF(Z_Param_Out_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRecordingDeviceMute(Z_Param_Out_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execSetRecordingDeviceMute)
	{
		P_GET_UBOOL(Z_Param_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetRecordingDeviceMute(Z_Param_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execGetPlaybackDeviceMute)
	{
		P_GET_UBOOL_REF(Z_Param_Out_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlaybackDeviceMute(Z_Param_Out_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execSetPlaybackDeviceMute)
	{
		P_GET_UBOOL(Z_Param_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlaybackDeviceMute(Z_Param_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execGetRecordingDeviceVolume)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRecordingDeviceVolume(Z_Param_Out_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execSetRecordingDeviceVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetRecordingDeviceVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execGetRecordingDeviceInfo)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRecordingDeviceInfo(Z_Param_Out_deviceId,Z_Param_Out_deviceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execGetRecordingDevice)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRecordingDevice(Z_Param_Out_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execSetRecordingDevice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetRecordingDevice(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execGetPlaybackDeviceVolume)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlaybackDeviceVolume(Z_Param_Out_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execSetPlaybackDeviceVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlaybackDeviceVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execGetPlaybackDeviceInfo)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlaybackDeviceInfo(Z_Param_Out_deviceId,Z_Param_Out_deviceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execGetPlaybackDevice)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlaybackDevice(Z_Param_Out_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execSetPlaybackDevice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlaybackDevice(Z_Param_deviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execEnumerateRecordingDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UIAudioDeviceCollection**)Z_Param__Result=P_THIS->EnumerateRecordingDevices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAudioDeviceManager::execEnumeratePlaybackDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UIAudioDeviceCollection**)Z_Param__Result=P_THIS->EnumeratePlaybackDevices();
		P_NATIVE_END;
	}
	void UIAudioDeviceManager::StaticRegisterNativesUIAudioDeviceManager()
	{
		UClass* Class = UIAudioDeviceManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumeratePlaybackDevices", &UIAudioDeviceManager::execEnumeratePlaybackDevices },
			{ "EnumerateRecordingDevices", &UIAudioDeviceManager::execEnumerateRecordingDevices },
			{ "FollowSystemPlaybackDevice", &UIAudioDeviceManager::execFollowSystemPlaybackDevice },
			{ "FollowSystemRecordingDevice", &UIAudioDeviceManager::execFollowSystemRecordingDevice },
			{ "GetPlaybackDevice", &UIAudioDeviceManager::execGetPlaybackDevice },
			{ "GetPlaybackDeviceInfo", &UIAudioDeviceManager::execGetPlaybackDeviceInfo },
			{ "GetPlaybackDeviceMute", &UIAudioDeviceManager::execGetPlaybackDeviceMute },
			{ "GetPlaybackDeviceVolume", &UIAudioDeviceManager::execGetPlaybackDeviceVolume },
			{ "GetRecordingDevice", &UIAudioDeviceManager::execGetRecordingDevice },
			{ "GetRecordingDeviceInfo", &UIAudioDeviceManager::execGetRecordingDeviceInfo },
			{ "GetRecordingDeviceMute", &UIAudioDeviceManager::execGetRecordingDeviceMute },
			{ "GetRecordingDeviceVolume", &UIAudioDeviceManager::execGetRecordingDeviceVolume },
			{ "Release", &UIAudioDeviceManager::execRelease },
			{ "SetPlaybackDevice", &UIAudioDeviceManager::execSetPlaybackDevice },
			{ "SetPlaybackDeviceMute", &UIAudioDeviceManager::execSetPlaybackDeviceMute },
			{ "SetPlaybackDeviceVolume", &UIAudioDeviceManager::execSetPlaybackDeviceVolume },
			{ "SetRecordingDevice", &UIAudioDeviceManager::execSetRecordingDevice },
			{ "SetRecordingDeviceMute", &UIAudioDeviceManager::execSetRecordingDeviceMute },
			{ "SetRecordingDeviceVolume", &UIAudioDeviceManager::execSetRecordingDeviceVolume },
			{ "StartAudioDeviceLoopbackTest", &UIAudioDeviceManager::execStartAudioDeviceLoopbackTest },
			{ "StartPlaybackDeviceTest", &UIAudioDeviceManager::execStartPlaybackDeviceTest },
			{ "StartRecordingDeviceTest", &UIAudioDeviceManager::execStartRecordingDeviceTest },
			{ "StopAudioDeviceLoopbackTest", &UIAudioDeviceManager::execStopAudioDeviceLoopbackTest },
			{ "StopPlaybackDeviceTest", &UIAudioDeviceManager::execStopPlaybackDeviceTest },
			{ "StopRecordingDeviceTest", &UIAudioDeviceManager::execStopRecordingDeviceTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_EnumeratePlaybackDevices_Statics
	{
		struct IAudioDeviceManager_eventEnumeratePlaybackDevices_Parms
		{
			UIAudioDeviceCollection* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_EnumeratePlaybackDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventEnumeratePlaybackDevices_Parms, ReturnValue), Z_Construct_UClass_UIAudioDeviceCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_EnumeratePlaybackDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_EnumeratePlaybackDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_EnumeratePlaybackDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_EnumeratePlaybackDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "EnumeratePlaybackDevices", nullptr, nullptr, sizeof(IAudioDeviceManager_eventEnumeratePlaybackDevices_Parms), Z_Construct_UFunction_UIAudioDeviceManager_EnumeratePlaybackDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_EnumeratePlaybackDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_EnumeratePlaybackDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_EnumeratePlaybackDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_EnumeratePlaybackDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_EnumeratePlaybackDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_EnumerateRecordingDevices_Statics
	{
		struct IAudioDeviceManager_eventEnumerateRecordingDevices_Parms
		{
			UIAudioDeviceCollection* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_EnumerateRecordingDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventEnumerateRecordingDevices_Parms, ReturnValue), Z_Construct_UClass_UIAudioDeviceCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_EnumerateRecordingDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_EnumerateRecordingDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_EnumerateRecordingDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_EnumerateRecordingDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "EnumerateRecordingDevices", nullptr, nullptr, sizeof(IAudioDeviceManager_eventEnumerateRecordingDevices_Parms), Z_Construct_UFunction_UIAudioDeviceManager_EnumerateRecordingDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_EnumerateRecordingDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_EnumerateRecordingDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_EnumerateRecordingDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_EnumerateRecordingDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_EnumerateRecordingDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics
	{
		struct IAudioDeviceManager_eventFollowSystemPlaybackDevice_Parms
		{
			bool enable;
			int32 ReturnValue;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((IAudioDeviceManager_eventFollowSystemPlaybackDevice_Parms*)Obj)->enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IAudioDeviceManager_eventFollowSystemPlaybackDevice_Parms), &Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::NewProp_enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventFollowSystemPlaybackDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::NewProp_enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "FollowSystemPlaybackDevice", nullptr, nullptr, sizeof(IAudioDeviceManager_eventFollowSystemPlaybackDevice_Parms), Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics
	{
		struct IAudioDeviceManager_eventFollowSystemRecordingDevice_Parms
		{
			bool enable;
			int32 ReturnValue;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((IAudioDeviceManager_eventFollowSystemRecordingDevice_Parms*)Obj)->enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IAudioDeviceManager_eventFollowSystemRecordingDevice_Parms), &Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::NewProp_enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventFollowSystemRecordingDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::NewProp_enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "FollowSystemRecordingDevice", nullptr, nullptr, sizeof(IAudioDeviceManager_eventFollowSystemRecordingDevice_Parms), Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice_Statics
	{
		struct IAudioDeviceManager_eventGetPlaybackDevice_Parms
		{
			FString deviceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetPlaybackDevice_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetPlaybackDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice_Statics::NewProp_deviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "GetPlaybackDevice", nullptr, nullptr, sizeof(IAudioDeviceManager_eventGetPlaybackDevice_Parms), Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics
	{
		struct IAudioDeviceManager_eventGetPlaybackDeviceInfo_Parms
		{
			FString deviceId;
			FString deviceName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetPlaybackDeviceInfo_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetPlaybackDeviceInfo_Parms, deviceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetPlaybackDeviceInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_deviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_deviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "GetPlaybackDeviceInfo", nullptr, nullptr, sizeof(IAudioDeviceManager_eventGetPlaybackDeviceInfo_Parms), Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics
	{
		struct IAudioDeviceManager_eventGetPlaybackDeviceMute_Parms
		{
			bool mute;
			int32 ReturnValue;
		};
		static void NewProp_mute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mute;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((IAudioDeviceManager_eventGetPlaybackDeviceMute_Parms*)Obj)->mute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IAudioDeviceManager_eventGetPlaybackDeviceMute_Parms), &Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::NewProp_mute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetPlaybackDeviceMute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::NewProp_mute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "GetPlaybackDeviceMute", nullptr, nullptr, sizeof(IAudioDeviceManager_eventGetPlaybackDeviceMute_Parms), Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume_Statics
	{
		struct IAudioDeviceManager_eventGetPlaybackDeviceVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetPlaybackDeviceVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetPlaybackDeviceVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "GetPlaybackDeviceVolume", nullptr, nullptr, sizeof(IAudioDeviceManager_eventGetPlaybackDeviceVolume_Parms), Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice_Statics
	{
		struct IAudioDeviceManager_eventGetRecordingDevice_Parms
		{
			FString deviceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetRecordingDevice_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetRecordingDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice_Statics::NewProp_deviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "GetRecordingDevice", nullptr, nullptr, sizeof(IAudioDeviceManager_eventGetRecordingDevice_Parms), Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics
	{
		struct IAudioDeviceManager_eventGetRecordingDeviceInfo_Parms
		{
			FString deviceId;
			FString deviceName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetRecordingDeviceInfo_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetRecordingDeviceInfo_Parms, deviceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetRecordingDeviceInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_deviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_deviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "GetRecordingDeviceInfo", nullptr, nullptr, sizeof(IAudioDeviceManager_eventGetRecordingDeviceInfo_Parms), Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics
	{
		struct IAudioDeviceManager_eventGetRecordingDeviceMute_Parms
		{
			bool mute;
			int32 ReturnValue;
		};
		static void NewProp_mute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mute;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((IAudioDeviceManager_eventGetRecordingDeviceMute_Parms*)Obj)->mute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IAudioDeviceManager_eventGetRecordingDeviceMute_Parms), &Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::NewProp_mute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetRecordingDeviceMute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::NewProp_mute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "GetRecordingDeviceMute", nullptr, nullptr, sizeof(IAudioDeviceManager_eventGetRecordingDeviceMute_Parms), Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume_Statics
	{
		struct IAudioDeviceManager_eventGetRecordingDeviceVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetRecordingDeviceVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventGetRecordingDeviceVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "GetRecordingDeviceVolume", nullptr, nullptr, sizeof(IAudioDeviceManager_eventGetRecordingDeviceVolume_Parms), Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_Release_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice_Statics
	{
		struct IAudioDeviceManager_eventSetPlaybackDevice_Parms
		{
			FString deviceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventSetPlaybackDevice_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventSetPlaybackDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice_Statics::NewProp_deviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "SetPlaybackDevice", nullptr, nullptr, sizeof(IAudioDeviceManager_eventSetPlaybackDevice_Parms), Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics
	{
		struct IAudioDeviceManager_eventSetPlaybackDeviceMute_Parms
		{
			bool mute;
			int32 ReturnValue;
		};
		static void NewProp_mute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mute;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((IAudioDeviceManager_eventSetPlaybackDeviceMute_Parms*)Obj)->mute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IAudioDeviceManager_eventSetPlaybackDeviceMute_Parms), &Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::NewProp_mute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventSetPlaybackDeviceMute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::NewProp_mute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "SetPlaybackDeviceMute", nullptr, nullptr, sizeof(IAudioDeviceManager_eventSetPlaybackDeviceMute_Parms), Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume_Statics
	{
		struct IAudioDeviceManager_eventSetPlaybackDeviceVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventSetPlaybackDeviceVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventSetPlaybackDeviceVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "SetPlaybackDeviceVolume", nullptr, nullptr, sizeof(IAudioDeviceManager_eventSetPlaybackDeviceVolume_Parms), Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice_Statics
	{
		struct IAudioDeviceManager_eventSetRecordingDevice_Parms
		{
			FString deviceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventSetRecordingDevice_Parms, deviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventSetRecordingDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice_Statics::NewProp_deviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "SetRecordingDevice", nullptr, nullptr, sizeof(IAudioDeviceManager_eventSetRecordingDevice_Parms), Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics
	{
		struct IAudioDeviceManager_eventSetRecordingDeviceMute_Parms
		{
			bool mute;
			int32 ReturnValue;
		};
		static void NewProp_mute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mute;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((IAudioDeviceManager_eventSetRecordingDeviceMute_Parms*)Obj)->mute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IAudioDeviceManager_eventSetRecordingDeviceMute_Parms), &Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::NewProp_mute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventSetRecordingDeviceMute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::NewProp_mute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "SetRecordingDeviceMute", nullptr, nullptr, sizeof(IAudioDeviceManager_eventSetRecordingDeviceMute_Parms), Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume_Statics
	{
		struct IAudioDeviceManager_eventSetRecordingDeviceVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventSetRecordingDeviceVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventSetRecordingDeviceVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "SetRecordingDeviceVolume", nullptr, nullptr, sizeof(IAudioDeviceManager_eventSetRecordingDeviceVolume_Parms), Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics
	{
		struct IAudioDeviceManager_eventStartAudioDeviceLoopbackTest_Parms
		{
			int32 indicationInterval;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indicationInterval;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::NewProp_indicationInterval = { "indicationInterval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventStartAudioDeviceLoopbackTest_Parms, indicationInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventStartAudioDeviceLoopbackTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::NewProp_indicationInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "StartAudioDeviceLoopbackTest", nullptr, nullptr, sizeof(IAudioDeviceManager_eventStartAudioDeviceLoopbackTest_Parms), Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest_Statics
	{
		struct IAudioDeviceManager_eventStartPlaybackDeviceTest_Parms
		{
			FString testAudioFilePath;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_testAudioFilePath;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest_Statics::NewProp_testAudioFilePath = { "testAudioFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventStartPlaybackDeviceTest_Parms, testAudioFilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventStartPlaybackDeviceTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest_Statics::NewProp_testAudioFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "StartPlaybackDeviceTest", nullptr, nullptr, sizeof(IAudioDeviceManager_eventStartPlaybackDeviceTest_Parms), Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest_Statics
	{
		struct IAudioDeviceManager_eventStartRecordingDeviceTest_Parms
		{
			int32 indicationInterval;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indicationInterval;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest_Statics::NewProp_indicationInterval = { "indicationInterval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventStartRecordingDeviceTest_Parms, indicationInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventStartRecordingDeviceTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest_Statics::NewProp_indicationInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "StartRecordingDeviceTest", nullptr, nullptr, sizeof(IAudioDeviceManager_eventStartRecordingDeviceTest_Parms), Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics
	{
		struct IAudioDeviceManager_eventStopAudioDeviceLoopbackTest_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventStopAudioDeviceLoopbackTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "StopAudioDeviceLoopbackTest", nullptr, nullptr, sizeof(IAudioDeviceManager_eventStopAudioDeviceLoopbackTest_Parms), Z_Construct_UFunction_UIAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_StopAudioDeviceLoopbackTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_StopPlaybackDeviceTest_Statics
	{
		struct IAudioDeviceManager_eventStopPlaybackDeviceTest_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_StopPlaybackDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventStopPlaybackDeviceTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_StopPlaybackDeviceTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_StopPlaybackDeviceTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_StopPlaybackDeviceTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_StopPlaybackDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "StopPlaybackDeviceTest", nullptr, nullptr, sizeof(IAudioDeviceManager_eventStopPlaybackDeviceTest_Parms), Z_Construct_UFunction_UIAudioDeviceManager_StopPlaybackDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_StopPlaybackDeviceTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_StopPlaybackDeviceTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_StopPlaybackDeviceTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_StopPlaybackDeviceTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_StopPlaybackDeviceTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAudioDeviceManager_StopRecordingDeviceTest_Statics
	{
		struct IAudioDeviceManager_eventStopRecordingDeviceTest_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIAudioDeviceManager_StopRecordingDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IAudioDeviceManager_eventStopRecordingDeviceTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAudioDeviceManager_StopRecordingDeviceTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAudioDeviceManager_StopRecordingDeviceTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAudioDeviceManager_StopRecordingDeviceTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAudioDeviceManager_StopRecordingDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAudioDeviceManager, nullptr, "StopRecordingDeviceTest", nullptr, nullptr, sizeof(IAudioDeviceManager_eventStopRecordingDeviceTest_Parms), Z_Construct_UFunction_UIAudioDeviceManager_StopRecordingDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_StopRecordingDeviceTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAudioDeviceManager_StopRecordingDeviceTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAudioDeviceManager_StopRecordingDeviceTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAudioDeviceManager_StopRecordingDeviceTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIAudioDeviceManager_StopRecordingDeviceTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIAudioDeviceManager_NoRegister()
	{
		return UIAudioDeviceManager::StaticClass();
	}
	struct Z_Construct_UClass_UIAudioDeviceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAudioDeviceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIAudioDeviceManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIAudioDeviceManager_EnumeratePlaybackDevices, "EnumeratePlaybackDevices" }, // 2719147788
		{ &Z_Construct_UFunction_UIAudioDeviceManager_EnumerateRecordingDevices, "EnumerateRecordingDevices" }, // 1586382964
		{ &Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemPlaybackDevice, "FollowSystemPlaybackDevice" }, // 2446843593
		{ &Z_Construct_UFunction_UIAudioDeviceManager_FollowSystemRecordingDevice, "FollowSystemRecordingDevice" }, // 2405490728
		{ &Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDevice, "GetPlaybackDevice" }, // 2171047910
		{ &Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceInfo, "GetPlaybackDeviceInfo" }, // 350122314
		{ &Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceMute, "GetPlaybackDeviceMute" }, // 1423449198
		{ &Z_Construct_UFunction_UIAudioDeviceManager_GetPlaybackDeviceVolume, "GetPlaybackDeviceVolume" }, // 1462917027
		{ &Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDevice, "GetRecordingDevice" }, // 2215242667
		{ &Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceInfo, "GetRecordingDeviceInfo" }, // 117153319
		{ &Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceMute, "GetRecordingDeviceMute" }, // 2435709784
		{ &Z_Construct_UFunction_UIAudioDeviceManager_GetRecordingDeviceVolume, "GetRecordingDeviceVolume" }, // 3414749347
		{ &Z_Construct_UFunction_UIAudioDeviceManager_Release, "Release" }, // 4010441518
		{ &Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDevice, "SetPlaybackDevice" }, // 718854076
		{ &Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceMute, "SetPlaybackDeviceMute" }, // 751039380
		{ &Z_Construct_UFunction_UIAudioDeviceManager_SetPlaybackDeviceVolume, "SetPlaybackDeviceVolume" }, // 1821767524
		{ &Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDevice, "SetRecordingDevice" }, // 1918778763
		{ &Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceMute, "SetRecordingDeviceMute" }, // 1338082534
		{ &Z_Construct_UFunction_UIAudioDeviceManager_SetRecordingDeviceVolume, "SetRecordingDeviceVolume" }, // 2408358808
		{ &Z_Construct_UFunction_UIAudioDeviceManager_StartAudioDeviceLoopbackTest, "StartAudioDeviceLoopbackTest" }, // 1846682216
		{ &Z_Construct_UFunction_UIAudioDeviceManager_StartPlaybackDeviceTest, "StartPlaybackDeviceTest" }, // 4000231271
		{ &Z_Construct_UFunction_UIAudioDeviceManager_StartRecordingDeviceTest, "StartRecordingDeviceTest" }, // 3531668888
		{ &Z_Construct_UFunction_UIAudioDeviceManager_StopAudioDeviceLoopbackTest, "StopAudioDeviceLoopbackTest" }, // 2710807212
		{ &Z_Construct_UFunction_UIAudioDeviceManager_StopPlaybackDeviceTest, "StopPlaybackDeviceTest" }, // 2127919710
		{ &Z_Construct_UFunction_UIAudioDeviceManager_StopRecordingDeviceTest, "StopRecordingDeviceTest" }, // 2577813918
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioDeviceManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraAudioDeviceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAudioDeviceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAudioDeviceManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIAudioDeviceManager_Statics::ClassParams = {
		&UIAudioDeviceManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIAudioDeviceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioDeviceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAudioDeviceManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIAudioDeviceManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIAudioDeviceManager, 2839913923);
	template<> AGORAPLUGIN_API UClass* StaticClass<UIAudioDeviceManager>()
	{
		return UIAudioDeviceManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIAudioDeviceManager(Z_Construct_UClass_UIAudioDeviceManager, &UIAudioDeviceManager::StaticClass, TEXT("/Script/AgoraPlugin"), TEXT("UIAudioDeviceManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAudioDeviceManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
