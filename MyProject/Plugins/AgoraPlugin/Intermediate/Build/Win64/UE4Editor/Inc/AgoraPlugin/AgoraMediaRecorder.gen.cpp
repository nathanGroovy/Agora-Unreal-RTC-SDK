// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraMediaRecorder() {}
// Cross Module References
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMediaRecorderConfiguration();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaRecorder_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaRecorder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaRecorderObserver_NoRegister();
// End Cross Module References
	static UEnum* EMediaRecorderStreamType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EMediaRecorderStreamType"));
		}
		return Singleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EMediaRecorderStreamType>()
	{
		return EMediaRecorderStreamType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaRecorderStreamType(EMediaRecorderStreamType_StaticEnum, TEXT("/Script/AgoraPlugin"), TEXT("EMediaRecorderStreamType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType_Hash() { return 2744234025U; }
	UEnum* Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaRecorderStreamType"), 0, Get_Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaRecorderStreamType::STREAM_TYPE_NULL", (int64)EMediaRecorderStreamType::STREAM_TYPE_NULL },
				{ "EMediaRecorderStreamType::STREAM_TYPE_AUDIO", (int64)EMediaRecorderStreamType::STREAM_TYPE_AUDIO },
				{ "EMediaRecorderStreamType::STREAM_TYPE_VIDEO", (int64)EMediaRecorderStreamType::STREAM_TYPE_VIDEO },
				{ "EMediaRecorderStreamType::STREAM_TYPE_BOTH", (int64)EMediaRecorderStreamType::STREAM_TYPE_BOTH },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
				{ "STREAM_TYPE_AUDIO.Name", "EMediaRecorderStreamType::STREAM_TYPE_AUDIO" },
				{ "STREAM_TYPE_BOTH.Name", "EMediaRecorderStreamType::STREAM_TYPE_BOTH" },
				{ "STREAM_TYPE_NULL.Name", "EMediaRecorderStreamType::STREAM_TYPE_NULL" },
				{ "STREAM_TYPE_VIDEO.Name", "EMediaRecorderStreamType::STREAM_TYPE_VIDEO" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
				nullptr,
				"EMediaRecorderStreamType",
				"EMediaRecorderStreamType",
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
	static UEnum* EMediaRecorderContainerFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EMediaRecorderContainerFormat"));
		}
		return Singleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EMediaRecorderContainerFormat>()
	{
		return EMediaRecorderContainerFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaRecorderContainerFormat(EMediaRecorderContainerFormat_StaticEnum, TEXT("/Script/AgoraPlugin"), TEXT("EMediaRecorderContainerFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat_Hash() { return 3302632608U; }
	UEnum* Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaRecorderContainerFormat"), 0, Get_Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaRecorderContainerFormat::FORMAT_NULL", (int64)EMediaRecorderContainerFormat::FORMAT_NULL },
				{ "EMediaRecorderContainerFormat::FORMAT_MP4", (int64)EMediaRecorderContainerFormat::FORMAT_MP4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FORMAT_MP4.Name", "EMediaRecorderContainerFormat::FORMAT_MP4" },
				{ "FORMAT_NULL.Name", "EMediaRecorderContainerFormat::FORMAT_NULL" },
				{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
				nullptr,
				"EMediaRecorderContainerFormat",
				"EMediaRecorderContainerFormat",
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
class UScriptStruct* FMediaRecorderConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGORAPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaRecorderConfiguration, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("MediaRecorderConfiguration"), sizeof(FMediaRecorderConfiguration), Get_Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Hash());
	}
	return Singleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FMediaRecorderConfiguration>()
{
	return FMediaRecorderConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMediaRecorderConfiguration(FMediaRecorderConfiguration::StaticStruct, TEXT("/Script/AgoraPlugin"), TEXT("MediaRecorderConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_AgoraPlugin_StaticRegisterNativesFMediaRecorderConfiguration
{
	FScriptStruct_AgoraPlugin_StaticRegisterNativesFMediaRecorderConfiguration()
	{
		UScriptStruct::DeferCppStructOps<FMediaRecorderConfiguration>(FName(TEXT("MediaRecorderConfiguration")));
	}
} ScriptStruct_AgoraPlugin_StaticRegisterNativesFMediaRecorderConfiguration;
	struct Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_storagePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_containerFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_containerFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_containerFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_streamType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_streamType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_streamType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxDurationMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxDurationMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_recorderInfoUpdateInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_recorderInfoUpdateInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaRecorderConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_storagePath_MetaData[] = {
		{ "Category", "Agora|MediaRecorderConfiguration" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_storagePath = { "storagePath", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaRecorderConfiguration, storagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_storagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_storagePath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat_MetaData[] = {
		{ "Category", "Agora|MediaRecorderConfiguration" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat = { "containerFormat", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaRecorderConfiguration, containerFormat), Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType_MetaData[] = {
		{ "Category", "Agora|MediaRecorderConfiguration" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType = { "streamType", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaRecorderConfiguration, streamType), Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_maxDurationMs_MetaData[] = {
		{ "Category", "Agora|MediaRecorderConfiguration" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_maxDurationMs = { "maxDurationMs", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaRecorderConfiguration, maxDurationMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_maxDurationMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_maxDurationMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_recorderInfoUpdateInterval_MetaData[] = {
		{ "Category", "Agora|MediaRecorderConfiguration" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_recorderInfoUpdateInterval = { "recorderInfoUpdateInterval", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaRecorderConfiguration, recorderInfoUpdateInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_recorderInfoUpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_recorderInfoUpdateInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_storagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_maxDurationMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_recorderInfoUpdateInterval,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"MediaRecorderConfiguration",
		sizeof(FMediaRecorderConfiguration),
		alignof(FMediaRecorderConfiguration),
		Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaRecorderConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MediaRecorderConfiguration"), sizeof(FMediaRecorderConfiguration), Get_Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Hash() { return 3681134094U; }
	DEFINE_FUNCTION(UIMediaRecorder::execStopRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StopRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaRecorder::execStartRecording)
	{
		P_GET_STRUCT_REF(FMediaRecorderConfiguration,Z_Param_Out_config);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StartRecording(Z_Param_Out_config);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaRecorder::execSetMediaRecorderObserver)
	{
		P_GET_OBJECT(UIMediaRecorderObserver,Z_Param_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetMediaRecorderObserver(Z_Param_callback);
		P_NATIVE_END;
	}
	void UIMediaRecorder::StaticRegisterNativesUIMediaRecorder()
	{
		UClass* Class = UIMediaRecorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMediaRecorderObserver", &UIMediaRecorder::execSetMediaRecorderObserver },
			{ "StartRecording", &UIMediaRecorder::execStartRecording },
			{ "StopRecording", &UIMediaRecorder::execStopRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics
	{
		struct IMediaRecorder_eventSetMediaRecorderObserver_Parms
		{
			UIMediaRecorderObserver* callback;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaRecorder_eventSetMediaRecorderObserver_Parms, callback), Z_Construct_UClass_UIMediaRecorderObserver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaRecorder_eventSetMediaRecorderObserver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::NewProp_callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaRecorder" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaRecorder, nullptr, "SetMediaRecorderObserver", nullptr, nullptr, sizeof(IMediaRecorder_eventSetMediaRecorderObserver_Parms), Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics
	{
		struct IMediaRecorder_eventStartRecording_Parms
		{
			FMediaRecorderConfiguration config;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaRecorder_eventStartRecording_Parms, config), Z_Construct_UScriptStruct_FMediaRecorderConfiguration, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaRecorder_eventStartRecording_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::NewProp_config,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaRecorder" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaRecorder, nullptr, "StartRecording", nullptr, nullptr, sizeof(IMediaRecorder_eventStartRecording_Parms), Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaRecorder_StartRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics
	{
		struct IMediaRecorder_eventStopRecording_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IMediaRecorder_eventStopRecording_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaRecorder" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaRecorder, nullptr, "StopRecording", nullptr, nullptr, sizeof(IMediaRecorder_eventStopRecording_Parms), Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIMediaRecorder_StopRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIMediaRecorder_NoRegister()
	{
		return UIMediaRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UIMediaRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediaRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIMediaRecorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver, "SetMediaRecorderObserver" }, // 1218145500
		{ &Z_Construct_UFunction_UIMediaRecorder_StartRecording, "StartRecording" }, // 1822569000
		{ &Z_Construct_UFunction_UIMediaRecorder_StopRecording, "StopRecording" }, // 3902377923
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediaRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMediaRecorder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIMediaRecorder_Statics::ClassParams = {
		&UIMediaRecorder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIMediaRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIMediaRecorder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIMediaRecorder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIMediaRecorder, 49935896);
	template<> AGORAPLUGIN_API UClass* StaticClass<UIMediaRecorder>()
	{
		return UIMediaRecorder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIMediaRecorder(Z_Construct_UClass_UIMediaRecorder, &UIMediaRecorder::StaticClass, TEXT("/Script/AgoraPlugin"), TEXT("UIMediaRecorder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediaRecorder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
