// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioEncodedFrameObserver() {}
// Cross Module References
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEncodedAudioFrameInfo();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPacket();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIPacketObserver_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIPacketObserver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioEncodedFrameObserver_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioEncodedFrameObserver();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms
		{
			TArray<int64> frameBuffer;
			int32 length;
			FEncodedAudioFrameInfo audioEncodedFrameInfo;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_frameBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frameBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_frameBuffer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audioEncodedFrameInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_audioEncodedFrameInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_Inner = { "frameBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer = { "frameBuffer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms, frameBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms, length), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo = { "audioEncodedFrameInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms, audioEncodedFrameInfo), Z_Construct_UScriptStruct_FEncodedAudioFrameInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnMixedAudioEncodedFrame__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms
		{
			TArray<int64> frameBuffer;
			int32 length;
			FEncodedAudioFrameInfo audioEncodedFrameInfo;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_frameBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frameBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_frameBuffer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audioEncodedFrameInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_audioEncodedFrameInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_Inner = { "frameBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer = { "frameBuffer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms, frameBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms, length), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo = { "audioEncodedFrameInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms, audioEncodedFrameInfo), Z_Construct_UScriptStruct_FEncodedAudioFrameInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlaybackAudioEncodedFrame__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms
		{
			TArray<int64> frameBuffer;
			int32 length;
			FEncodedAudioFrameInfo audioEncodedFrameInfo;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_frameBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frameBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_frameBuffer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audioEncodedFrameInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_audioEncodedFrameInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_Inner = { "frameBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer = { "frameBuffer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms, frameBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms, length), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo = { "audioEncodedFrameInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms, audioEncodedFrameInfo), Z_Construct_UScriptStruct_FEncodedAudioFrameInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnRecordAudioEncodedFrame__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnReceiveVideoPacket_Parms
		{
			FPacket packet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packet_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_packet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::NewProp_packet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::NewProp_packet = { "packet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnReceiveVideoPacket_Parms, packet), Z_Construct_UScriptStruct_FPacket, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::NewProp_packet_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::NewProp_packet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::NewProp_packet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnReceiveVideoPacket__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnReceiveVideoPacket_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnReceiveAudioPacket_Parms
		{
			FPacket packet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packet_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_packet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::NewProp_packet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::NewProp_packet = { "packet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnReceiveAudioPacket_Parms, packet), Z_Construct_UScriptStruct_FPacket, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::NewProp_packet_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::NewProp_packet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::NewProp_packet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnReceiveAudioPacket__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnReceiveAudioPacket_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnSendVideoPacket_Parms
		{
			FPacket packet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packet_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_packet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::NewProp_packet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::NewProp_packet = { "packet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnSendVideoPacket_Parms, packet), Z_Construct_UScriptStruct_FPacket, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::NewProp_packet_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::NewProp_packet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::NewProp_packet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnSendVideoPacket__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnSendVideoPacket_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnSendAudioPacket_Parms
		{
			FPacket packet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packet_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_packet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::NewProp_packet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::NewProp_packet = { "packet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnSendAudioPacket_Parms, packet), Z_Construct_UScriptStruct_FPacket, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::NewProp_packet_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::NewProp_packet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::NewProp_packet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnSendAudioPacket__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnSendAudioPacket_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAUDIO_CODEC_TYPE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EAUDIO_CODEC_TYPE"));
		}
		return Singleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EAUDIO_CODEC_TYPE>()
	{
		return EAUDIO_CODEC_TYPE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAUDIO_CODEC_TYPE(EAUDIO_CODEC_TYPE_StaticEnum, TEXT("/Script/AgoraPlugin"), TEXT("EAUDIO_CODEC_TYPE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE_Hash() { return 3548421826U; }
	UEnum* Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAUDIO_CODEC_TYPE"), 0, Get_Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_NULL", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_NULL },
				{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_OPUS", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_OPUS },
				{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMA", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMA },
				{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMU", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMU },
				{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_G722", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_G722 },
				{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_AACLC", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_AACLC },
				{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC },
				{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_JC1", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_JC1 },
				{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC2", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC2 },
				{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_LPCNET", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_LPCNET },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AUDIO_CODEC_AACLC.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_AACLC" },
				{ "AUDIO_CODEC_G722.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_G722" },
				{ "AUDIO_CODEC_HEAAC.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC" },
				{ "AUDIO_CODEC_HEAAC2.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC2" },
				{ "AUDIO_CODEC_JC1.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_JC1" },
				{ "AUDIO_CODEC_LPCNET.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_LPCNET" },
				{ "AUDIO_CODEC_NULL.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_NULL" },
				{ "AUDIO_CODEC_OPUS.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_OPUS" },
				{ "AUDIO_CODEC_PCMA.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMA" },
				{ "AUDIO_CODEC_PCMU.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMU" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
				nullptr,
				"EAUDIO_CODEC_TYPE",
				"EAUDIO_CODEC_TYPE",
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
class UScriptStruct* FEncodedAudioFrameInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGORAPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EncodedAudioFrameInfo"), sizeof(FEncodedAudioFrameInfo), Get_Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Hash());
	}
	return Singleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FEncodedAudioFrameInfo>()
{
	return FEncodedAudioFrameInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEncodedAudioFrameInfo(FEncodedAudioFrameInfo::StaticStruct, TEXT("/Script/AgoraPlugin"), TEXT("EncodedAudioFrameInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AgoraPlugin_StaticRegisterNativesFEncodedAudioFrameInfo
{
	FScriptStruct_AgoraPlugin_StaticRegisterNativesFEncodedAudioFrameInfo()
	{
		UScriptStruct::DeferCppStructOps<FEncodedAudioFrameInfo>(FName(TEXT("EncodedAudioFrameInfo")));
	}
} ScriptStruct_AgoraPlugin_StaticRegisterNativesFEncodedAudioFrameInfo;
	struct Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_codec_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_codec_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_codec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleRateHz_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_sampleRateHz;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_samplesPerChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_samplesPerChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numberOfChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numberOfChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_advancedSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_advancedSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_captureTimeMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_captureTimeMs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncodedAudioFrameInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec = { "codec", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodedAudioFrameInfo, codec), Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_sampleRateHz_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_sampleRateHz = { "sampleRateHz", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodedAudioFrameInfo, sampleRateHz), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_sampleRateHz_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_sampleRateHz_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_samplesPerChannel_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_samplesPerChannel = { "samplesPerChannel", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodedAudioFrameInfo, samplesPerChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_samplesPerChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_samplesPerChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_numberOfChannels_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_numberOfChannels = { "numberOfChannels", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodedAudioFrameInfo, numberOfChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_numberOfChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_numberOfChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_advancedSettings_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_advancedSettings = { "advancedSettings", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodedAudioFrameInfo, advancedSettings), Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_advancedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_advancedSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_captureTimeMs_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_captureTimeMs = { "captureTimeMs", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodedAudioFrameInfo, captureTimeMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_captureTimeMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_captureTimeMs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_sampleRateHz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_samplesPerChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_numberOfChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_advancedSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_captureTimeMs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"EncodedAudioFrameInfo",
		sizeof(FEncodedAudioFrameInfo),
		alignof(FEncodedAudioFrameInfo),
		Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEncodedAudioFrameInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EncodedAudioFrameInfo"), sizeof(FEncodedAudioFrameInfo), Get_Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Hash() { return 2940636597U; }
class UScriptStruct* FEncodedAudioFrameAdvancedSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGORAPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EncodedAudioFrameAdvancedSettings"), sizeof(FEncodedAudioFrameAdvancedSettings), Get_Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Hash());
	}
	return Singleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FEncodedAudioFrameAdvancedSettings>()
{
	return FEncodedAudioFrameAdvancedSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEncodedAudioFrameAdvancedSettings(FEncodedAudioFrameAdvancedSettings::StaticStruct, TEXT("/Script/AgoraPlugin"), TEXT("EncodedAudioFrameAdvancedSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AgoraPlugin_StaticRegisterNativesFEncodedAudioFrameAdvancedSettings
{
	FScriptStruct_AgoraPlugin_StaticRegisterNativesFEncodedAudioFrameAdvancedSettings()
	{
		UScriptStruct::DeferCppStructOps<FEncodedAudioFrameAdvancedSettings>(FName(TEXT("EncodedAudioFrameAdvancedSettings")));
	}
} ScriptStruct_AgoraPlugin_StaticRegisterNativesFEncodedAudioFrameAdvancedSettings;
	struct Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speech_MetaData[];
#endif
		static void NewProp_speech_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_speech;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sendEvenIfEmpty_MetaData[];
#endif
		static void NewProp_sendEvenIfEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_sendEvenIfEmpty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncodedAudioFrameAdvancedSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameAdvancedSettings" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech_SetBit(void* Obj)
	{
		((FEncodedAudioFrameAdvancedSettings*)Obj)->speech = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech = { "speech", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEncodedAudioFrameAdvancedSettings), &Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameAdvancedSettings" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty_SetBit(void* Obj)
	{
		((FEncodedAudioFrameAdvancedSettings*)Obj)->sendEvenIfEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty = { "sendEvenIfEmpty", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEncodedAudioFrameAdvancedSettings), &Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"EncodedAudioFrameAdvancedSettings",
		sizeof(FEncodedAudioFrameAdvancedSettings),
		alignof(FEncodedAudioFrameAdvancedSettings),
		Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EncodedAudioFrameAdvancedSettings"), sizeof(FEncodedAudioFrameAdvancedSettings), Get_Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Hash() { return 3129405515U; }
class UScriptStruct* FPacket::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGORAPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FPacket_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPacket, Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("Packet"), sizeof(FPacket), Get_Z_Construct_UScriptStruct_FPacket_Hash());
	}
	return Singleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FPacket>()
{
	return FPacket::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPacket(FPacket::StaticStruct, TEXT("/Script/AgoraPlugin"), TEXT("Packet"), false, nullptr, nullptr);
static struct FScriptStruct_AgoraPlugin_StaticRegisterNativesFPacket
{
	FScriptStruct_AgoraPlugin_StaticRegisterNativesFPacket()
	{
		UScriptStruct::DeferCppStructOps<FPacket>(FName(TEXT("Packet")));
	}
} ScriptStruct_AgoraPlugin_StaticRegisterNativesFPacket;
	struct Z_Construct_UScriptStruct_FPacket_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_buffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_buffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacket_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPacket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPacket>();
	}
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer_Inner = { "buffer", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer_MetaData[] = {
		{ "Category", "Agora|Packet" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPacket, buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacket_Statics::NewProp_size_MetaData[] = {
		{ "Category", "Agora|Packet" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPacket_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPacket, size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacket_Statics::NewProp_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacket_Statics::NewProp_size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacket_Statics::NewProp_size,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPacket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"Packet",
		sizeof(FPacket),
		alignof(FPacket),
		Z_Construct_UScriptStruct_FPacket_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacket_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPacket_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacket_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPacket()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPacket_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AgoraPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Packet"), sizeof(FPacket), Get_Z_Construct_UScriptStruct_FPacket_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPacket_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPacket_Hash() { return 1533075277U; }
	void UIPacketObserver::StaticRegisterNativesUIPacketObserver()
	{
	}
	UClass* Z_Construct_UClass_UIPacketObserver_NoRegister()
	{
		return UIPacketObserver::StaticClass();
	}
	struct Z_Construct_UClass_UIPacketObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSendAudioPacket_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSendAudioPacket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSendVideoPacket_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSendVideoPacket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReceiveAudioPacket_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiveAudioPacket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReceiveVideoPacket_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiveVideoPacket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIPacketObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIPacketObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendAudioPacket_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendAudioPacket = { "OnSendAudioPacket", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIPacketObserver, OnSendAudioPacket), Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendAudioPacket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendAudioPacket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendVideoPacket_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendVideoPacket = { "OnSendVideoPacket", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIPacketObserver, OnSendVideoPacket), Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendVideoPacket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendVideoPacket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveAudioPacket_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveAudioPacket = { "OnReceiveAudioPacket", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIPacketObserver, OnReceiveAudioPacket), Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveAudioPacket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveAudioPacket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveVideoPacket_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveVideoPacket = { "OnReceiveVideoPacket", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIPacketObserver, OnReceiveVideoPacket), Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveVideoPacket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveVideoPacket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIPacketObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendAudioPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendVideoPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveAudioPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveVideoPacket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIPacketObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIPacketObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIPacketObserver_Statics::ClassParams = {
		&UIPacketObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIPacketObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIPacketObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIPacketObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIPacketObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIPacketObserver, 1565975683);
	template<> AGORAPLUGIN_API UClass* StaticClass<UIPacketObserver>()
	{
		return UIPacketObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIPacketObserver(Z_Construct_UClass_UIPacketObserver, &UIPacketObserver::StaticClass, TEXT("/Script/AgoraPlugin"), TEXT("UIPacketObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIPacketObserver);
	void UIAudioEncodedFrameObserver::StaticRegisterNativesUIAudioEncodedFrameObserver()
	{
	}
	UClass* Z_Construct_UClass_UIAudioEncodedFrameObserver_NoRegister()
	{
		return UIAudioEncodedFrameObserver::StaticClass();
	}
	struct Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRecordAudioEncoded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordAudioEncoded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackAudioEncoded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackAudioEncoded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMixedAudioEncoded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMixedAudioEncoded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnRecordAudioEncoded_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnRecordAudioEncoded = { "OnRecordAudioEncoded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIAudioEncodedFrameObserver, OnRecordAudioEncoded), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnRecordAudioEncoded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnRecordAudioEncoded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnPlaybackAudioEncoded_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnPlaybackAudioEncoded = { "OnPlaybackAudioEncoded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIAudioEncodedFrameObserver, OnPlaybackAudioEncoded), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnPlaybackAudioEncoded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnPlaybackAudioEncoded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnMixedAudioEncoded_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnMixedAudioEncoded = { "OnMixedAudioEncoded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIAudioEncodedFrameObserver, OnMixedAudioEncoded), Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnMixedAudioEncoded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnMixedAudioEncoded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnRecordAudioEncoded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnPlaybackAudioEncoded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnMixedAudioEncoded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAudioEncodedFrameObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::ClassParams = {
		&UIAudioEncodedFrameObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAudioEncodedFrameObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIAudioEncodedFrameObserver, 1328974245);
	template<> AGORAPLUGIN_API UClass* StaticClass<UIAudioEncodedFrameObserver>()
	{
		return UIAudioEncodedFrameObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIAudioEncodedFrameObserver(Z_Construct_UClass_UIAudioEncodedFrameObserver, &UIAudioEncodedFrameObserver::StaticClass, TEXT("/Script/AgoraPlugin"), TEXT("UIAudioEncodedFrameObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAudioEncodedFrameObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
