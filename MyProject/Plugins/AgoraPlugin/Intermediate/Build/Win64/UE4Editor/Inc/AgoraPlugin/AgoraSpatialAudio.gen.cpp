// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraSpatialAudio() {}
// Cross Module References
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteVoicePositionInfo();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLocalSpatialAudioConfig();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraRtcEngine_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UILocalSpatialAudioEngine_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UILocalSpatialAudioEngine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRtcConnection();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialAudioZone();
// End Cross Module References
class UScriptStruct* FRemoteVoicePositionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGORAPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("RemoteVoicePositionInfo"), sizeof(FRemoteVoicePositionInfo), Get_Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Hash());
	}
	return Singleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FRemoteVoicePositionInfo>()
{
	return FRemoteVoicePositionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteVoicePositionInfo(FRemoteVoicePositionInfo::StaticStruct, TEXT("/Script/AgoraPlugin"), TEXT("RemoteVoicePositionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AgoraPlugin_StaticRegisterNativesFRemoteVoicePositionInfo
{
	FScriptStruct_AgoraPlugin_StaticRegisterNativesFRemoteVoicePositionInfo()
	{
		UScriptStruct::DeferCppStructOps<FRemoteVoicePositionInfo>(FName(TEXT("RemoteVoicePositionInfo")));
	}
} ScriptStruct_AgoraPlugin_StaticRegisterNativesFRemoteVoicePositionInfo;
	struct Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_forward_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_forward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteVoicePositionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_position_MetaData[] = {
		{ "Category", "Agora|RemoteVoicePositionInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteVoicePositionInfo, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_forward_MetaData[] = {
		{ "Category", "Agora|RemoteVoicePositionInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_forward = { "forward", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteVoicePositionInfo, forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_forward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_forward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_forward,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"RemoteVoicePositionInfo",
		sizeof(FRemoteVoicePositionInfo),
		alignof(FRemoteVoicePositionInfo),
		Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteVoicePositionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteVoicePositionInfo"), sizeof(FRemoteVoicePositionInfo), Get_Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Hash() { return 1146755902U; }
class UScriptStruct* FLocalSpatialAudioConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGORAPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalSpatialAudioConfig, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("LocalSpatialAudioConfig"), sizeof(FLocalSpatialAudioConfig), Get_Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Hash());
	}
	return Singleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FLocalSpatialAudioConfig>()
{
	return FLocalSpatialAudioConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalSpatialAudioConfig(FLocalSpatialAudioConfig::StaticStruct, TEXT("/Script/AgoraPlugin"), TEXT("LocalSpatialAudioConfig"), false, nullptr, nullptr);
static struct FScriptStruct_AgoraPlugin_StaticRegisterNativesFLocalSpatialAudioConfig
{
	FScriptStruct_AgoraPlugin_StaticRegisterNativesFLocalSpatialAudioConfig()
	{
		UScriptStruct::DeferCppStructOps<FLocalSpatialAudioConfig>(FName(TEXT("LocalSpatialAudioConfig")));
	}
} ScriptStruct_AgoraPlugin_StaticRegisterNativesFLocalSpatialAudioConfig;
	struct Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rtcEngine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rtcEngine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalSpatialAudioConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::NewProp_rtcEngine_MetaData[] = {
		{ "Category", "Agora|LocalSpatialAudioConfig" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::NewProp_rtcEngine = { "rtcEngine", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalSpatialAudioConfig, rtcEngine), Z_Construct_UClass_UAgoraRtcEngine_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::NewProp_rtcEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::NewProp_rtcEngine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::NewProp_rtcEngine,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"LocalSpatialAudioConfig",
		sizeof(FLocalSpatialAudioConfig),
		alignof(FLocalSpatialAudioConfig),
		Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalSpatialAudioConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalSpatialAudioConfig"), sizeof(FLocalSpatialAudioConfig), Get_Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Hash() { return 3990317521U; }
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execmuteRemoteAudioStream)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_uid);
		P_GET_UBOOL(Z_Param_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->muteRemoteAudioStream(Z_Param_uid,Z_Param_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetPlayerAttenuation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playerId);
		P_GET_UBOOL(Z_Param_forceSet);
		P_GET_PROPERTY(FStrProperty,Z_Param_attenuation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlayerAttenuation(Z_Param_playerId,Z_Param_forceSet,Z_Param_attenuation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetZones)
	{
		P_GET_TARRAY(FSpatialAudioZone,Z_Param_zones);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetZones(Z_Param_zones);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execMuteAllRemoteAudioStreams)
	{
		P_GET_UBOOL(Z_Param_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MuteAllRemoteAudioStreams(Z_Param_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execMuteLocalAudioStream)
	{
		P_GET_UBOOL(Z_Param_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MuteLocalAudioStream(Z_Param_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetParameters)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetParameters(Z_Param_params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execUpdatePlayerPositionInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playerId);
		P_GET_STRUCT_REF(FRemoteVoicePositionInfo,Z_Param_Out_positionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdatePlayerPositionInfo(Z_Param_playerId,Z_Param_Out_positionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execUpdateSelfPositionEx)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FVector,Z_Param_axisForward);
		P_GET_STRUCT(FVector,Z_Param_axisRight);
		P_GET_STRUCT(FVector,Z_Param_axisUp);
		P_GET_STRUCT_REF(FRtcConnection,Z_Param_Out_connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateSelfPositionEx(Z_Param_position,Z_Param_axisForward,Z_Param_axisRight,Z_Param_axisUp,Z_Param_Out_connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execUpdateSelfPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FVector,Z_Param_axisForward);
		P_GET_STRUCT(FVector,Z_Param_axisRight);
		P_GET_STRUCT(FVector,Z_Param_axisUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateSelfPosition(Z_Param_position,Z_Param_axisForward,Z_Param_axisRight,Z_Param_axisUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetDistanceUnit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetDistanceUnit(Z_Param_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetAudioRecvRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetAudioRecvRange(Z_Param_range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetMaxAudioRecvCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_maxCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetMaxAudioRecvCount(Z_Param_maxCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetRemoteAudioAttenuation)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_uid);
		P_GET_UBOOL(Z_Param_forceSet);
		P_GET_PROPERTY(FStrProperty,Z_Param_attenuation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetRemoteAudioAttenuation(Z_Param_uid,Z_Param_forceSet,Z_Param_attenuation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execClearRemotePositionsEx)
	{
		P_GET_STRUCT_REF(FRtcConnection,Z_Param_Out_connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ClearRemotePositionsEx(Z_Param_Out_connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execClearRemotePositions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ClearRemotePositions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execRemoveRemotePositionEx)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_uid);
		P_GET_STRUCT_REF(FRtcConnection,Z_Param_Out_connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveRemotePositionEx(Z_Param_uid,Z_Param_Out_connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execRemoveRemotePosition)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_uid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveRemotePosition(Z_Param_uid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execUpdateRemotePositionEx)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_uid);
		P_GET_STRUCT_REF(FRemoteVoicePositionInfo,Z_Param_Out_posInfo);
		P_GET_STRUCT_REF(FRtcConnection,Z_Param_Out_connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateRemotePositionEx(Z_Param_uid,Z_Param_Out_posInfo,Z_Param_Out_connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execUpdateRemotePosition)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_uid);
		P_GET_STRUCT_REF(FRemoteVoicePositionInfo,Z_Param_Out_posInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateRemotePosition(Z_Param_uid,Z_Param_Out_posInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execInitialize)
	{
		P_GET_STRUCT_REF(FLocalSpatialAudioConfig,Z_Param_Out_config);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Initialize(Z_Param_Out_config);
		P_NATIVE_END;
	}
	void UILocalSpatialAudioEngine::StaticRegisterNativesUILocalSpatialAudioEngine()
	{
		UClass* Class = UILocalSpatialAudioEngine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearRemotePositions", &UILocalSpatialAudioEngine::execClearRemotePositions },
			{ "ClearRemotePositionsEx", &UILocalSpatialAudioEngine::execClearRemotePositionsEx },
			{ "Initialize", &UILocalSpatialAudioEngine::execInitialize },
			{ "MuteAllRemoteAudioStreams", &UILocalSpatialAudioEngine::execMuteAllRemoteAudioStreams },
			{ "MuteLocalAudioStream", &UILocalSpatialAudioEngine::execMuteLocalAudioStream },
			{ "muteRemoteAudioStream", &UILocalSpatialAudioEngine::execmuteRemoteAudioStream },
			{ "Release", &UILocalSpatialAudioEngine::execRelease },
			{ "RemoveRemotePosition", &UILocalSpatialAudioEngine::execRemoveRemotePosition },
			{ "RemoveRemotePositionEx", &UILocalSpatialAudioEngine::execRemoveRemotePositionEx },
			{ "SetAudioRecvRange", &UILocalSpatialAudioEngine::execSetAudioRecvRange },
			{ "SetDistanceUnit", &UILocalSpatialAudioEngine::execSetDistanceUnit },
			{ "SetMaxAudioRecvCount", &UILocalSpatialAudioEngine::execSetMaxAudioRecvCount },
			{ "SetParameters", &UILocalSpatialAudioEngine::execSetParameters },
			{ "SetPlayerAttenuation", &UILocalSpatialAudioEngine::execSetPlayerAttenuation },
			{ "SetRemoteAudioAttenuation", &UILocalSpatialAudioEngine::execSetRemoteAudioAttenuation },
			{ "SetZones", &UILocalSpatialAudioEngine::execSetZones },
			{ "UpdatePlayerPositionInfo", &UILocalSpatialAudioEngine::execUpdatePlayerPositionInfo },
			{ "UpdateRemotePosition", &UILocalSpatialAudioEngine::execUpdateRemotePosition },
			{ "UpdateRemotePositionEx", &UILocalSpatialAudioEngine::execUpdateRemotePositionEx },
			{ "UpdateSelfPosition", &UILocalSpatialAudioEngine::execUpdateSelfPosition },
			{ "UpdateSelfPositionEx", &UILocalSpatialAudioEngine::execUpdateSelfPositionEx },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics
	{
		struct ILocalSpatialAudioEngine_eventClearRemotePositions_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventClearRemotePositions_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "ClearRemotePositions", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventClearRemotePositions_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics
	{
		struct ILocalSpatialAudioEngine_eventClearRemotePositionsEx_Parms
		{
			FRtcConnection connection;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_connection;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::NewProp_connection = { "connection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventClearRemotePositionsEx_Parms, connection), Z_Construct_UScriptStruct_FRtcConnection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventClearRemotePositionsEx_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::NewProp_connection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "ClearRemotePositionsEx", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventClearRemotePositionsEx_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics
	{
		struct ILocalSpatialAudioEngine_eventInitialize_Parms
		{
			FLocalSpatialAudioConfig config;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_config;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventInitialize_Parms, config), Z_Construct_UScriptStruct_FLocalSpatialAudioConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventInitialize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::NewProp_config,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "Initialize", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventInitialize_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics
	{
		struct ILocalSpatialAudioEngine_eventMuteAllRemoteAudioStreams_Parms
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
	void Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((ILocalSpatialAudioEngine_eventMuteAllRemoteAudioStreams_Parms*)Obj)->mute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ILocalSpatialAudioEngine_eventMuteAllRemoteAudioStreams_Parms), &Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::NewProp_mute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventMuteAllRemoteAudioStreams_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::NewProp_mute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "MuteAllRemoteAudioStreams", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventMuteAllRemoteAudioStreams_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics
	{
		struct ILocalSpatialAudioEngine_eventMuteLocalAudioStream_Parms
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
	void Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((ILocalSpatialAudioEngine_eventMuteLocalAudioStream_Parms*)Obj)->mute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ILocalSpatialAudioEngine_eventMuteLocalAudioStream_Parms), &Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::NewProp_mute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventMuteLocalAudioStream_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::NewProp_mute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "MuteLocalAudioStream", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventMuteLocalAudioStream_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics
	{
		struct ILocalSpatialAudioEngine_eventmuteRemoteAudioStream_Parms
		{
			int64 uid;
			bool mute;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_uid;
		static void NewProp_mute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mute;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventmuteRemoteAudioStream_Parms, uid), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((ILocalSpatialAudioEngine_eventmuteRemoteAudioStream_Parms*)Obj)->mute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ILocalSpatialAudioEngine_eventmuteRemoteAudioStream_Parms), &Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_mute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventmuteRemoteAudioStream_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_uid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_mute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "muteRemoteAudioStream", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventmuteRemoteAudioStream_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_Release_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics
	{
		struct ILocalSpatialAudioEngine_eventRemoveRemotePosition_Parms
		{
			int64 uid;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_uid;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventRemoveRemotePosition_Parms, uid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventRemoveRemotePosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::NewProp_uid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "RemoveRemotePosition", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventRemoveRemotePosition_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics
	{
		struct ILocalSpatialAudioEngine_eventRemoveRemotePositionEx_Parms
		{
			int64 uid;
			FRtcConnection connection;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_uid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_connection;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventRemoveRemotePositionEx_Parms, uid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::NewProp_connection = { "connection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventRemoveRemotePositionEx_Parms, connection), Z_Construct_UScriptStruct_FRtcConnection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventRemoveRemotePositionEx_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::NewProp_uid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::NewProp_connection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "RemoveRemotePositionEx", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventRemoveRemotePositionEx_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetAudioRecvRange_Parms
		{
			float range;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_range;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetAudioRecvRange_Parms, range), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetAudioRecvRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::NewProp_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetAudioRecvRange", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventSetAudioRecvRange_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetDistanceUnit_Parms
		{
			float unit;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_unit;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetDistanceUnit_Parms, unit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetDistanceUnit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::NewProp_unit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetDistanceUnit", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventSetDistanceUnit_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetMaxAudioRecvCount_Parms
		{
			int32 maxCount;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxCount;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::NewProp_maxCount = { "maxCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetMaxAudioRecvCount_Parms, maxCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetMaxAudioRecvCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::NewProp_maxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetMaxAudioRecvCount", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventSetMaxAudioRecvCount_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetParameters_Parms
		{
			FString params;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_params;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetParameters_Parms, params), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetParameters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::NewProp_params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetParameters", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventSetParameters_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms
		{
			int32 playerId;
			bool forceSet;
			FString attenuation;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_playerId;
		static void NewProp_forceSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceSet;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_attenuation;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms, playerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_forceSet_SetBit(void* Obj)
	{
		((ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms*)Obj)->forceSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_forceSet = { "forceSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms), &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_forceSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_attenuation = { "attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms, attenuation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_forceSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_attenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "CPP_Default_attenuation", "0.0" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetPlayerAttenuation", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms
		{
			int64 uid;
			bool forceSet;
			FString attenuation;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_uid;
		static void NewProp_forceSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceSet;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_attenuation;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms, uid), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_forceSet_SetBit(void* Obj)
	{
		((ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms*)Obj)->forceSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_forceSet = { "forceSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms), &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_forceSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_attenuation = { "attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms, attenuation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_uid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_forceSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_attenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "CPP_Default_attenuation", "0.0" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetRemoteAudioAttenuation", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetZones_Parms
		{
			TArray<FSpatialAudioZone> zones;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_zones_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_zones;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::NewProp_zones_Inner = { "zones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpatialAudioZone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::NewProp_zones = { "zones", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetZones_Parms, zones), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetZones_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::NewProp_zones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::NewProp_zones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetZones", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventSetZones_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics
	{
		struct ILocalSpatialAudioEngine_eventUpdatePlayerPositionInfo_Parms
		{
			int32 playerId;
			FRemoteVoicePositionInfo positionInfo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_positionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_positionInfo;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdatePlayerPositionInfo_Parms, playerId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_positionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_positionInfo = { "positionInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdatePlayerPositionInfo_Parms, positionInfo), Z_Construct_UScriptStruct_FRemoteVoicePositionInfo, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_positionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_positionInfo_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdatePlayerPositionInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_positionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "UpdatePlayerPositionInfo", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventUpdatePlayerPositionInfo_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics
	{
		struct ILocalSpatialAudioEngine_eventUpdateRemotePosition_Parms
		{
			int64 uid;
			FRemoteVoicePositionInfo posInfo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_uid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_posInfo;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePosition_Parms, uid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::NewProp_posInfo = { "posInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePosition_Parms, posInfo), Z_Construct_UScriptStruct_FRemoteVoicePositionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::NewProp_uid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::NewProp_posInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "UpdateRemotePosition", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventUpdateRemotePosition_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics
	{
		struct ILocalSpatialAudioEngine_eventUpdateRemotePositionEx_Parms
		{
			int64 uid;
			FRemoteVoicePositionInfo posInfo;
			FRtcConnection connection;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_uid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_posInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_connection;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePositionEx_Parms, uid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_posInfo = { "posInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePositionEx_Parms, posInfo), Z_Construct_UScriptStruct_FRemoteVoicePositionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_connection = { "connection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePositionEx_Parms, connection), Z_Construct_UScriptStruct_FRtcConnection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePositionEx_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_uid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_posInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_connection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "UpdateRemotePositionEx", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventUpdateRemotePositionEx_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics
	{
		struct ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms
		{
			FVector position;
			FVector axisForward;
			FVector axisRight;
			FVector axisUp;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_axisForward;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_axisRight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_axisUp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_axisForward = { "axisForward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms, axisForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_axisRight = { "axisRight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms, axisRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_axisUp = { "axisUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms, axisUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_axisForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_axisRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_axisUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "UpdateSelfPosition", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics
	{
		struct ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms
		{
			FVector position;
			FVector axisForward;
			FVector axisRight;
			FVector axisUp;
			FRtcConnection connection;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_axisForward;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_axisRight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_axisUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_connection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_connection;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_axisForward = { "axisForward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms, axisForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_axisRight = { "axisRight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms, axisRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_axisUp = { "axisUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms, axisUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_connection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_connection = { "connection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms, connection), Z_Construct_UScriptStruct_FRtcConnection, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_connection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_connection_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_axisForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_axisRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_axisUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_connection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "UpdateSelfPositionEx", nullptr, nullptr, sizeof(ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms), Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UILocalSpatialAudioEngine_NoRegister()
	{
		return UILocalSpatialAudioEngine::StaticClass();
	}
	struct Z_Construct_UClass_UILocalSpatialAudioEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions, "ClearRemotePositions" }, // 1529650033
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx, "ClearRemotePositionsEx" }, // 966720869
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize, "Initialize" }, // 1472044832
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams, "MuteAllRemoteAudioStreams" }, // 2845417168
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream, "MuteLocalAudioStream" }, // 3372915833
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream, "muteRemoteAudioStream" }, // 254466649
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_Release, "Release" }, // 665251769
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition, "RemoveRemotePosition" }, // 300256729
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx, "RemoveRemotePositionEx" }, // 2015735818
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange, "SetAudioRecvRange" }, // 2298557889
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit, "SetDistanceUnit" }, // 755872840
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount, "SetMaxAudioRecvCount" }, // 3954706432
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters, "SetParameters" }, // 2119151425
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation, "SetPlayerAttenuation" }, // 178199441
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation, "SetRemoteAudioAttenuation" }, // 3728382770
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones, "SetZones" }, // 847984905
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo, "UpdatePlayerPositionInfo" }, // 740042026
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition, "UpdateRemotePosition" }, // 2869056710
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx, "UpdateRemotePositionEx" }, // 1364103839
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition, "UpdateSelfPosition" }, // 2647049080
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx, "UpdateSelfPositionEx" }, // 2077552261
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UILocalSpatialAudioEngine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::ClassParams = {
		&UILocalSpatialAudioEngine::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UILocalSpatialAudioEngine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UILocalSpatialAudioEngine, 3551734447);
	template<> AGORAPLUGIN_API UClass* StaticClass<UILocalSpatialAudioEngine>()
	{
		return UILocalSpatialAudioEngine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UILocalSpatialAudioEngine(Z_Construct_UClass_UILocalSpatialAudioEngine, &UILocalSpatialAudioEngine::StaticClass, TEXT("/Script/AgoraPlugin"), TEXT("UILocalSpatialAudioEngine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UILocalSpatialAudioEngine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
