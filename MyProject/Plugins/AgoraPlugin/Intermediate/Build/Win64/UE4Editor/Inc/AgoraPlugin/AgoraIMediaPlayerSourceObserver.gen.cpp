// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraIMediaPlayerSourceObserver() {}
// Cross Module References
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerUpdatedInfo();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSrcInfo();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_STATE();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCacheStatistics();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerSourceObserver_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerSourceObserver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerCustomDataProvider_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerCustomDataProvider();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnSeek_Parms
		{
			int64 offset;
			int32 whence;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_offset;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_whence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnSeek_Parms, offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::NewProp_whence = { "whence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnSeek_Parms, whence), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::NewProp_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::NewProp_whence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnSeek__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnSeek_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnReadData_Parms
		{
			TArray<int64> buffer;
			int32 bufferSize;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_buffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_buffer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bufferSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::NewProp_buffer_Inner = { "buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnReadData_Parms, buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::NewProp_bufferSize = { "bufferSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnReadData_Parms, bufferSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::NewProp_buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::NewProp_buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::NewProp_bufferSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnReadData__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnReadData_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms
		{
			int32 volume;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms, volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnAudioVolumeIndicationSource__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms
		{
			FPlayerUpdatedInfo info;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_info;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms, info), Z_Construct_UScriptStruct_FPlayerUpdatedInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerInfoUpdated__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms
		{
			FSrcInfo from;
			FSrcInfo to;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_from_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_from;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_to_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_to;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from = { "from", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms, from), Z_Construct_UScriptStruct_FSrcInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms, to), Z_Construct_UScriptStruct_FSrcInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerSrcInfoChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnAgoraCDNTokenWillExpire__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPreloadEvent_Parms
		{
			FString src;
			EPLAYER_PRELOAD_EVENT event;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_src;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_event_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPreloadEvent_Parms, src), METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event = { "event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPreloadEvent_Parms, event), Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPreloadEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnPreloadEvent_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms
		{
			int64 playCachedBuffer;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_playCachedBuffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::NewProp_playCachedBuffer = { "playCachedBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms, playCachedBuffer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::NewProp_playCachedBuffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayBufferUpdated__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnMetaDataSource_Parms
		{
			int64 data;
			int32 length;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_data;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMetaDataSource_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMetaDataSource_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_length,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnMetaDataSource__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnMetaDataSource_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerEvent_Parms
		{
			TEnumAsByte<EMEDIA_PLAYER_EVENT> eventCode;
			int64 elapsedTime;
			FString message;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eventCode;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_elapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_eventCode = { "eventCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerEvent_Parms, eventCode), Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_elapsedTime = { "elapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerEvent_Parms, elapsedTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerEvent_Parms, message), METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_eventCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_elapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnPlayerEvent_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPositionChanged_Parms
		{
			int64 position_ms;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_position_ms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::NewProp_position_ms = { "position_ms", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPositionChanged_Parms, position_ms), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::NewProp_position_ms,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPositionChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnPositionChanged_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms
		{
			EMEDIA_PLAYER_STATE state;
			FENUMWRAP_MEDIA_PLAYER_ERROR ec;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms, state), Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_STATE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_ec = { "ec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms, ec), Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_ec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerSourceStateChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EPLAYER_PRELOAD_EVENT_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EPLAYER_PRELOAD_EVENT"));
		}
		return Singleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EPLAYER_PRELOAD_EVENT>()
	{
		return EPLAYER_PRELOAD_EVENT_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPLAYER_PRELOAD_EVENT(EPLAYER_PRELOAD_EVENT_StaticEnum, TEXT("/Script/AgoraPlugin"), TEXT("EPLAYER_PRELOAD_EVENT"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Hash() { return 1932992308U; }
	UEnum* Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPLAYER_PRELOAD_EVENT"), 0, Get_Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_BEGIN", (int64)EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_BEGIN },
				{ "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_COMPLETE", (int64)EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_COMPLETE },
				{ "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_ERROR", (int64)EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_ERROR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
				{ "PLAYER_PRELOAD_EVENT_BEGIN.Name", "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_BEGIN" },
				{ "PLAYER_PRELOAD_EVENT_COMPLETE.Name", "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_COMPLETE" },
				{ "PLAYER_PRELOAD_EVENT_ERROR.Name", "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_ERROR" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
				nullptr,
				"EPLAYER_PRELOAD_EVENT",
				"EPLAYER_PRELOAD_EVENT",
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
	static UEnum* EMEDIA_PLAYER_EVENT_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EMEDIA_PLAYER_EVENT"));
		}
		return Singleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EMEDIA_PLAYER_EVENT>()
	{
		return EMEDIA_PLAYER_EVENT_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMEDIA_PLAYER_EVENT(EMEDIA_PLAYER_EVENT_StaticEnum, TEXT("/Script/AgoraPlugin"), TEXT("EMEDIA_PLAYER_EVENT"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Hash() { return 3635705692U; }
	UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMEDIA_PLAYER_EVENT"), 0, Get_Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PLAYER_EVENT_SEEK_BEGIN", (int64)PLAYER_EVENT_SEEK_BEGIN },
				{ "PLAYER_EVENT_SEEK_COMPLETE", (int64)PLAYER_EVENT_SEEK_COMPLETE },
				{ "PLAYER_EVENT_SEEK_ERROR", (int64)PLAYER_EVENT_SEEK_ERROR },
				{ "PLAYER_EVENT_AUDIO_TRACK_CHANGED", (int64)PLAYER_EVENT_AUDIO_TRACK_CHANGED },
				{ "PLAYER_EVENT_BUFFER_LOW", (int64)PLAYER_EVENT_BUFFER_LOW },
				{ "PLAYER_EVENT_BUFFER_RECOVER", (int64)PLAYER_EVENT_BUFFER_RECOVER },
				{ "PLAYER_EVENT_FREEZE_START", (int64)PLAYER_EVENT_FREEZE_START },
				{ "PLAYER_EVENT_FREEZE_STOP", (int64)PLAYER_EVENT_FREEZE_STOP },
				{ "PLAYER_EVENT_SWITCH_BEGIN", (int64)PLAYER_EVENT_SWITCH_BEGIN },
				{ "PLAYER_EVENT_SWITCH_COMPLETE", (int64)PLAYER_EVENT_SWITCH_COMPLETE },
				{ "PLAYER_EVENT_SWITCH_ERROR", (int64)PLAYER_EVENT_SWITCH_ERROR },
				{ "PLAYER_EVENT_FIRST_DISPLAYED", (int64)PLAYER_EVENT_FIRST_DISPLAYED },
				{ "PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT", (int64)PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT },
				{ "PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE", (int64)PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE },
				{ "PLAYER_EVENT_TRY_OPEN_START", (int64)PLAYER_EVENT_TRY_OPEN_START },
				{ "PLAYER_EVENT_TRY_OPEN_SUCCEED", (int64)PLAYER_EVENT_TRY_OPEN_SUCCEED },
				{ "PLAYER_EVENT_TRY_OPEN_FAILED", (int64)PLAYER_EVENT_TRY_OPEN_FAILED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
				{ "PLAYER_EVENT_AUDIO_TRACK_CHANGED.Name", "PLAYER_EVENT_AUDIO_TRACK_CHANGED" },
				{ "PLAYER_EVENT_BUFFER_LOW.Name", "PLAYER_EVENT_BUFFER_LOW" },
				{ "PLAYER_EVENT_BUFFER_RECOVER.Name", "PLAYER_EVENT_BUFFER_RECOVER" },
				{ "PLAYER_EVENT_FIRST_DISPLAYED.Name", "PLAYER_EVENT_FIRST_DISPLAYED" },
				{ "PLAYER_EVENT_FREEZE_START.Name", "PLAYER_EVENT_FREEZE_START" },
				{ "PLAYER_EVENT_FREEZE_STOP.Name", "PLAYER_EVENT_FREEZE_STOP" },
				{ "PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT.Name", "PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT" },
				{ "PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE.Name", "PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE" },
				{ "PLAYER_EVENT_SEEK_BEGIN.Name", "PLAYER_EVENT_SEEK_BEGIN" },
				{ "PLAYER_EVENT_SEEK_COMPLETE.Name", "PLAYER_EVENT_SEEK_COMPLETE" },
				{ "PLAYER_EVENT_SEEK_ERROR.Name", "PLAYER_EVENT_SEEK_ERROR" },
				{ "PLAYER_EVENT_SWITCH_BEGIN.Name", "PLAYER_EVENT_SWITCH_BEGIN" },
				{ "PLAYER_EVENT_SWITCH_COMPLETE.Name", "PLAYER_EVENT_SWITCH_COMPLETE" },
				{ "PLAYER_EVENT_SWITCH_ERROR.Name", "PLAYER_EVENT_SWITCH_ERROR" },
				{ "PLAYER_EVENT_TRY_OPEN_FAILED.Name", "PLAYER_EVENT_TRY_OPEN_FAILED" },
				{ "PLAYER_EVENT_TRY_OPEN_START.Name", "PLAYER_EVENT_TRY_OPEN_START" },
				{ "PLAYER_EVENT_TRY_OPEN_SUCCEED.Name", "PLAYER_EVENT_TRY_OPEN_SUCCEED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
				nullptr,
				"EMEDIA_PLAYER_EVENT",
				"EMEDIA_PLAYER_EVENT",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EENUMCUSTOM_MEDIA_PLAYER_ERROR_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EENUMCUSTOM_MEDIA_PLAYER_ERROR"));
		}
		return Singleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EENUMCUSTOM_MEDIA_PLAYER_ERROR>()
	{
		return EENUMCUSTOM_MEDIA_PLAYER_ERROR_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EENUMCUSTOM_MEDIA_PLAYER_ERROR(EENUMCUSTOM_MEDIA_PLAYER_ERROR_StaticEnum, TEXT("/Script/AgoraPlugin"), TEXT("EENUMCUSTOM_MEDIA_PLAYER_ERROR"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR_Hash() { return 593237910U; }
	UEnum* Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EENUMCUSTOM_MEDIA_PLAYER_ERROR"), 0, Get_Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NONE", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NONE },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_ARGUMENTS", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_ARGUMENTS },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERNAL", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERNAL },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NO_RESOURCE", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NO_RESOURCE },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_MEDIA_SOURCE", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_MEDIA_SOURCE },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN_STREAM_TYPE", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN_STREAM_TYPE },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_OBJ_NOT_INITIALIZED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_OBJ_NOT_INITIALIZED },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_CODEC_NOT_SUPPORTED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_CODEC_NOT_SUPPORTED },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_VIDEO_RENDER_FAILED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_VIDEO_RENDER_FAILED },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_STATE", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_STATE },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_URL_NOT_FOUND", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_URL_NOT_FOUND },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_CONNECTION_STATE", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_CONNECTION_STATE },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_SRC_BUFFER_UNDERFLOW", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_SRC_BUFFER_UNDERFLOW },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERRUPTED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERRUPTED },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NOT_SUPPORTED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NOT_SUPPORTED },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_TOKEN_EXPIRED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_TOKEN_EXPIRED },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_IP_EXPIRED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_IP_EXPIRED },
				{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
				{ "PLAYER_ERROR_CODEC_NOT_SUPPORTED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_CODEC_NOT_SUPPORTED" },
				{ "PLAYER_ERROR_INTERNAL.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERNAL" },
				{ "PLAYER_ERROR_INTERRUPTED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERRUPTED" },
				{ "PLAYER_ERROR_INVALID_ARGUMENTS.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_ARGUMENTS" },
				{ "PLAYER_ERROR_INVALID_CONNECTION_STATE.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_CONNECTION_STATE" },
				{ "PLAYER_ERROR_INVALID_MEDIA_SOURCE.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_MEDIA_SOURCE" },
				{ "PLAYER_ERROR_INVALID_STATE.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_STATE" },
				{ "PLAYER_ERROR_IP_EXPIRED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_IP_EXPIRED" },
				{ "PLAYER_ERROR_NO_RESOURCE.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NO_RESOURCE" },
				{ "PLAYER_ERROR_NONE.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NONE" },
				{ "PLAYER_ERROR_NOT_SUPPORTED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NOT_SUPPORTED" },
				{ "PLAYER_ERROR_OBJ_NOT_INITIALIZED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_OBJ_NOT_INITIALIZED" },
				{ "PLAYER_ERROR_SRC_BUFFER_UNDERFLOW.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_SRC_BUFFER_UNDERFLOW" },
				{ "PLAYER_ERROR_TOKEN_EXPIRED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_TOKEN_EXPIRED" },
				{ "PLAYER_ERROR_UNKNOWN.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN" },
				{ "PLAYER_ERROR_UNKNOWN_STREAM_TYPE.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN_STREAM_TYPE" },
				{ "PLAYER_ERROR_URL_NOT_FOUND.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_URL_NOT_FOUND" },
				{ "PLAYER_ERROR_VIDEO_RENDER_FAILED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_VIDEO_RENDER_FAILED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
				nullptr,
				"EENUMCUSTOM_MEDIA_PLAYER_ERROR",
				"EENUMCUSTOM_MEDIA_PLAYER_ERROR",
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
class UScriptStruct* FPlayerUpdatedInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGORAPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerUpdatedInfo, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("PlayerUpdatedInfo"), sizeof(FPlayerUpdatedInfo), Get_Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Hash());
	}
	return Singleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FPlayerUpdatedInfo>()
{
	return FPlayerUpdatedInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerUpdatedInfo(FPlayerUpdatedInfo::StaticStruct, TEXT("/Script/AgoraPlugin"), TEXT("PlayerUpdatedInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AgoraPlugin_StaticRegisterNativesFPlayerUpdatedInfo
{
	FScriptStruct_AgoraPlugin_StaticRegisterNativesFPlayerUpdatedInfo()
	{
		UScriptStruct::DeferCppStructOps<FPlayerUpdatedInfo>(FName(TEXT("PlayerUpdatedInfo")));
	}
} ScriptStruct_AgoraPlugin_StaticRegisterNativesFPlayerUpdatedInfo;
	struct Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_SetValue_MetaData[];
#endif
		static void NewProp_playerId_SetValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playerId_SetValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceId_SetValue_MetaData[];
#endif
		static void NewProp_deviceId_SetValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_deviceId_SetValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cacheStatistics_SetValue_MetaData[];
#endif
		static void NewProp_cacheStatistics_SetValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_cacheStatistics_SetValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cacheStatistics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cacheStatistics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerUpdatedInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "Comment", "// If the box is unchecked, the value of the corresponding variable (named without _SetValue)  will be ignored.\n" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
		{ "ToolTip", "If the box is unchecked, the value of the corresponding variable (named without _SetValue)  will be ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue_SetBit(void* Obj)
	{
		((FPlayerUpdatedInfo*)Obj)->playerId_SetValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue = { "playerId_SetValue", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerUpdatedInfo), &Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerUpdatedInfo, playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "Comment", "// If the box is unchecked, the value of the corresponding variable (named without _SetValue)  will be ignored.\n" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
		{ "ToolTip", "If the box is unchecked, the value of the corresponding variable (named without _SetValue)  will be ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue_SetBit(void* Obj)
	{
		((FPlayerUpdatedInfo*)Obj)->deviceId_SetValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue = { "deviceId_SetValue", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerUpdatedInfo), &Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerUpdatedInfo, deviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "Comment", "// If the box is unchecked, the value of the corresponding variable (named without _SetValue)  will be ignored.\n" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
		{ "ToolTip", "If the box is unchecked, the value of the corresponding variable (named without _SetValue)  will be ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue_SetBit(void* Obj)
	{
		((FPlayerUpdatedInfo*)Obj)->cacheStatistics_SetValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue = { "cacheStatistics_SetValue", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerUpdatedInfo), &Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics = { "cacheStatistics", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerUpdatedInfo, cacheStatistics), Z_Construct_UScriptStruct_FCacheStatistics, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"PlayerUpdatedInfo",
		sizeof(FPlayerUpdatedInfo),
		alignof(FPlayerUpdatedInfo),
		Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerUpdatedInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerUpdatedInfo"), sizeof(FPlayerUpdatedInfo), Get_Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Hash() { return 2418187828U; }
class UScriptStruct* FCacheStatistics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGORAPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FCacheStatistics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCacheStatistics, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("CacheStatistics"), sizeof(FCacheStatistics), Get_Z_Construct_UScriptStruct_FCacheStatistics_Hash());
	}
	return Singleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FCacheStatistics>()
{
	return FCacheStatistics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCacheStatistics(FCacheStatistics::StaticStruct, TEXT("/Script/AgoraPlugin"), TEXT("CacheStatistics"), false, nullptr, nullptr);
static struct FScriptStruct_AgoraPlugin_StaticRegisterNativesFCacheStatistics
{
	FScriptStruct_AgoraPlugin_StaticRegisterNativesFCacheStatistics()
	{
		UScriptStruct::DeferCppStructOps<FCacheStatistics>(FName(TEXT("CacheStatistics")));
	}
} ScriptStruct_AgoraPlugin_StaticRegisterNativesFCacheStatistics;
	struct Z_Construct_UScriptStruct_FCacheStatistics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_fileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cacheSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_cacheSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_downloadSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_downloadSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheStatistics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCacheStatistics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_fileSize_MetaData[] = {
		{ "Category", "Agora|CacheStatistics" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_fileSize = { "fileSize", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCacheStatistics, fileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_fileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_fileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_cacheSize_MetaData[] = {
		{ "Category", "Agora|CacheStatistics" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_cacheSize = { "cacheSize", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCacheStatistics, cacheSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_cacheSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_cacheSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_downloadSize_MetaData[] = {
		{ "Category", "Agora|CacheStatistics" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_downloadSize = { "downloadSize", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCacheStatistics, downloadSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_downloadSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_downloadSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCacheStatistics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_fileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_cacheSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_downloadSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCacheStatistics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"CacheStatistics",
		sizeof(FCacheStatistics),
		alignof(FCacheStatistics),
		Z_Construct_UScriptStruct_FCacheStatistics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCacheStatistics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCacheStatistics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCacheStatistics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CacheStatistics"), sizeof(FCacheStatistics), Get_Z_Construct_UScriptStruct_FCacheStatistics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCacheStatistics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCacheStatistics_Hash() { return 2421493146U; }
class UScriptStruct* FSrcInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGORAPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSrcInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSrcInfo, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("SrcInfo"), sizeof(FSrcInfo), Get_Z_Construct_UScriptStruct_FSrcInfo_Hash());
	}
	return Singleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FSrcInfo>()
{
	return FSrcInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSrcInfo(FSrcInfo::StaticStruct, TEXT("/Script/AgoraPlugin"), TEXT("SrcInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AgoraPlugin_StaticRegisterNativesFSrcInfo
{
	FScriptStruct_AgoraPlugin_StaticRegisterNativesFSrcInfo()
	{
		UScriptStruct::DeferCppStructOps<FSrcInfo>(FName(TEXT("SrcInfo")));
	}
} ScriptStruct_AgoraPlugin_StaticRegisterNativesFSrcInfo;
	struct Z_Construct_UScriptStruct_FSrcInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bitrateInKbps_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bitrateInKbps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSrcInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSrcInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSrcInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_bitrateInKbps_MetaData[] = {
		{ "Category", "Agora|SrcInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_bitrateInKbps = { "bitrateInKbps", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSrcInfo, bitrateInKbps), METADATA_PARAMS(Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_bitrateInKbps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_bitrateInKbps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Agora|SrcInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSrcInfo, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSrcInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_bitrateInKbps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSrcInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"SrcInfo",
		sizeof(FSrcInfo),
		alignof(FSrcInfo),
		Z_Construct_UScriptStruct_FSrcInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSrcInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSrcInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSrcInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SrcInfo"), sizeof(FSrcInfo), Get_Z_Construct_UScriptStruct_FSrcInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSrcInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSrcInfo_Hash() { return 2231653940U; }
class UScriptStruct* FENUMWRAP_MEDIA_PLAYER_ERROR::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGORAPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("ENUMWRAP_MEDIA_PLAYER_ERROR"), sizeof(FENUMWRAP_MEDIA_PLAYER_ERROR), Get_Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Hash());
	}
	return Singleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FENUMWRAP_MEDIA_PLAYER_ERROR>()
{
	return FENUMWRAP_MEDIA_PLAYER_ERROR::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR(FENUMWRAP_MEDIA_PLAYER_ERROR::StaticStruct, TEXT("/Script/AgoraPlugin"), TEXT("ENUMWRAP_MEDIA_PLAYER_ERROR"), false, nullptr, nullptr);
static struct FScriptStruct_AgoraPlugin_StaticRegisterNativesFENUMWRAP_MEDIA_PLAYER_ERROR
{
	FScriptStruct_AgoraPlugin_StaticRegisterNativesFENUMWRAP_MEDIA_PLAYER_ERROR()
	{
		UScriptStruct::DeferCppStructOps<FENUMWRAP_MEDIA_PLAYER_ERROR>(FName(TEXT("ENUMWRAP_MEDIA_PLAYER_ERROR")));
	}
} ScriptStruct_AgoraPlugin_StaticRegisterNativesFENUMWRAP_MEDIA_PLAYER_ERROR;
	struct Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueWrapper_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueWrapper_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValueWrapper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FENUMWRAP_MEDIA_PLAYER_ERROR>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper_MetaData[] = {
		{ "Category", "Agora|EENUMCUSTOM_MEDIA_PLAYER_ERROR" },
		{ "Comment", "// require to call [GetRawValue] method to get the raw value\n" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
		{ "ToolTip", "require to call [GetRawValue] method to get the raw value" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper = { "ValueWrapper", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FENUMWRAP_MEDIA_PLAYER_ERROR, ValueWrapper), Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR, METADATA_PARAMS(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"ENUMWRAP_MEDIA_PLAYER_ERROR",
		sizeof(FENUMWRAP_MEDIA_PLAYER_ERROR),
		alignof(FENUMWRAP_MEDIA_PLAYER_ERROR),
		Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ENUMWRAP_MEDIA_PLAYER_ERROR"), sizeof(FENUMWRAP_MEDIA_PLAYER_ERROR), Get_Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Hash() { return 4179643918U; }
	void UIMediaPlayerSourceObserver::StaticRegisterNativesUIMediaPlayerSourceObserver()
	{
	}
	UClass* Z_Construct_UClass_UIMediaPlayerSourceObserver_NoRegister()
	{
		return UIMediaPlayerSourceObserver::StaticClass();
	}
	struct Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerSourceStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerSourceStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPositionChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPositionChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayBufferUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayBufferUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPreloadEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreloadEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAgoraCDNTokenWillExpire_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAgoraCDNTokenWillExpire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerSrcInfoChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerSrcInfoChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerInfoUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerInfoUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioVolumeIndication_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioVolumeIndication;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged = { "OnPlayerSourceStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPlayerSourceStateChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged = { "OnPositionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPositionChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent = { "OnPlayerEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPlayerEvent), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData = { "OnMetaData", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnMetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated = { "OnPlayBufferUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPlayBufferUpdated), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent = { "OnPreloadEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPreloadEvent), Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnCompleted), Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire = { "OnAgoraCDNTokenWillExpire", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnAgoraCDNTokenWillExpire), Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged = { "OnPlayerSrcInfoChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPlayerSrcInfoChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated = { "OnPlayerInfoUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPlayerInfoUpdated), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication = { "OnAudioVolumeIndication", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnAudioVolumeIndication), Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMediaPlayerSourceObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::ClassParams = {
		&UIMediaPlayerSourceObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIMediaPlayerSourceObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIMediaPlayerSourceObserver, 707531888);
	template<> AGORAPLUGIN_API UClass* StaticClass<UIMediaPlayerSourceObserver>()
	{
		return UIMediaPlayerSourceObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIMediaPlayerSourceObserver(Z_Construct_UClass_UIMediaPlayerSourceObserver, &UIMediaPlayerSourceObserver::StaticClass, TEXT("/Script/AgoraPlugin"), TEXT("UIMediaPlayerSourceObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediaPlayerSourceObserver);
	void UIMediaPlayerCustomDataProvider::StaticRegisterNativesUIMediaPlayerCustomDataProvider()
	{
	}
	UClass* Z_Construct_UClass_UIMediaPlayerCustomDataProvider_NoRegister()
	{
		return UIMediaPlayerCustomDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSeek_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeek;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnReadData_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnReadData = { "OnReadData", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaPlayerCustomDataProvider, OnReadData), Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnReadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnReadData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnSeek_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnSeek = { "OnSeek", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaPlayerCustomDataProvider, OnSeek), Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnSeek_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnSeek_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnReadData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnSeek,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMediaPlayerCustomDataProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::ClassParams = {
		&UIMediaPlayerCustomDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIMediaPlayerCustomDataProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIMediaPlayerCustomDataProvider, 1416946991);
	template<> AGORAPLUGIN_API UClass* StaticClass<UIMediaPlayerCustomDataProvider>()
	{
		return UIMediaPlayerCustomDataProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIMediaPlayerCustomDataProvider(Z_Construct_UClass_UIMediaPlayerCustomDataProvider, &UIMediaPlayerCustomDataProvider::StaticClass, TEXT("/Script/AgoraPlugin"), TEXT("UIMediaPlayerCustomDataProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediaPlayerCustomDataProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
