// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/IMediaRecorderObserver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMediaRecorderObserver() {}
// Cross Module References
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRecorderInfo();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FENUMWRAP_RecorderState();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_ERecorderErrorCode();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaRecorderObserver_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaRecorderObserver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms
		{
			FString channelId;
			int64 uid;
			FRecorderInfo info;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_channelId;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_uid;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms, channelId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms, uid), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms, info), Z_Construct_UScriptStruct_FRecorderInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_uid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_info,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaRecorderObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnRecorderInfoUpdated__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnRecorderStateChanged_Parms
		{
			FString channelId;
			int64 uid;
			FENUMWRAP_RecorderState state;
			ERecorderErrorCode error;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_channelId;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_uid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_error_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderStateChanged_Parms, channelId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderStateChanged_Parms, uid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderStateChanged_Parms, state), Z_Construct_UScriptStruct_FENUMWRAP_RecorderState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderStateChanged_Parms, error), Z_Construct_UEnum_AgoraPlugin_ERecorderErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_channelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_uid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_error_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaRecorderObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnRecorderStateChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_AgoraPlugin_eventOnRecorderStateChanged_Parms), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UIMediaRecorderObserver::StaticRegisterNativesUIMediaRecorderObserver()
	{
	}
	UClass* Z_Construct_UClass_UIMediaRecorderObserver_NoRegister()
	{
		return UIMediaRecorderObserver::StaticClass();
	}
	struct Z_Construct_UClass_UIMediaRecorderObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRecorderStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecorderStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRecorderInfoUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecorderInfoUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediaRecorderObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaRecorderObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IMediaRecorderObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaRecorderObserver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderStateChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaRecorderObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderStateChanged = { "OnRecorderStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaRecorderObserver, OnRecorderStateChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderInfoUpdated_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaRecorderObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderInfoUpdated = { "OnRecorderInfoUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIMediaRecorderObserver, OnRecorderInfoUpdated), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderInfoUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderInfoUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIMediaRecorderObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderInfoUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediaRecorderObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMediaRecorderObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIMediaRecorderObserver_Statics::ClassParams = {
		&UIMediaRecorderObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIMediaRecorderObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorderObserver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIMediaRecorderObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorderObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIMediaRecorderObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIMediaRecorderObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIMediaRecorderObserver, 2461752949);
	template<> AGORAPLUGIN_API UClass* StaticClass<UIMediaRecorderObserver>()
	{
		return UIMediaRecorderObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIMediaRecorderObserver(Z_Construct_UClass_UIMediaRecorderObserver, &UIMediaRecorderObserver::StaticClass, TEXT("/Script/AgoraPlugin"), TEXT("UIMediaRecorderObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediaRecorderObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
