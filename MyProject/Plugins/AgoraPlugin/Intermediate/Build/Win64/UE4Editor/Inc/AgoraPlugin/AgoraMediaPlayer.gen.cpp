// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraMediaPlayer() {}
// Cross Module References
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStreamInfo();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAgoraMediaSource();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_AGORAOPTIONAL();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerCustomDataProvider_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayer_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_STATE();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioPcmFrameSink_NoRegister();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_ERAW_AUDIO_FRAME_OP_MODE_TYPE();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioSpectrumObserver_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerSourceObserver_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIVideoFrameObserver_NoRegister();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_ERENDER_MODE_TYPE();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialAudioParams();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerCacheManager_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerCacheManager();
// End Cross Module References
	static UEnum* EMEDIA_STREAM_TYPE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EMEDIA_STREAM_TYPE"));
		}
		return Singleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EMEDIA_STREAM_TYPE>()
	{
		return EMEDIA_STREAM_TYPE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMEDIA_STREAM_TYPE(EMEDIA_STREAM_TYPE_StaticEnum, TEXT("/Script/AgoraPlugin"), TEXT("EMEDIA_STREAM_TYPE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Hash() { return 4024185168U; }
	UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMEDIA_STREAM_TYPE"), 0, Get_Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMEDIA_STREAM_TYPE::STREAM_TYPE_UNKNOWN", (int64)EMEDIA_STREAM_TYPE::STREAM_TYPE_UNKNOWN },
				{ "EMEDIA_STREAM_TYPE::STREAM_TYPE_VIDEO", (int64)EMEDIA_STREAM_TYPE::STREAM_TYPE_VIDEO },
				{ "EMEDIA_STREAM_TYPE::STREAM_TYPE_AUDIO", (int64)EMEDIA_STREAM_TYPE::STREAM_TYPE_AUDIO },
				{ "EMEDIA_STREAM_TYPE::STREAM_TYPE_SUBTITLE", (int64)EMEDIA_STREAM_TYPE::STREAM_TYPE_SUBTITLE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
				{ "STREAM_TYPE_AUDIO.Name", "EMEDIA_STREAM_TYPE::STREAM_TYPE_AUDIO" },
				{ "STREAM_TYPE_SUBTITLE.Name", "EMEDIA_STREAM_TYPE::STREAM_TYPE_SUBTITLE" },
				{ "STREAM_TYPE_UNKNOWN.Name", "EMEDIA_STREAM_TYPE::STREAM_TYPE_UNKNOWN" },
				{ "STREAM_TYPE_VIDEO.Name", "EMEDIA_STREAM_TYPE::STREAM_TYPE_VIDEO" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
				nullptr,
				"EMEDIA_STREAM_TYPE",
				"EMEDIA_STREAM_TYPE",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAUDIO_DUAL_MONO_MODE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EAUDIO_DUAL_MONO_MODE"));
		}
		return Singleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EAUDIO_DUAL_MONO_MODE>()
	{
		return EAUDIO_DUAL_MONO_MODE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAUDIO_DUAL_MONO_MODE(EAUDIO_DUAL_MONO_MODE_StaticEnum, TEXT("/Script/AgoraPlugin"), TEXT("EAUDIO_DUAL_MONO_MODE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Hash() { return 2381285722U; }
	UEnum* Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAUDIO_DUAL_MONO_MODE"), 0, Get_Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_STEREO", (int64)EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_STEREO },
				{ "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_L", (int64)EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_L },
				{ "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_R", (int64)EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_R },
				{ "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_MIX", (int64)EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_MIX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AUDIO_DUAL_MONO_L.Name", "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_L" },
				{ "AUDIO_DUAL_MONO_MIX.Name", "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_MIX" },
				{ "AUDIO_DUAL_MONO_R.Name", "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_R" },
				{ "AUDIO_DUAL_MONO_STEREO.Name", "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_STEREO" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
				nullptr,
				"EAUDIO_DUAL_MONO_MODE",
				"EAUDIO_DUAL_MONO_MODE",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPlayerStreamInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGORAPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FPlayerStreamInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStreamInfo, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("PlayerStreamInfo"), sizeof(FPlayerStreamInfo), Get_Z_Construct_UScriptStruct_FPlayerStreamInfo_Hash());
	}
	return Singleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FPlayerStreamInfo>()
{
	return FPlayerStreamInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerStreamInfo(FPlayerStreamInfo::StaticStruct, TEXT("/Script/AgoraPlugin"), TEXT("PlayerStreamInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AgoraPlugin_StaticRegisterNativesFPlayerStreamInfo
{
	FScriptStruct_AgoraPlugin_StaticRegisterNativesFPlayerStreamInfo()
	{
		UScriptStruct::DeferCppStructOps<FPlayerStreamInfo>(FName(TEXT("PlayerStreamInfo")));
	}
} ScriptStruct_AgoraPlugin_StaticRegisterNativesFPlayerStreamInfo;
	struct Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_streamIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_streamIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_streamType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_streamType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_streamType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_codecName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_codecName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_videoFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_videoFrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_videoBitRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_videoBitRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_videoWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_videoWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_videoHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_videoHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_videoRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_videoRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audioSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_audioSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audioChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_audioChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audioBitsPerSample_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_audioBitsPerSample;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStreamInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamIndex_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamIndex = { "streamIndex", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStreamInfo, streamIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType = { "streamType", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStreamInfo, streamType), Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_codecName_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_codecName = { "codecName", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStreamInfo, codecName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_codecName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_codecName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_language_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStreamInfo, language), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoFrameRate_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoFrameRate = { "videoFrameRate", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoFrameRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoFrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoBitRate_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoBitRate = { "videoBitRate", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoBitRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoBitRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoBitRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoWidth_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoWidth = { "videoWidth", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoHeight_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoHeight = { "videoHeight", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoRotation_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoRotation = { "videoRotation", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioSampleRate_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioSampleRate = { "audioSampleRate", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStreamInfo, audioSampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioChannels_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioChannels = { "audioChannels", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStreamInfo, audioChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioBitsPerSample_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioBitsPerSample = { "audioBitsPerSample", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStreamInfo, audioBitsPerSample), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioBitsPerSample_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioBitsPerSample_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_duration_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStreamInfo, duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_codecName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoBitRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioBitsPerSample,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_duration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"PlayerStreamInfo",
		sizeof(FPlayerStreamInfo),
		alignof(FPlayerStreamInfo),
		Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerStreamInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerStreamInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerStreamInfo"), sizeof(FPlayerStreamInfo), Get_Z_Construct_UScriptStruct_FPlayerStreamInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerStreamInfo_Hash() { return 4134055588U; }
class UScriptStruct* FAgoraMediaSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGORAPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAgoraMediaSource_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgoraMediaSource, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("AgoraMediaSource"), sizeof(FAgoraMediaSource), Get_Z_Construct_UScriptStruct_FAgoraMediaSource_Hash());
	}
	return Singleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FAgoraMediaSource>()
{
	return FAgoraMediaSource::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAgoraMediaSource(FAgoraMediaSource::StaticStruct, TEXT("/Script/AgoraPlugin"), TEXT("AgoraMediaSource"), false, nullptr, nullptr);
static struct FScriptStruct_AgoraPlugin_StaticRegisterNativesFAgoraMediaSource
{
	FScriptStruct_AgoraPlugin_StaticRegisterNativesFAgoraMediaSource()
	{
		UScriptStruct::DeferCppStructOps<FAgoraMediaSource>(FName(TEXT("AgoraMediaSource")));
	}
} ScriptStruct_AgoraPlugin_StaticRegisterNativesFAgoraMediaSource;
	struct Z_Construct_UScriptStruct_FAgoraMediaSource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_uri;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_startPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_autoPlay_MetaData[];
#endif
		static void NewProp_autoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enableCache_MetaData[];
#endif
		static void NewProp_enableCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enableCache;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_isAgoraSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAgoraSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_isAgoraSource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_isLiveSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isLiveSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_isLiveSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_provider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_provider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgoraMediaSource>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_url_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgoraMediaSource, url), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_uri_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_uri = { "uri", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgoraMediaSource, uri), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_uri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_uri_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_startPos_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgoraMediaSource, startPos), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_startPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_startPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay_SetBit(void* Obj)
	{
		((FAgoraMediaSource*)Obj)->autoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay = { "autoPlay", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAgoraMediaSource), &Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache_SetBit(void* Obj)
	{
		((FAgoraMediaSource*)Obj)->enableCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache = { "enableCache", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAgoraMediaSource), &Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource = { "isAgoraSource", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgoraMediaSource, isAgoraSource), Z_Construct_UEnum_AgoraPlugin_AGORAOPTIONAL, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource = { "isLiveSource", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgoraMediaSource, isLiveSource), Z_Construct_UEnum_AgoraPlugin_AGORAOPTIONAL, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_provider_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_provider = { "provider", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgoraMediaSource, provider), Z_Construct_UClass_UIMediaPlayerCustomDataProvider_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_provider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_uri,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_startPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_provider,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"AgoraMediaSource",
		sizeof(FAgoraMediaSource),
		alignof(FAgoraMediaSource),
		Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAgoraMediaSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAgoraMediaSource_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AgoraMediaSource"), sizeof(FAgoraMediaSource), Get_Z_Construct_UScriptStruct_FAgoraMediaSource_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAgoraMediaSource_Hash() { return 2701450048U; }
	DEFINE_FUNCTION(UIMediaPlayer::execSetSoundPositionParams)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_pan);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetSoundPositionParams(Z_Param_pan,Z_Param_gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetSpatialAudioParams)
	{
		P_GET_STRUCT_REF(FSpatialAudioParams,Z_Param_Out_params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetSpatialAudioParams(Z_Param_Out_params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execUnloadSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UnloadSrc(Z_Param_src);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execPlayPreloadedSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PlayPreloadedSrc(Z_Param_src);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execPreloadSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PreloadSrc(Z_Param_src,Z_Param_startPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSwitchSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_GET_UBOOL(Z_Param_syncPts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SwitchSrc(Z_Param_src,Z_Param_syncPts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSwitchAgoraCDNSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_GET_UBOOL(Z_Param_syncPts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SwitchAgoraCDNSrc(Z_Param_src,Z_Param_syncPts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execRenewAgoraCDNSrcToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_PROPERTY(FInt64Property,Z_Param_ts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RenewAgoraCDNSrcToken(Z_Param_token,Z_Param_ts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execEnableAutoSwitchAgoraCDN)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->EnableAutoSwitchAgoraCDN(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetCurrentAgoraCDNIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAgoraCDNIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSwitchAgoraCDNLineByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SwitchAgoraCDNLineByIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetAgoraCDNLineCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAgoraCDNLineCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execOpenWithAgoraCDNSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->OpenWithAgoraCDNSrc(Z_Param_src,Z_Param_startPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetPlaySrc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPlaySrc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetPlayerSdkVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPlayerSdkVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetAudioDualMonoMode)
	{
		P_GET_ENUM(EAUDIO_DUAL_MONO_MODE,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetAudioDualMonoMode(EAUDIO_DUAL_MONO_MODE(Z_Param_mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execUnregisterMediaPlayerAudioSpectrumObserver)
	{
		P_GET_OBJECT(UIAudioSpectrumObserver,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UnregisterMediaPlayerAudioSpectrumObserver(Z_Param_observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execRegisterMediaPlayerAudioSpectrumObserver)
	{
		P_GET_OBJECT(UIAudioSpectrumObserver,Z_Param_observer);
		P_GET_PROPERTY(FIntProperty,Z_Param_intervalInMS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RegisterMediaPlayerAudioSpectrumObserver(Z_Param_observer,Z_Param_intervalInMS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execUnregisterVideoFrameObserver)
	{
		P_GET_OBJECT(UIVideoFrameObserver,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UnregisterVideoFrameObserver(Z_Param_observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execRegisterVideoFrameObserver)
	{
		P_GET_OBJECT(UIVideoFrameObserver,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RegisterVideoFrameObserver(Z_Param_observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execUnregisterAudioFrameObserver)
	{
		P_GET_OBJECT(UIAudioPcmFrameSink,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UnregisterAudioFrameObserver(Z_Param_observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execRegisterAudioFrameObserver)
	{
		P_GET_OBJECT(UIAudioPcmFrameSink,Z_Param_observer);
		P_GET_ENUM(ERAW_AUDIO_FRAME_OP_MODE_TYPE,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RegisterAudioFrameObserver(Z_Param_observer,ERAW_AUDIO_FRAME_OP_MODE_TYPE(Z_Param_mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execUnregisterPlayerSourceObserver)
	{
		P_GET_OBJECT(UIMediaPlayerSourceObserver,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UnregisterPlayerSourceObserver(Z_Param_observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execRegisterPlayerSourceObserver)
	{
		P_GET_OBJECT(UIMediaPlayerSourceObserver,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RegisterPlayerSourceObserver(Z_Param_observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetRenderMode)
	{
		P_GET_ENUM(ERENDER_MODE_TYPE,Z_Param_renderMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetRenderMode(ERENDER_MODE_TYPE(Z_Param_renderMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetView)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_view);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetView(Z_Param_view);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetPublishSignalVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPublishSignalVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execAdjustPublishSignalVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AdjustPublishSignalVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetPlayoutVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayoutVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execAdjustPlayoutVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AdjustPlayoutVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetMute)
	{
		P_GET_UBOOL(Z_Param_muted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMute(Z_Param_muted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execMute)
	{
		P_GET_UBOOL(Z_Param_muted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Mute(Z_Param_muted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMEDIA_PLAYER_STATE*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetExternalSubtitle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetExternalSubtitle(Z_Param_url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSelectInternalSubtitle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SelectInternalSubtitle(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execTakeScreenshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->TakeScreenshot(Z_Param_filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetPlayerOptionInString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlayerOptionInString(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetPlayerOptionInInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlayerOptionInInt(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSelectAudioTrack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SelectAudioTrack(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetPlaybackSpeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlaybackSpeed(Z_Param_speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetLoopCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_loopCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetLoopCount(Z_Param_loopCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetStreamInfo)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_index);
		P_GET_STRUCT_REF(FPlayerStreamInfo,Z_Param_Out_info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStreamInfo(Z_Param_index,Z_Param_Out_info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetStreamCount)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStreamCount(Z_Param_Out_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetPlayPosition)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_pos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayPosition(Z_Param_Out_pos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetDuration)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDuration(Z_Param_Out_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetAudioPitch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_pitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetAudioPitch(Z_Param_pitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSeek)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_newPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Seek(Z_Param_newPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execResume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Resume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execOpenWithMediaSource)
	{
		P_GET_STRUCT_REF(FAgoraMediaSource,Z_Param_Out_source);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->OpenWithMediaSource(Z_Param_Out_source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execOpenWithCustomSource)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
		P_GET_OBJECT(UIMediaPlayerCustomDataProvider,Z_Param_provider);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->OpenWithCustomSource(Z_Param_startPos,Z_Param_provider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execOpen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Open(Z_Param_url,Z_Param_startPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetMediaPlayerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMediaPlayerId();
		P_NATIVE_END;
	}
	void UIMediaPlayer::StaticRegisterNativesUIMediaPlayer()
	{
		UClass* Class = UIMediaPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustPlayoutVolume", &UIMediaPlayer::execAdjustPlayoutVolume },
			{ "AdjustPublishSignalVolume", &UIMediaPlayer::execAdjustPublishSignalVolume },
			{ "EnableAutoSwitchAgoraCDN", &UIMediaPlayer::execEnableAutoSwitchAgoraCDN },
			{ "GetAgoraCDNLineCount", &UIMediaPlayer::execGetAgoraCDNLineCount },
			{ "GetCurrentAgoraCDNIndex", &UIMediaPlayer::execGetCurrentAgoraCDNIndex },
			{ "GetDuration", &UIMediaPlayer::execGetDuration },
			{ "GetMediaPlayerId", &UIMediaPlayer::execGetMediaPlayerId },
			{ "GetMute", &UIMediaPlayer::execGetMute },
			{ "GetPlayerSdkVersion", &UIMediaPlayer::execGetPlayerSdkVersion },
			{ "GetPlayoutVolume", &UIMediaPlayer::execGetPlayoutVolume },
			{ "GetPlayPosition", &UIMediaPlayer::execGetPlayPosition },
			{ "GetPlaySrc", &UIMediaPlayer::execGetPlaySrc },
			{ "GetPublishSignalVolume", &UIMediaPlayer::execGetPublishSignalVolume },
			{ "GetState", &UIMediaPlayer::execGetState },
			{ "GetStreamCount", &UIMediaPlayer::execGetStreamCount },
			{ "GetStreamInfo", &UIMediaPlayer::execGetStreamInfo },
			{ "Mute", &UIMediaPlayer::execMute },
			{ "Open", &UIMediaPlayer::execOpen },
			{ "OpenWithAgoraCDNSrc", &UIMediaPlayer::execOpenWithAgoraCDNSrc },
			{ "OpenWithCustomSource", &UIMediaPlayer::execOpenWithCustomSource },
			{ "OpenWithMediaSource", &UIMediaPlayer::execOpenWithMediaSource },
			{ "Pause", &UIMediaPlayer::execPause },
			{ "Play", &UIMediaPlayer::execPlay },
			{ "PlayPreloadedSrc", &UIMediaPlayer::execPlayPreloadedSrc },
			{ "PreloadSrc", &UIMediaPlayer::execPreloadSrc },
			{ "RegisterAudioFrameObserver", &UIMediaPlayer::execRegisterAudioFrameObserver },
			{ "RegisterMediaPlayerAudioSpectrumObserver", &UIMediaPlayer::execRegisterMediaPlayerAudioSpectrumObserver },
			{ "RegisterPlayerSourceObserver", &UIMediaPlayer::execRegisterPlayerSourceObserver },
			{ "RegisterVideoFrameObserver", &UIMediaPlayer::execRegisterVideoFrameObserver },
			{ "RenewAgoraCDNSrcToken", &UIMediaPlayer::execRenewAgoraCDNSrcToken },
			{ "Resume", &UIMediaPlayer::execResume },
			{ "Seek", &UIMediaPlayer::execSeek },
			{ "SelectAudioTrack", &UIMediaPlayer::execSelectAudioTrack },
			{ "SelectInternalSubtitle", &UIMediaPlayer::execSelectInternalSubtitle },
			{ "SetAudioDualMonoMode", &UIMediaPlayer::execSetAudioDualMonoMode },
			{ "SetAudioPitch", &UIMediaPlayer::execSetAudioPitch },
			{ "SetExternalSubtitle", &UIMediaPlayer::execSetExternalSubtitle },
			{ "SetLoopCount", &UIMediaPlayer::execSetLoopCount },
			{ "SetPlaybackSpeed", &UIMediaPlayer::execSetPlaybackSpeed },
			{ "SetPlayerOptionInInt", &UIMediaPlayer::execSetPlayerOptionInInt },
			{ "SetPlayerOptionInString", &UIMediaPlayer::execSetPlayerOptionInString },
			{ "SetRenderMode", &UIMediaPlayer::execSetRenderMode },
			{ "SetSoundPositionParams", &UIMediaPlayer::execSetSoundPositionParams },
			{ "SetSpatialAudioParams", &UIMediaPlayer::execSetSpatialAudioParams },
			{ "SetView", &UIMediaPlayer::execSetView },
			{ "Stop", &UIMediaPlayer::execStop },
			{ "SwitchAgoraCDNLineByIndex", &UIMediaPlayer::execSwitchAgoraCDNLineByIndex },
			{ "SwitchAgoraCDNSrc", &UIMediaPlayer::execSwitchAgoraCDNSrc },
			{ "SwitchSrc", &UIMediaPlayer::execSwitchSrc },
			{ "TakeScreenshot", &UIMediaPlayer::execTakeScreenshot },
			{ "UnloadSrc", &UIMediaPlayer::execUnloadSrc },
			{ "UnregisterAudioFrameObserver", &UIMediaPlayer::execUnregisterAudioFrameObserver },
			{ "UnregisterMediaPlayerAudioSpectrumObserver", &UIMediaPlayer::execUnregisterMediaPlayerAudioSpectrumObserver },
			{ "UnregisterPlayerSourceObserver", &UIMediaPlayer::execUnregisterPlayerSourceObserver },
			{ "UnregisterVideoFrameObserver", &UIMediaPlayer::execUnregisterVideoFrameObserver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics
	{
		struct IMediaPlayer_eventAdjustPlayoutVolume_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventAdjustPlayoutVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventAdjustPlayoutVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "AdjustPlayoutVolume", nullptr, nullptr, sizeof(IMediaPlayer_eventAdjustPlayoutVolume_Parms), Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics
	{
		struct IMediaPlayer_eventAdjustPublishSignalVolume_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventAdjustPublishSignalVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventAdjustPublishSignalVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "AdjustPublishSignalVolume", nullptr, nullptr, sizeof(IMediaPlayer_eventAdjustPublishSignalVolume_Parms), Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics
	{
		struct IMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms
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
	void Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((IMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms*)Obj)->enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms), &Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "EnableAutoSwitchAgoraCDN", nullptr, nullptr, sizeof(IMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms), Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics
	{
		struct IMediaPlayer_eventGetAgoraCDNLineCount_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetAgoraCDNLineCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetAgoraCDNLineCount", nullptr, nullptr, sizeof(IMediaPlayer_eventGetAgoraCDNLineCount_Parms), Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics
	{
		struct IMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetCurrentAgoraCDNIndex", nullptr, nullptr, sizeof(IMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms), Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics
	{
		struct IMediaPlayer_eventGetDuration_Parms
		{
			int64 duration;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetDuration_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetDuration", nullptr, nullptr, sizeof(IMediaPlayer_eventGetDuration_Parms), Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics
	{
		struct IMediaPlayer_eventGetMediaPlayerId_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetMediaPlayerId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetMediaPlayerId", nullptr, nullptr, sizeof(IMediaPlayer_eventGetMediaPlayerId_Parms), Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics
	{
		struct IMediaPlayer_eventGetMute_Parms
		{
			bool muted;
			int32 ReturnValue;
		};
		static void NewProp_muted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_muted;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::NewProp_muted_SetBit(void* Obj)
	{
		((IMediaPlayer_eventGetMute_Parms*)Obj)->muted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::NewProp_muted = { "muted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IMediaPlayer_eventGetMute_Parms), &Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::NewProp_muted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetMute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::NewProp_muted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetMute", nullptr, nullptr, sizeof(IMediaPlayer_eventGetMute_Parms), Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics
	{
		struct IMediaPlayer_eventGetPlayerSdkVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPlayerSdkVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetPlayerSdkVersion", nullptr, nullptr, sizeof(IMediaPlayer_eventGetPlayerSdkVersion_Parms), Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics
	{
		struct IMediaPlayer_eventGetPlayoutVolume_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPlayoutVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPlayoutVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetPlayoutVolume", nullptr, nullptr, sizeof(IMediaPlayer_eventGetPlayoutVolume_Parms), Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics
	{
		struct IMediaPlayer_eventGetPlayPosition_Parms
		{
			int64 pos;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_pos;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPlayPosition_Parms, pos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPlayPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::NewProp_pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetPlayPosition", nullptr, nullptr, sizeof(IMediaPlayer_eventGetPlayPosition_Parms), Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics
	{
		struct IMediaPlayer_eventGetPlaySrc_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPlaySrc_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetPlaySrc", nullptr, nullptr, sizeof(IMediaPlayer_eventGetPlaySrc_Parms), Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics
	{
		struct IMediaPlayer_eventGetPublishSignalVolume_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPublishSignalVolume_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPublishSignalVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetPublishSignalVolume", nullptr, nullptr, sizeof(IMediaPlayer_eventGetPublishSignalVolume_Parms), Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetState_Statics
	{
		struct IMediaPlayer_eventGetState_Parms
		{
			EMEDIA_PLAYER_STATE ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_STATE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetState", nullptr, nullptr, sizeof(IMediaPlayer_eventGetState_Parms), Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics
	{
		struct IMediaPlayer_eventGetStreamCount_Parms
		{
			int64 count;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_count;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetStreamCount_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetStreamCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetStreamCount", nullptr, nullptr, sizeof(IMediaPlayer_eventGetStreamCount_Parms), Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetStreamCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics
	{
		struct IMediaPlayer_eventGetStreamInfo_Parms
		{
			int64 index;
			FPlayerStreamInfo info;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_info;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetStreamInfo_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetStreamInfo_Parms, info), Z_Construct_UScriptStruct_FPlayerStreamInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventGetStreamInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::NewProp_info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetStreamInfo", nullptr, nullptr, sizeof(IMediaPlayer_eventGetStreamInfo_Parms), Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Mute_Statics
	{
		struct IMediaPlayer_eventMute_Parms
		{
			bool muted;
			int32 ReturnValue;
		};
		static void NewProp_muted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_muted;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::NewProp_muted_SetBit(void* Obj)
	{
		((IMediaPlayer_eventMute_Parms*)Obj)->muted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::NewProp_muted = { "muted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IMediaPlayer_eventMute_Parms), &Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::NewProp_muted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventMute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::NewProp_muted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Mute", nullptr, nullptr, sizeof(IMediaPlayer_eventMute_Parms), Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Mute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Open_Statics
	{
		struct IMediaPlayer_eventOpen_Parms
		{
			FString url;
			int64 startPos;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_startPos;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_Open_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventOpen_Parms, url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_Open_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventOpen_Parms, startPos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Open_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventOpen_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Open_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Open_Statics::NewProp_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Open_Statics::NewProp_startPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Open_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Open", nullptr, nullptr, sizeof(IMediaPlayer_eventOpen_Parms), Z_Construct_UFunction_UIMediaPlayer_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Open_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics
	{
		struct IMediaPlayer_eventOpenWithAgoraCDNSrc_Parms
		{
			FString src;
			int64 startPos;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_src;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_startPos;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithAgoraCDNSrc_Parms, src), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithAgoraCDNSrc_Parms, startPos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithAgoraCDNSrc_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_src,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_startPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "OpenWithAgoraCDNSrc", nullptr, nullptr, sizeof(IMediaPlayer_eventOpenWithAgoraCDNSrc_Parms), Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics
	{
		struct IMediaPlayer_eventOpenWithCustomSource_Parms
		{
			int64 startPos;
			UIMediaPlayerCustomDataProvider* provider;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_startPos;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_provider;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithCustomSource_Parms, startPos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::NewProp_provider = { "provider", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithCustomSource_Parms, provider), Z_Construct_UClass_UIMediaPlayerCustomDataProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithCustomSource_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::NewProp_startPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::NewProp_provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "OpenWithCustomSource", nullptr, nullptr, sizeof(IMediaPlayer_eventOpenWithCustomSource_Parms), Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics
	{
		struct IMediaPlayer_eventOpenWithMediaSource_Parms
		{
			FAgoraMediaSource source;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_source;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithMediaSource_Parms, source), Z_Construct_UScriptStruct_FAgoraMediaSource, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_source_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithMediaSource_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "OpenWithMediaSource", nullptr, nullptr, sizeof(IMediaPlayer_eventOpenWithMediaSource_Parms), Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Pause_Statics
	{
		struct IMediaPlayer_eventPause_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventPause_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Pause", nullptr, nullptr, sizeof(IMediaPlayer_eventPause_Parms), Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Play_Statics
	{
		struct IMediaPlayer_eventPlay_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventPlay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Play_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Play", nullptr, nullptr, sizeof(IMediaPlayer_eventPlay_Parms), Z_Construct_UFunction_UIMediaPlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics
	{
		struct IMediaPlayer_eventPlayPreloadedSrc_Parms
		{
			FString src;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_src;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventPlayPreloadedSrc_Parms, src), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventPlayPreloadedSrc_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::NewProp_src,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "PlayPreloadedSrc", nullptr, nullptr, sizeof(IMediaPlayer_eventPlayPreloadedSrc_Parms), Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics
	{
		struct IMediaPlayer_eventPreloadSrc_Parms
		{
			FString src;
			int64 startPos;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_src;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_startPos;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventPreloadSrc_Parms, src), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventPreloadSrc_Parms, startPos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventPreloadSrc_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::NewProp_src,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::NewProp_startPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "PreloadSrc", nullptr, nullptr, sizeof(IMediaPlayer_eventPreloadSrc_Parms), Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_PreloadSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics
	{
		struct IMediaPlayer_eventRegisterAudioFrameObserver_Parms
		{
			UIAudioPcmFrameSink* observer;
			ERAW_AUDIO_FRAME_OP_MODE_TYPE mode;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterAudioFrameObserver_Parms, observer), Z_Construct_UClass_UIAudioPcmFrameSink_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterAudioFrameObserver_Parms, mode), Z_Construct_UEnum_AgoraPlugin_ERAW_AUDIO_FRAME_OP_MODE_TYPE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterAudioFrameObserver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_observer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "CPP_Default_mode", "RAW_AUDIO_FRAME_OP_MODE_READ_ONLY" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "RegisterAudioFrameObserver", nullptr, nullptr, sizeof(IMediaPlayer_eventRegisterAudioFrameObserver_Parms), Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics
	{
		struct IMediaPlayer_eventRegisterMediaPlayerAudioSpectrumObserver_Parms
		{
			UIAudioSpectrumObserver* observer;
			int32 intervalInMS;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_intervalInMS;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterMediaPlayerAudioSpectrumObserver_Parms, observer), Z_Construct_UClass_UIAudioSpectrumObserver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_intervalInMS = { "intervalInMS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterMediaPlayerAudioSpectrumObserver_Parms, intervalInMS), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterMediaPlayerAudioSpectrumObserver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_observer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_intervalInMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "RegisterMediaPlayerAudioSpectrumObserver", nullptr, nullptr, sizeof(IMediaPlayer_eventRegisterMediaPlayerAudioSpectrumObserver_Parms), Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics
	{
		struct IMediaPlayer_eventRegisterPlayerSourceObserver_Parms
		{
			UIMediaPlayerSourceObserver* observer;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterPlayerSourceObserver_Parms, observer), Z_Construct_UClass_UIMediaPlayerSourceObserver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterPlayerSourceObserver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::NewProp_observer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "RegisterPlayerSourceObserver", nullptr, nullptr, sizeof(IMediaPlayer_eventRegisterPlayerSourceObserver_Parms), Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics
	{
		struct IMediaPlayer_eventRegisterVideoFrameObserver_Parms
		{
			UIVideoFrameObserver* observer;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterVideoFrameObserver_Parms, observer), Z_Construct_UClass_UIVideoFrameObserver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterVideoFrameObserver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::NewProp_observer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "RegisterVideoFrameObserver", nullptr, nullptr, sizeof(IMediaPlayer_eventRegisterVideoFrameObserver_Parms), Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics
	{
		struct IMediaPlayer_eventRenewAgoraCDNSrcToken_Parms
		{
			FString token;
			int64 ts;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_token;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ts;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventRenewAgoraCDNSrcToken_Parms, token), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ts = { "ts", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventRenewAgoraCDNSrcToken_Parms, ts), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventRenewAgoraCDNSrcToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "RenewAgoraCDNSrcToken", nullptr, nullptr, sizeof(IMediaPlayer_eventRenewAgoraCDNSrcToken_Parms), Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Resume_Statics
	{
		struct IMediaPlayer_eventResume_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventResume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Resume", nullptr, nullptr, sizeof(IMediaPlayer_eventResume_Parms), Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Resume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Seek_Statics
	{
		struct IMediaPlayer_eventSeek_Parms
		{
			int64 newPos;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_newPos;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::NewProp_newPos = { "newPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSeek_Parms, newPos), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSeek_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::NewProp_newPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Seek", nullptr, nullptr, sizeof(IMediaPlayer_eventSeek_Parms), Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Seek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics
	{
		struct IMediaPlayer_eventSelectAudioTrack_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSelectAudioTrack_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSelectAudioTrack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SelectAudioTrack", nullptr, nullptr, sizeof(IMediaPlayer_eventSelectAudioTrack_Parms), Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics
	{
		struct IMediaPlayer_eventSelectInternalSubtitle_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSelectInternalSubtitle_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSelectInternalSubtitle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SelectInternalSubtitle", nullptr, nullptr, sizeof(IMediaPlayer_eventSelectInternalSubtitle_Parms), Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics
	{
		struct IMediaPlayer_eventSetAudioDualMonoMode_Parms
		{
			EAUDIO_DUAL_MONO_MODE mode;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetAudioDualMonoMode_Parms, mode), Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetAudioDualMonoMode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetAudioDualMonoMode", nullptr, nullptr, sizeof(IMediaPlayer_eventSetAudioDualMonoMode_Parms), Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics
	{
		struct IMediaPlayer_eventSetAudioPitch_Parms
		{
			int32 pitch;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_pitch;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::NewProp_pitch = { "pitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetAudioPitch_Parms, pitch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetAudioPitch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::NewProp_pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetAudioPitch", nullptr, nullptr, sizeof(IMediaPlayer_eventSetAudioPitch_Parms), Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics
	{
		struct IMediaPlayer_eventSetExternalSubtitle_Parms
		{
			FString url;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetExternalSubtitle_Parms, url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetExternalSubtitle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::NewProp_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetExternalSubtitle", nullptr, nullptr, sizeof(IMediaPlayer_eventSetExternalSubtitle_Parms), Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics
	{
		struct IMediaPlayer_eventSetLoopCount_Parms
		{
			int32 loopCount;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_loopCount;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::NewProp_loopCount = { "loopCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetLoopCount_Parms, loopCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetLoopCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::NewProp_loopCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetLoopCount", nullptr, nullptr, sizeof(IMediaPlayer_eventSetLoopCount_Parms), Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetLoopCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics
	{
		struct IMediaPlayer_eventSetPlaybackSpeed_Parms
		{
			int32 speed;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlaybackSpeed_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlaybackSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetPlaybackSpeed", nullptr, nullptr, sizeof(IMediaPlayer_eventSetPlaybackSpeed_Parms), Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics
	{
		struct IMediaPlayer_eventSetPlayerOptionInInt_Parms
		{
			FString key;
			int32 value;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlayerOptionInInt_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlayerOptionInInt_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlayerOptionInInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetPlayerOptionInInt", nullptr, nullptr, sizeof(IMediaPlayer_eventSetPlayerOptionInInt_Parms), Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics
	{
		struct IMediaPlayer_eventSetPlayerOptionInString_Parms
		{
			FString key;
			FString value;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlayerOptionInString_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlayerOptionInString_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlayerOptionInString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetPlayerOptionInString", nullptr, nullptr, sizeof(IMediaPlayer_eventSetPlayerOptionInString_Parms), Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics
	{
		struct IMediaPlayer_eventSetRenderMode_Parms
		{
			ERENDER_MODE_TYPE renderMode;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_renderMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_renderMode;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::NewProp_renderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::NewProp_renderMode = { "renderMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetRenderMode_Parms, renderMode), Z_Construct_UEnum_AgoraPlugin_ERENDER_MODE_TYPE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetRenderMode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::NewProp_renderMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::NewProp_renderMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetRenderMode", nullptr, nullptr, sizeof(IMediaPlayer_eventSetRenderMode_Parms), Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetRenderMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics
	{
		struct IMediaPlayer_eventSetSoundPositionParams_Parms
		{
			float pan;
			float gain;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pan;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gain;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::NewProp_pan = { "pan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetSoundPositionParams_Parms, pan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetSoundPositionParams_Parms, gain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetSoundPositionParams_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::NewProp_pan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::NewProp_gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetSoundPositionParams", nullptr, nullptr, sizeof(IMediaPlayer_eventSetSoundPositionParams_Parms), Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics
	{
		struct IMediaPlayer_eventSetSpatialAudioParams_Parms
		{
			FSpatialAudioParams params;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_params;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetSpatialAudioParams_Parms, params), Z_Construct_UScriptStruct_FSpatialAudioParams, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetSpatialAudioParams_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetSpatialAudioParams", nullptr, nullptr, sizeof(IMediaPlayer_eventSetSpatialAudioParams_Parms), Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetView_Statics
	{
		struct IMediaPlayer_eventSetView_Parms
		{
			int64 view;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_view;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::NewProp_view = { "view", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetView_Parms, view), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSetView_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::NewProp_view,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetView", nullptr, nullptr, sizeof(IMediaPlayer_eventSetView_Parms), Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Stop_Statics
	{
		struct IMediaPlayer_eventStop_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventStop_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Stop", nullptr, nullptr, sizeof(IMediaPlayer_eventStop_Parms), Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics
	{
		struct IMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SwitchAgoraCDNLineByIndex", nullptr, nullptr, sizeof(IMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms), Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics
	{
		struct IMediaPlayer_eventSwitchAgoraCDNSrc_Parms
		{
			FString src;
			bool syncPts;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_src;
		static void NewProp_syncPts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_syncPts;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSwitchAgoraCDNSrc_Parms, src), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts_SetBit(void* Obj)
	{
		((IMediaPlayer_eventSwitchAgoraCDNSrc_Parms*)Obj)->syncPts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts = { "syncPts", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IMediaPlayer_eventSwitchAgoraCDNSrc_Parms), &Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSwitchAgoraCDNSrc_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_src,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SwitchAgoraCDNSrc", nullptr, nullptr, sizeof(IMediaPlayer_eventSwitchAgoraCDNSrc_Parms), Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics
	{
		struct IMediaPlayer_eventSwitchSrc_Parms
		{
			FString src;
			bool syncPts;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_src;
		static void NewProp_syncPts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_syncPts;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSwitchSrc_Parms, src), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_syncPts_SetBit(void* Obj)
	{
		((IMediaPlayer_eventSwitchSrc_Parms*)Obj)->syncPts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_syncPts = { "syncPts", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IMediaPlayer_eventSwitchSrc_Parms), &Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_syncPts_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventSwitchSrc_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_src,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_syncPts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SwitchSrc", nullptr, nullptr, sizeof(IMediaPlayer_eventSwitchSrc_Parms), Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SwitchSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics
	{
		struct IMediaPlayer_eventTakeScreenshot_Parms
		{
			FString filename;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filename;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventTakeScreenshot_Parms, filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventTakeScreenshot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::NewProp_filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "TakeScreenshot", nullptr, nullptr, sizeof(IMediaPlayer_eventTakeScreenshot_Parms), Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics
	{
		struct IMediaPlayer_eventUnloadSrc_Parms
		{
			FString src;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_src;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventUnloadSrc_Parms, src), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventUnloadSrc_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::NewProp_src,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "UnloadSrc", nullptr, nullptr, sizeof(IMediaPlayer_eventUnloadSrc_Parms), Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_UnloadSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics
	{
		struct IMediaPlayer_eventUnregisterAudioFrameObserver_Parms
		{
			UIAudioPcmFrameSink* observer;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterAudioFrameObserver_Parms, observer), Z_Construct_UClass_UIAudioPcmFrameSink_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterAudioFrameObserver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::NewProp_observer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "UnregisterAudioFrameObserver", nullptr, nullptr, sizeof(IMediaPlayer_eventUnregisterAudioFrameObserver_Parms), Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics
	{
		struct IMediaPlayer_eventUnregisterMediaPlayerAudioSpectrumObserver_Parms
		{
			UIAudioSpectrumObserver* observer;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterMediaPlayerAudioSpectrumObserver_Parms, observer), Z_Construct_UClass_UIAudioSpectrumObserver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterMediaPlayerAudioSpectrumObserver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_observer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "UnregisterMediaPlayerAudioSpectrumObserver", nullptr, nullptr, sizeof(IMediaPlayer_eventUnregisterMediaPlayerAudioSpectrumObserver_Parms), Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics
	{
		struct IMediaPlayer_eventUnregisterPlayerSourceObserver_Parms
		{
			UIMediaPlayerSourceObserver* observer;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterPlayerSourceObserver_Parms, observer), Z_Construct_UClass_UIMediaPlayerSourceObserver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterPlayerSourceObserver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::NewProp_observer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "UnregisterPlayerSourceObserver", nullptr, nullptr, sizeof(IMediaPlayer_eventUnregisterPlayerSourceObserver_Parms), Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics
	{
		struct IMediaPlayer_eventUnregisterVideoFrameObserver_Parms
		{
			UIVideoFrameObserver* observer;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterVideoFrameObserver_Parms, observer), Z_Construct_UClass_UIVideoFrameObserver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterVideoFrameObserver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::NewProp_observer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "UnregisterVideoFrameObserver", nullptr, nullptr, sizeof(IMediaPlayer_eventUnregisterVideoFrameObserver_Parms), Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIMediaPlayer_NoRegister()
	{
		return UIMediaPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UIMediaPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediaPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIMediaPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume, "AdjustPlayoutVolume" }, // 1908246279
		{ &Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume, "AdjustPublishSignalVolume" }, // 2927524735
		{ &Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN, "EnableAutoSwitchAgoraCDN" }, // 815860941
		{ &Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount, "GetAgoraCDNLineCount" }, // 1884676025
		{ &Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex, "GetCurrentAgoraCDNIndex" }, // 2166638745
		{ &Z_Construct_UFunction_UIMediaPlayer_GetDuration, "GetDuration" }, // 3822778332
		{ &Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId, "GetMediaPlayerId" }, // 1269768752
		{ &Z_Construct_UFunction_UIMediaPlayer_GetMute, "GetMute" }, // 3524266948
		{ &Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion, "GetPlayerSdkVersion" }, // 1662801965
		{ &Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume, "GetPlayoutVolume" }, // 2157378271
		{ &Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition, "GetPlayPosition" }, // 2632907811
		{ &Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc, "GetPlaySrc" }, // 3852880813
		{ &Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume, "GetPublishSignalVolume" }, // 3420150702
		{ &Z_Construct_UFunction_UIMediaPlayer_GetState, "GetState" }, // 1470922842
		{ &Z_Construct_UFunction_UIMediaPlayer_GetStreamCount, "GetStreamCount" }, // 1473124566
		{ &Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo, "GetStreamInfo" }, // 2149038621
		{ &Z_Construct_UFunction_UIMediaPlayer_Mute, "Mute" }, // 4128598034
		{ &Z_Construct_UFunction_UIMediaPlayer_Open, "Open" }, // 1418153522
		{ &Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc, "OpenWithAgoraCDNSrc" }, // 4154582495
		{ &Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource, "OpenWithCustomSource" }, // 3290506507
		{ &Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource, "OpenWithMediaSource" }, // 2584707690
		{ &Z_Construct_UFunction_UIMediaPlayer_Pause, "Pause" }, // 4089272931
		{ &Z_Construct_UFunction_UIMediaPlayer_Play, "Play" }, // 347014320
		{ &Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc, "PlayPreloadedSrc" }, // 1542841033
		{ &Z_Construct_UFunction_UIMediaPlayer_PreloadSrc, "PreloadSrc" }, // 276905527
		{ &Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver, "RegisterAudioFrameObserver" }, // 1283897079
		{ &Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver, "RegisterMediaPlayerAudioSpectrumObserver" }, // 3235266371
		{ &Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver, "RegisterPlayerSourceObserver" }, // 666361257
		{ &Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver, "RegisterVideoFrameObserver" }, // 768495733
		{ &Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken, "RenewAgoraCDNSrcToken" }, // 2175643985
		{ &Z_Construct_UFunction_UIMediaPlayer_Resume, "Resume" }, // 935130200
		{ &Z_Construct_UFunction_UIMediaPlayer_Seek, "Seek" }, // 3272033767
		{ &Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack, "SelectAudioTrack" }, // 2811204216
		{ &Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle, "SelectInternalSubtitle" }, // 3407848456
		{ &Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode, "SetAudioDualMonoMode" }, // 2958027300
		{ &Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch, "SetAudioPitch" }, // 1971486424
		{ &Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle, "SetExternalSubtitle" }, // 2059004303
		{ &Z_Construct_UFunction_UIMediaPlayer_SetLoopCount, "SetLoopCount" }, // 3372718952
		{ &Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 3535480516
		{ &Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt, "SetPlayerOptionInInt" }, // 422120833
		{ &Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString, "SetPlayerOptionInString" }, // 3450530362
		{ &Z_Construct_UFunction_UIMediaPlayer_SetRenderMode, "SetRenderMode" }, // 2109230628
		{ &Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams, "SetSoundPositionParams" }, // 3860265790
		{ &Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams, "SetSpatialAudioParams" }, // 2685744732
		{ &Z_Construct_UFunction_UIMediaPlayer_SetView, "SetView" }, // 2178833797
		{ &Z_Construct_UFunction_UIMediaPlayer_Stop, "Stop" }, // 3372832992
		{ &Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex, "SwitchAgoraCDNLineByIndex" }, // 2419589167
		{ &Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc, "SwitchAgoraCDNSrc" }, // 3273242202
		{ &Z_Construct_UFunction_UIMediaPlayer_SwitchSrc, "SwitchSrc" }, // 2490165858
		{ &Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot, "TakeScreenshot" }, // 1872620337
		{ &Z_Construct_UFunction_UIMediaPlayer_UnloadSrc, "UnloadSrc" }, // 1345140567
		{ &Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver, "UnregisterAudioFrameObserver" }, // 2285340748
		{ &Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver, "UnregisterMediaPlayerAudioSpectrumObserver" }, // 2025238776
		{ &Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver, "UnregisterPlayerSourceObserver" }, // 3991998257
		{ &Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver, "UnregisterVideoFrameObserver" }, // 2043517429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediaPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMediaPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIMediaPlayer_Statics::ClassParams = {
		&UIMediaPlayer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIMediaPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIMediaPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIMediaPlayer, 1845346506);
	template<> AGORAPLUGIN_API UClass* StaticClass<UIMediaPlayer>()
	{
		return UIMediaPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIMediaPlayer(Z_Construct_UClass_UIMediaPlayer, &UIMediaPlayer::StaticClass, TEXT("/Script/AgoraPlugin"), TEXT("UIMediaPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediaPlayer);
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execGetCacheFileCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCacheFileCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execGetMaxCacheFileSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetMaxCacheFileSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execGetMaxCacheFileCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxCacheFileCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execGetCacheDir)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_GET_PROPERTY(FIntProperty,Z_Param_length);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCacheDir(Z_Param_path,Z_Param_length);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execEnableAutoRemoveCache)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->EnableAutoRemoveCache(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execSetMaxCacheFileSize)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_cacheSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetMaxCacheFileSize(Z_Param_cacheSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execSetMaxCacheFileCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetMaxCacheFileCount(Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execSetCacheDir)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetCacheDir(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execRemoveCacheByUri)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_uri);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveCacheByUri(Z_Param_uri);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execRemoveOldCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveOldCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execRemoveAllCaches)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveAllCaches();
		P_NATIVE_END;
	}
	void UIMediaPlayerCacheManager::StaticRegisterNativesUIMediaPlayerCacheManager()
	{
		UClass* Class = UIMediaPlayerCacheManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableAutoRemoveCache", &UIMediaPlayerCacheManager::execEnableAutoRemoveCache },
			{ "GetCacheDir", &UIMediaPlayerCacheManager::execGetCacheDir },
			{ "GetCacheFileCount", &UIMediaPlayerCacheManager::execGetCacheFileCount },
			{ "GetMaxCacheFileCount", &UIMediaPlayerCacheManager::execGetMaxCacheFileCount },
			{ "GetMaxCacheFileSize", &UIMediaPlayerCacheManager::execGetMaxCacheFileSize },
			{ "RemoveAllCaches", &UIMediaPlayerCacheManager::execRemoveAllCaches },
			{ "RemoveCacheByUri", &UIMediaPlayerCacheManager::execRemoveCacheByUri },
			{ "RemoveOldCache", &UIMediaPlayerCacheManager::execRemoveOldCache },
			{ "SetCacheDir", &UIMediaPlayerCacheManager::execSetCacheDir },
			{ "SetMaxCacheFileCount", &UIMediaPlayerCacheManager::execSetMaxCacheFileCount },
			{ "SetMaxCacheFileSize", &UIMediaPlayerCacheManager::execSetMaxCacheFileSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics
	{
		struct IMediaPlayerCacheManager_eventEnableAutoRemoveCache_Parms
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
	void Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((IMediaPlayerCacheManager_eventEnableAutoRemoveCache_Parms*)Obj)->enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IMediaPlayerCacheManager_eventEnableAutoRemoveCache_Parms), &Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::NewProp_enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventEnableAutoRemoveCache_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::NewProp_enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "EnableAutoRemoveCache", nullptr, nullptr, sizeof(IMediaPlayerCacheManager_eventEnableAutoRemoveCache_Parms), Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics
	{
		struct IMediaPlayerCacheManager_eventGetCacheDir_Parms
		{
			FString path;
			int32 length;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_length;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventGetCacheDir_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventGetCacheDir_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventGetCacheDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "GetCacheDir", nullptr, nullptr, sizeof(IMediaPlayerCacheManager_eventGetCacheDir_Parms), Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics
	{
		struct IMediaPlayerCacheManager_eventGetCacheFileCount_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventGetCacheFileCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "GetCacheFileCount", nullptr, nullptr, sizeof(IMediaPlayerCacheManager_eventGetCacheFileCount_Parms), Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics
	{
		struct IMediaPlayerCacheManager_eventGetMaxCacheFileCount_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventGetMaxCacheFileCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "GetMaxCacheFileCount", nullptr, nullptr, sizeof(IMediaPlayerCacheManager_eventGetMaxCacheFileCount_Parms), Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics
	{
		struct IMediaPlayerCacheManager_eventGetMaxCacheFileSize_Parms
		{
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventGetMaxCacheFileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "GetMaxCacheFileSize", nullptr, nullptr, sizeof(IMediaPlayerCacheManager_eventGetMaxCacheFileSize_Parms), Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics
	{
		struct IMediaPlayerCacheManager_eventRemoveAllCaches_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventRemoveAllCaches_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "RemoveAllCaches", nullptr, nullptr, sizeof(IMediaPlayerCacheManager_eventRemoveAllCaches_Parms), Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics
	{
		struct IMediaPlayerCacheManager_eventRemoveCacheByUri_Parms
		{
			FString uri;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_uri;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::NewProp_uri = { "uri", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventRemoveCacheByUri_Parms, uri), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventRemoveCacheByUri_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::NewProp_uri,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "RemoveCacheByUri", nullptr, nullptr, sizeof(IMediaPlayerCacheManager_eventRemoveCacheByUri_Parms), Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics
	{
		struct IMediaPlayerCacheManager_eventRemoveOldCache_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventRemoveOldCache_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "RemoveOldCache", nullptr, nullptr, sizeof(IMediaPlayerCacheManager_eventRemoveOldCache_Parms), Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics
	{
		struct IMediaPlayerCacheManager_eventSetCacheDir_Parms
		{
			FString path;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventSetCacheDir_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventSetCacheDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "SetCacheDir", nullptr, nullptr, sizeof(IMediaPlayerCacheManager_eventSetCacheDir_Parms), Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics
	{
		struct IMediaPlayerCacheManager_eventSetMaxCacheFileCount_Parms
		{
			int32 count;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventSetMaxCacheFileCount_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventSetMaxCacheFileCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "SetMaxCacheFileCount", nullptr, nullptr, sizeof(IMediaPlayerCacheManager_eventSetMaxCacheFileCount_Parms), Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics
	{
		struct IMediaPlayerCacheManager_eventSetMaxCacheFileSize_Parms
		{
			int64 cacheSize;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_cacheSize;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::NewProp_cacheSize = { "cacheSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventSetMaxCacheFileSize_Parms, cacheSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventSetMaxCacheFileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::NewProp_cacheSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "SetMaxCacheFileSize", nullptr, nullptr, sizeof(IMediaPlayerCacheManager_eventSetMaxCacheFileSize_Parms), Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIMediaPlayerCacheManager_NoRegister()
	{
		return UIMediaPlayerCacheManager::StaticClass();
	}
	struct Z_Construct_UClass_UIMediaPlayerCacheManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache, "EnableAutoRemoveCache" }, // 2384683816
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir, "GetCacheDir" }, // 2477724334
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount, "GetCacheFileCount" }, // 1102709101
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount, "GetMaxCacheFileCount" }, // 2525977351
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize, "GetMaxCacheFileSize" }, // 2376327049
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches, "RemoveAllCaches" }, // 2225761932
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri, "RemoveCacheByUri" }, // 2679095880
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache, "RemoveOldCache" }, // 396643078
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir, "SetCacheDir" }, // 1586446857
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount, "SetMaxCacheFileCount" }, // 1998739949
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize, "SetMaxCacheFileSize" }, // 1572858553
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMediaPlayerCacheManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::ClassParams = {
		&UIMediaPlayerCacheManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIMediaPlayerCacheManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIMediaPlayerCacheManager, 1278462581);
	template<> AGORAPLUGIN_API UClass* StaticClass<UIMediaPlayerCacheManager>()
	{
		return UIMediaPlayerCacheManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIMediaPlayerCacheManager(Z_Construct_UClass_UIMediaPlayerCacheManager, &UIMediaPlayerCacheManager::StaticClass, TEXT("/Script/AgoraPlugin"), TEXT("UIMediaPlayerCacheManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediaPlayerCacheManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
