// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDirectCdnStreamingStats;
enum class EDIRECT_CDN_STREAMING_STATE : uint8;
enum class EDIRECT_CDN_STREAMING_ERROR : uint8;
struct FAgoraMetadata;
enum class EVIDEO_SOURCE_TYPE : uint8;
enum class EMEDIA_TRACE_EVENT : uint8;
struct FVideoRenderingTracingInfo;
struct FTranscodingVideoStream;
enum class EVIDEO_TRANSCODER_ERROR : uint8;
enum class ESTREAM_PUBLISH_STATE : uint8;
enum class ESTREAM_SUBSCRIBE_STATE : uint8;
enum class EUPLOAD_ERROR_REASON : uint8;
struct FUserInfo;
enum class EPERMISSION_TYPE : uint8;
enum class EENCRYPTION_ERROR_TYPE : uint8;
struct FENUMWRAP_NETWORK_TYPE;
struct FWlAccStats;
enum class EWLACC_MESSAGE_REASON : uint8;
enum class EWLACC_SUGGEST_ACTION : uint8;
enum class ECONNECTION_STATE_TYPE : uint8;
enum class ECONNECTION_CHANGED_REASON_TYPE : uint8;
enum class ERTMP_STREAMING_EVENT : uint8;
enum class ERTMP_STREAM_PUBLISH_STATE : uint8;
enum class ERTMP_STREAM_PUBLISH_ERROR_TYPE : uint8;
struct FENUMWRAP_MEDIA_DEVICE_TYPE;
enum class ECLIENT_ROLE_CHANGE_FAILED_REASON : uint8;
enum class ECLIENT_ROLE_TYPE : uint8;
struct FClientRoleOptions;
enum class ECONTENT_INSPECT_RESULT : uint8;
enum class EREMOTE_AUDIO_STATE : uint8;
enum class EREMOTE_AUDIO_STATE_REASON : uint8;
enum class ELOCAL_AUDIO_STREAM_STATE : uint8;
enum class ELOCAL_AUDIO_STREAM_ERROR : uint8;
enum class ELICENSE_ERROR_TYPE : uint8;
struct FENUMWRAP_RHYTHM_PLAYER_STATE_TYPE;
struct FENUMWRAP_RHYTHM_PLAYER_ERROR_TYPE;
struct FENUMWRAP_AUDIO_MIXING_STATE_TYPE;
struct FENUMWRAP_AUDIO_MIXING_REASON_TYPE;
struct FRectangle;
struct FRemoteVideoStats;
struct FLocalVideoStats;
struct FRemoteAudioStats;
struct FLocalAudioStats;
enum class EUSER_OFFLINE_REASON_TYPE : uint8;
enum class EREMOTE_VIDEO_STATE : uint8;
enum class EREMOTE_VIDEO_STATE_REASON : uint8;
enum class ELOCAL_VIDEO_STREAM_STATE : uint8;
enum class ELOCAL_VIDEO_STREAM_ERROR : uint8;
struct FDownlinkNetworkInfo;
struct FUplinkNetworkInfo;
struct FRtcStats;
struct FAudioVolumeInfo;
struct FLastmileProbeResult;
enum class EPROXY_TYPE : uint8;
#ifdef AGORAPLUGIN_AgoraIRtcEngineEventHandler_generated_h
#error "AgoraIRtcEngineEventHandler.generated.h already included, missing '#pragma once' in AgoraIRtcEngineEventHandler.h"
#endif
#define AGORAPLUGIN_AgoraIRtcEngineEventHandler_generated_h

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_112_DELEGATE \
struct _Script_AgoraPlugin_eventOnDirectCdnStreamingStats_Parms \
{ \
	FDirectCdnStreamingStats stats; \
}; \
static inline void FOnDirectCdnStreamingStats_DelegateWrapper(const FMulticastScriptDelegate& OnDirectCdnStreamingStats, FDirectCdnStreamingStats const& stats) \
{ \
	_Script_AgoraPlugin_eventOnDirectCdnStreamingStats_Parms Parms; \
	Parms.stats=stats; \
	OnDirectCdnStreamingStats.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_111_DELEGATE \
struct _Script_AgoraPlugin_eventOnDirectCdnStreamingStateChanged_Parms \
{ \
	EDIRECT_CDN_STREAMING_STATE state; \
	EDIRECT_CDN_STREAMING_ERROR error; \
	FString message; \
}; \
static inline void FOnDirectCdnStreamingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDirectCdnStreamingStateChanged, EDIRECT_CDN_STREAMING_STATE state, EDIRECT_CDN_STREAMING_ERROR error, const FString& message) \
{ \
	_Script_AgoraPlugin_eventOnDirectCdnStreamingStateChanged_Parms Parms; \
	Parms.state=state; \
	Parms.error=error; \
	Parms.message=message; \
	OnDirectCdnStreamingStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_110_DELEGATE \
struct _Script_AgoraPlugin_eventOnMetadataReceived_Parms \
{ \
	FAgoraMetadata metadata; \
}; \
static inline void FOnMetadataReceived_DelegateWrapper(const FMulticastScriptDelegate& OnMetadataReceived, FAgoraMetadata const& metadata) \
{ \
	_Script_AgoraPlugin_eventOnMetadataReceived_Parms Parms; \
	Parms.metadata=metadata; \
	OnMetadataReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_109_DELEGATE \
struct _Script_AgoraPlugin_eventOnReadyToSendMetadata_Parms \
{ \
	FAgoraMetadata metadata; \
	EVIDEO_SOURCE_TYPE source_type; \
}; \
static inline void FOnReadyToSendMetadata_DelegateWrapper(const FMulticastScriptDelegate& OnReadyToSendMetadata, FAgoraMetadata const& metadata, EVIDEO_SOURCE_TYPE source_type) \
{ \
	_Script_AgoraPlugin_eventOnReadyToSendMetadata_Parms Parms; \
	Parms.metadata=metadata; \
	Parms.source_type=source_type; \
	OnReadyToSendMetadata.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_108_DELEGATE \
static inline void FGetMaxMetadataSize_DelegateWrapper(const FMulticastScriptDelegate& GetMaxMetadataSize) \
{ \
	GetMaxMetadataSize.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_107_DELEGATE \
struct _Script_AgoraPlugin_eventOnVideoRenderingTracingResult_Parms \
{ \
	int64 uid; \
	EMEDIA_TRACE_EVENT currentEvent; \
	FVideoRenderingTracingInfo tracingInfo; \
}; \
static inline void FOnVideoRenderingTracingResult_DelegateWrapper(const FMulticastScriptDelegate& OnVideoRenderingTracingResult, int64 uid, EMEDIA_TRACE_EVENT currentEvent, FVideoRenderingTracingInfo tracingInfo) \
{ \
	_Script_AgoraPlugin_eventOnVideoRenderingTracingResult_Parms Parms; \
	Parms.uid=uid; \
	Parms.currentEvent=currentEvent; \
	Parms.tracingInfo=tracingInfo; \
	OnVideoRenderingTracingResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_106_DELEGATE \
struct _Script_AgoraPlugin_eventOnLocalVideoTranscoderError_Parms \
{ \
	FTranscodingVideoStream stream; \
	EVIDEO_TRANSCODER_ERROR error; \
}; \
static inline void FOnLocalVideoTranscoderError_DelegateWrapper(const FMulticastScriptDelegate& OnLocalVideoTranscoderError, FTranscodingVideoStream const& stream, EVIDEO_TRANSCODER_ERROR error) \
{ \
	_Script_AgoraPlugin_eventOnLocalVideoTranscoderError_Parms Parms; \
	Parms.stream=stream; \
	Parms.error=error; \
	OnLocalVideoTranscoderError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_105_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserAccountUpdated_Parms \
{ \
	int64 uid; \
	FString userAccount; \
}; \
static inline void FOnUserAccountUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnUserAccountUpdated, int64 uid, const FString& userAccount) \
{ \
	_Script_AgoraPlugin_eventOnUserAccountUpdated_Parms Parms; \
	Parms.uid=uid; \
	Parms.userAccount=userAccount; \
	OnUserAccountUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_104_DELEGATE \
struct _Script_AgoraPlugin_eventOnExtensionError_Parms \
{ \
	FString provider; \
	FString extension; \
	int32 error; \
	FString message; \
}; \
static inline void FOnExtensionError_DelegateWrapper(const FMulticastScriptDelegate& OnExtensionError, const FString& provider, const FString& extension, int32 error, const FString& message) \
{ \
	_Script_AgoraPlugin_eventOnExtensionError_Parms Parms; \
	Parms.provider=provider; \
	Parms.extension=extension; \
	Parms.error=error; \
	Parms.message=message; \
	OnExtensionError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_103_DELEGATE \
struct _Script_AgoraPlugin_eventOnExtensionStopped_Parms \
{ \
	FString provider; \
	FString extension; \
}; \
static inline void FOnExtensionStopped_DelegateWrapper(const FMulticastScriptDelegate& OnExtensionStopped, const FString& provider, const FString& extension) \
{ \
	_Script_AgoraPlugin_eventOnExtensionStopped_Parms Parms; \
	Parms.provider=provider; \
	Parms.extension=extension; \
	OnExtensionStopped.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_102_DELEGATE \
struct _Script_AgoraPlugin_eventOnExtensionStarted_Parms \
{ \
	FString provider; \
	FString extension; \
}; \
static inline void FOnExtensionStarted_DelegateWrapper(const FMulticastScriptDelegate& OnExtensionStarted, const FString& provider, const FString& extension) \
{ \
	_Script_AgoraPlugin_eventOnExtensionStarted_Parms Parms; \
	Parms.provider=provider; \
	Parms.extension=extension; \
	OnExtensionStarted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_101_DELEGATE \
struct _Script_AgoraPlugin_eventOnExtensionEvent_Parms \
{ \
	FString provider; \
	FString extension; \
	FString key; \
	FString value; \
}; \
static inline void FOnExtensionEvent_DelegateWrapper(const FMulticastScriptDelegate& OnExtensionEvent, const FString& provider, const FString& extension, const FString& key, const FString& value) \
{ \
	_Script_AgoraPlugin_eventOnExtensionEvent_Parms Parms; \
	Parms.provider=provider; \
	Parms.extension=extension; \
	Parms.key=key; \
	Parms.value=value; \
	OnExtensionEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_100_DELEGATE \
struct _Script_AgoraPlugin_eventOnVideoPublishStateChanged_Parms \
{ \
	EVIDEO_SOURCE_TYPE source; \
	FString channel; \
	ESTREAM_PUBLISH_STATE oldState; \
	ESTREAM_PUBLISH_STATE newState; \
	int32 elapseSinceLastState; \
}; \
static inline void FOnVideoPublishStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVideoPublishStateChanged, EVIDEO_SOURCE_TYPE source, const FString& channel, ESTREAM_PUBLISH_STATE oldState, ESTREAM_PUBLISH_STATE newState, int32 elapseSinceLastState) \
{ \
	_Script_AgoraPlugin_eventOnVideoPublishStateChanged_Parms Parms; \
	Parms.source=source; \
	Parms.channel=channel; \
	Parms.oldState=oldState; \
	Parms.newState=newState; \
	Parms.elapseSinceLastState=elapseSinceLastState; \
	OnVideoPublishStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_99_DELEGATE \
struct _Script_AgoraPlugin_eventOnAudioPublishStateChanged_Parms \
{ \
	FString channel; \
	ESTREAM_PUBLISH_STATE oldState; \
	ESTREAM_PUBLISH_STATE newState; \
	int32 elapseSinceLastState; \
}; \
static inline void FOnAudioPublishStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPublishStateChanged, const FString& channel, ESTREAM_PUBLISH_STATE oldState, ESTREAM_PUBLISH_STATE newState, int32 elapseSinceLastState) \
{ \
	_Script_AgoraPlugin_eventOnAudioPublishStateChanged_Parms Parms; \
	Parms.channel=channel; \
	Parms.oldState=oldState; \
	Parms.newState=newState; \
	Parms.elapseSinceLastState=elapseSinceLastState; \
	OnAudioPublishStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_98_DELEGATE \
struct _Script_AgoraPlugin_eventOnVideoSubscribeStateChanged_Parms \
{ \
	FString channel; \
	int64 uid; \
	ESTREAM_SUBSCRIBE_STATE oldState; \
	ESTREAM_SUBSCRIBE_STATE newState; \
	int32 elapseSinceLastState; \
}; \
static inline void FOnVideoSubscribeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVideoSubscribeStateChanged, const FString& channel, int64 uid, ESTREAM_SUBSCRIBE_STATE oldState, ESTREAM_SUBSCRIBE_STATE newState, int32 elapseSinceLastState) \
{ \
	_Script_AgoraPlugin_eventOnVideoSubscribeStateChanged_Parms Parms; \
	Parms.channel=channel; \
	Parms.uid=uid; \
	Parms.oldState=oldState; \
	Parms.newState=newState; \
	Parms.elapseSinceLastState=elapseSinceLastState; \
	OnVideoSubscribeStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_97_DELEGATE \
struct _Script_AgoraPlugin_eventOnAudioSubscribeStateChanged_Parms \
{ \
	FString channel; \
	int64 uid; \
	ESTREAM_SUBSCRIBE_STATE oldState; \
	ESTREAM_SUBSCRIBE_STATE newState; \
	int32 elapseSinceLastState; \
}; \
static inline void FOnAudioSubscribeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioSubscribeStateChanged, const FString& channel, int64 uid, ESTREAM_SUBSCRIBE_STATE oldState, ESTREAM_SUBSCRIBE_STATE newState, int32 elapseSinceLastState) \
{ \
	_Script_AgoraPlugin_eventOnAudioSubscribeStateChanged_Parms Parms; \
	Parms.channel=channel; \
	Parms.uid=uid; \
	Parms.oldState=oldState; \
	Parms.newState=newState; \
	Parms.elapseSinceLastState=elapseSinceLastState; \
	OnAudioSubscribeStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_96_DELEGATE \
struct _Script_AgoraPlugin_eventOnUploadLogResult_Parms \
{ \
	FString requestId; \
	bool success; \
	EUPLOAD_ERROR_REASON reason; \
}; \
static inline void FOnUploadLogResult_DelegateWrapper(const FMulticastScriptDelegate& OnUploadLogResult, const FString& requestId, bool success, EUPLOAD_ERROR_REASON reason) \
{ \
	_Script_AgoraPlugin_eventOnUploadLogResult_Parms Parms; \
	Parms.requestId=requestId; \
	Parms.success=success ? true : false; \
	Parms.reason=reason; \
	OnUploadLogResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_95_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserInfoUpdated_Parms \
{ \
	int64 uid; \
	FUserInfo info; \
}; \
static inline void FOnUserInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnUserInfoUpdated, int64 uid, FUserInfo const& info) \
{ \
	_Script_AgoraPlugin_eventOnUserInfoUpdated_Parms Parms; \
	Parms.uid=uid; \
	Parms.info=info; \
	OnUserInfoUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_94_DELEGATE \
struct _Script_AgoraPlugin_eventOnLocalUserRegistered_Parms \
{ \
	int64 uid; \
	FString userAccount; \
}; \
static inline void FOnLocalUserRegistered_DelegateWrapper(const FMulticastScriptDelegate& OnLocalUserRegistered, int64 uid, const FString& userAccount) \
{ \
	_Script_AgoraPlugin_eventOnLocalUserRegistered_Parms Parms; \
	Parms.uid=uid; \
	Parms.userAccount=userAccount; \
	OnLocalUserRegistered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_93_DELEGATE \
struct _Script_AgoraPlugin_eventOnPermissionError_Parms \
{ \
	EPERMISSION_TYPE permissionType; \
}; \
static inline void FOnPermissionError_DelegateWrapper(const FMulticastScriptDelegate& OnPermissionError, EPERMISSION_TYPE permissionType) \
{ \
	_Script_AgoraPlugin_eventOnPermissionError_Parms Parms; \
	Parms.permissionType=permissionType; \
	OnPermissionError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_92_DELEGATE \
struct _Script_AgoraPlugin_eventOnEncryptionError_Parms \
{ \
	EENCRYPTION_ERROR_TYPE errorType; \
}; \
static inline void FOnEncryptionError_DelegateWrapper(const FMulticastScriptDelegate& OnEncryptionError, EENCRYPTION_ERROR_TYPE errorType) \
{ \
	_Script_AgoraPlugin_eventOnEncryptionError_Parms Parms; \
	Parms.errorType=errorType; \
	OnEncryptionError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_91_DELEGATE \
struct _Script_AgoraPlugin_eventOnNetworkTypeChanged_Parms \
{ \
	FENUMWRAP_NETWORK_TYPE type; \
}; \
static inline void FOnNetworkTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnNetworkTypeChanged, FENUMWRAP_NETWORK_TYPE type) \
{ \
	_Script_AgoraPlugin_eventOnNetworkTypeChanged_Parms Parms; \
	Parms.type=type; \
	OnNetworkTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_90_DELEGATE \
struct _Script_AgoraPlugin_eventOnWlAccStats_Parms \
{ \
	FWlAccStats currentStats; \
	FWlAccStats averageStats; \
}; \
static inline void FOnWlAccStats_DelegateWrapper(const FMulticastScriptDelegate& OnWlAccStats, FWlAccStats currentStats, FWlAccStats averageStats) \
{ \
	_Script_AgoraPlugin_eventOnWlAccStats_Parms Parms; \
	Parms.currentStats=currentStats; \
	Parms.averageStats=averageStats; \
	OnWlAccStats.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_89_DELEGATE \
struct _Script_AgoraPlugin_eventOnWlAccMessage_Parms \
{ \
	EWLACC_MESSAGE_REASON reason; \
	EWLACC_SUGGEST_ACTION action; \
	FString wlAccMsg; \
}; \
static inline void FOnWlAccMessage_DelegateWrapper(const FMulticastScriptDelegate& OnWlAccMessage, EWLACC_MESSAGE_REASON reason, EWLACC_SUGGEST_ACTION action, const FString& wlAccMsg) \
{ \
	_Script_AgoraPlugin_eventOnWlAccMessage_Parms Parms; \
	Parms.reason=reason; \
	Parms.action=action; \
	Parms.wlAccMsg=wlAccMsg; \
	OnWlAccMessage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_88_DELEGATE \
struct _Script_AgoraPlugin_eventOnConnectionStateChanged_Parms \
{ \
	ECONNECTION_STATE_TYPE state; \
	ECONNECTION_CHANGED_REASON_TYPE reason; \
}; \
static inline void FOnConnectionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionStateChanged, ECONNECTION_STATE_TYPE state, ECONNECTION_CHANGED_REASON_TYPE reason) \
{ \
	_Script_AgoraPlugin_eventOnConnectionStateChanged_Parms Parms; \
	Parms.state=state; \
	Parms.reason=reason; \
	OnConnectionStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_87_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteVideoTransportStats_Parms \
{ \
	int64 uid; \
	int32 delay; \
	int32 lost; \
	int32 rxKBitRate; \
}; \
static inline void FOnRemoteVideoTransportStats_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteVideoTransportStats, int64 uid, int32 delay, int32 lost, int32 rxKBitRate) \
{ \
	_Script_AgoraPlugin_eventOnRemoteVideoTransportStats_Parms Parms; \
	Parms.uid=uid; \
	Parms.delay=delay; \
	Parms.lost=lost; \
	Parms.rxKBitRate=rxKBitRate; \
	OnRemoteVideoTransportStats.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_86_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteAudioTransportStats_Parms \
{ \
	int64 uid; \
	int32 delay; \
	int32 lost; \
	int32 rxKBitRate; \
}; \
static inline void FOnRemoteAudioTransportStats_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteAudioTransportStats, int64 uid, int32 delay, int32 lost, int32 rxKBitRate) \
{ \
	_Script_AgoraPlugin_eventOnRemoteAudioTransportStats_Parms Parms; \
	Parms.uid=uid; \
	Parms.delay=delay; \
	Parms.lost=lost; \
	Parms.rxKBitRate=rxKBitRate; \
	OnRemoteAudioTransportStats.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_85_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteSubscribeFallbackToAudioOnly_Parms \
{ \
	int64 uid; \
	bool isFallbackOrRecover; \
}; \
static inline void FOnRemoteSubscribeFallbackToAudioOnly_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteSubscribeFallbackToAudioOnly, int64 uid, bool isFallbackOrRecover) \
{ \
	_Script_AgoraPlugin_eventOnRemoteSubscribeFallbackToAudioOnly_Parms Parms; \
	Parms.uid=uid; \
	Parms.isFallbackOrRecover=isFallbackOrRecover ? true : false; \
	OnRemoteSubscribeFallbackToAudioOnly.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_84_DELEGATE \
struct _Script_AgoraPlugin_eventOnLocalPublishFallbackToAudioOnly_Parms \
{ \
	bool isFallbackOrRecover; \
}; \
static inline void FOnLocalPublishFallbackToAudioOnly_DelegateWrapper(const FMulticastScriptDelegate& OnLocalPublishFallbackToAudioOnly, bool isFallbackOrRecover) \
{ \
	_Script_AgoraPlugin_eventOnLocalPublishFallbackToAudioOnly_Parms Parms; \
	Parms.isFallbackOrRecover=isFallbackOrRecover ? true : false; \
	OnLocalPublishFallbackToAudioOnly.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_83_DELEGATE \
struct _Script_AgoraPlugin_eventOnChannelMediaRelayEvent_Parms \
{ \
	int32 code; \
}; \
static inline void FOnChannelMediaRelayEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChannelMediaRelayEvent, int32 code) \
{ \
	_Script_AgoraPlugin_eventOnChannelMediaRelayEvent_Parms Parms; \
	Parms.code=code; \
	OnChannelMediaRelayEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_82_DELEGATE \
struct _Script_AgoraPlugin_eventOnChannelMediaRelayStateChanged_Parms \
{ \
	int32 state; \
	int32 code; \
}; \
static inline void FOnChannelMediaRelayStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnChannelMediaRelayStateChanged, int32 state, int32 code) \
{ \
	_Script_AgoraPlugin_eventOnChannelMediaRelayStateChanged_Parms Parms; \
	Parms.state=state; \
	Parms.code=code; \
	OnChannelMediaRelayStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_81_DELEGATE \
struct _Script_AgoraPlugin_eventOnAudioRoutingChanged_Parms \
{ \
	int32 routing; \
}; \
static inline void FOnAudioRoutingChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioRoutingChanged, int32 routing) \
{ \
	_Script_AgoraPlugin_eventOnAudioRoutingChanged_Parms Parms; \
	Parms.routing=routing; \
	OnAudioRoutingChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_80_DELEGATE \
static inline void FOnTranscodingUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnTranscodingUpdated) \
{ \
	OnTranscodingUpdated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_79_DELEGATE \
struct _Script_AgoraPlugin_eventOnRtmpStreamingEvent_Parms \
{ \
	FString url; \
	ERTMP_STREAMING_EVENT eventCode; \
}; \
static inline void FOnRtmpStreamingEvent_DelegateWrapper(const FMulticastScriptDelegate& OnRtmpStreamingEvent, const FString& url, ERTMP_STREAMING_EVENT eventCode) \
{ \
	_Script_AgoraPlugin_eventOnRtmpStreamingEvent_Parms Parms; \
	Parms.url=url; \
	Parms.eventCode=eventCode; \
	OnRtmpStreamingEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_78_DELEGATE \
struct _Script_AgoraPlugin_eventOnRtmpStreamingStateChanged_Parms \
{ \
	FString url; \
	ERTMP_STREAM_PUBLISH_STATE state; \
	ERTMP_STREAM_PUBLISH_ERROR_TYPE errCode; \
}; \
static inline void FOnRtmpStreamingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRtmpStreamingStateChanged, const FString& url, ERTMP_STREAM_PUBLISH_STATE state, ERTMP_STREAM_PUBLISH_ERROR_TYPE errCode) \
{ \
	_Script_AgoraPlugin_eventOnRtmpStreamingStateChanged_Parms Parms; \
	Parms.url=url; \
	Parms.state=state; \
	Parms.errCode=errCode; \
	OnRtmpStreamingStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_77_DELEGATE \
struct _Script_AgoraPlugin_eventOnAudioDeviceVolumeChanged_Parms \
{ \
	FENUMWRAP_MEDIA_DEVICE_TYPE deviceType; \
	int32 volume; \
	bool muted; \
}; \
static inline void FOnAudioDeviceVolumeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioDeviceVolumeChanged, FENUMWRAP_MEDIA_DEVICE_TYPE deviceType, int32 volume, bool muted) \
{ \
	_Script_AgoraPlugin_eventOnAudioDeviceVolumeChanged_Parms Parms; \
	Parms.deviceType=deviceType; \
	Parms.volume=volume; \
	Parms.muted=muted ? true : false; \
	OnAudioDeviceVolumeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_76_DELEGATE \
struct _Script_AgoraPlugin_eventOnClientRoleChangeFailed_Parms \
{ \
	ECLIENT_ROLE_CHANGE_FAILED_REASON reason; \
	ECLIENT_ROLE_TYPE currentRole; \
}; \
static inline void FOnClientRoleChangeFailed_DelegateWrapper(const FMulticastScriptDelegate& OnClientRoleChangeFailed, ECLIENT_ROLE_CHANGE_FAILED_REASON reason, ECLIENT_ROLE_TYPE currentRole) \
{ \
	_Script_AgoraPlugin_eventOnClientRoleChangeFailed_Parms Parms; \
	Parms.reason=reason; \
	Parms.currentRole=currentRole; \
	OnClientRoleChangeFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_75_DELEGATE \
struct _Script_AgoraPlugin_eventOnClientRoleChanged_Parms \
{ \
	ECLIENT_ROLE_TYPE oldRole; \
	ECLIENT_ROLE_TYPE newRole; \
	FClientRoleOptions roleoption; \
}; \
static inline void FOnClientRoleChanged_DelegateWrapper(const FMulticastScriptDelegate& OnClientRoleChanged, ECLIENT_ROLE_TYPE oldRole, ECLIENT_ROLE_TYPE newRole, FClientRoleOptions roleoption) \
{ \
	_Script_AgoraPlugin_eventOnClientRoleChanged_Parms Parms; \
	Parms.oldRole=oldRole; \
	Parms.newRole=newRole; \
	Parms.roleoption=roleoption; \
	OnClientRoleChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_74_DELEGATE \
struct _Script_AgoraPlugin_eventOnSnapshotTaken_Parms \
{ \
	int64 uid; \
	FString filePath; \
	int32 width; \
	int32 height; \
	int32 errCode; \
}; \
static inline void FOnSnapshotTaken_DelegateWrapper(const FMulticastScriptDelegate& OnSnapshotTaken, int64 uid, const FString& filePath, int32 width, int32 height, int32 errCode) \
{ \
	_Script_AgoraPlugin_eventOnSnapshotTaken_Parms Parms; \
	Parms.uid=uid; \
	Parms.filePath=filePath; \
	Parms.width=width; \
	Parms.height=height; \
	Parms.errCode=errCode; \
	OnSnapshotTaken.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_73_DELEGATE \
struct _Script_AgoraPlugin_eventOnContentInspectResult_Parms \
{ \
	ECONTENT_INSPECT_RESULT result; \
}; \
static inline void FOnContentInspectResult_DelegateWrapper(const FMulticastScriptDelegate& OnContentInspectResult, ECONTENT_INSPECT_RESULT result) \
{ \
	_Script_AgoraPlugin_eventOnContentInspectResult_Parms Parms; \
	Parms.result=result; \
	OnContentInspectResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_72_DELEGATE \
struct _Script_AgoraPlugin_eventOnActiveSpeaker_Parms \
{ \
	int64 userId; \
}; \
static inline void FOnActiveSpeaker_DelegateWrapper(const FMulticastScriptDelegate& OnActiveSpeaker, int64 userId) \
{ \
	_Script_AgoraPlugin_eventOnActiveSpeaker_Parms Parms; \
	Parms.userId=userId; \
	OnActiveSpeaker.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_71_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteAudioStateChanged_Parms \
{ \
	int64 uid; \
	EREMOTE_AUDIO_STATE state; \
	EREMOTE_AUDIO_STATE_REASON reason; \
	int32 elapsed; \
}; \
static inline void FOnRemoteAudioStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteAudioStateChanged, int64 uid, EREMOTE_AUDIO_STATE state, EREMOTE_AUDIO_STATE_REASON reason, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnRemoteAudioStateChanged_Parms Parms; \
	Parms.uid=uid; \
	Parms.state=state; \
	Parms.reason=reason; \
	Parms.elapsed=elapsed; \
	OnRemoteAudioStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_70_DELEGATE \
struct _Script_AgoraPlugin_eventOnLocalAudioStateChanged_Parms \
{ \
	ELOCAL_AUDIO_STREAM_STATE state; \
	ELOCAL_AUDIO_STREAM_ERROR error; \
}; \
static inline void FOnLocalAudioStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLocalAudioStateChanged, ELOCAL_AUDIO_STREAM_STATE state, ELOCAL_AUDIO_STREAM_ERROR error) \
{ \
	_Script_AgoraPlugin_eventOnLocalAudioStateChanged_Parms Parms; \
	Parms.state=state; \
	Parms.error=error; \
	OnLocalAudioStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_69_DELEGATE \
struct _Script_AgoraPlugin_eventOnFirstRemoteAudioDecoded_Parms \
{ \
	int64 uid; \
	int32 elapsed; \
}; \
static inline void FOnFirstRemoteAudioDecoded_DelegateWrapper(const FMulticastScriptDelegate& OnFirstRemoteAudioDecoded, int64 uid, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnFirstRemoteAudioDecoded_Parms Parms; \
	Parms.uid=uid; \
	Parms.elapsed=elapsed; \
	OnFirstRemoteAudioDecoded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_68_DELEGATE \
struct _Script_AgoraPlugin_eventOnFirstRemoteAudioFrame_Parms \
{ \
	int64 uid; \
	int32 elapsed; \
}; \
static inline void FOnFirstRemoteAudioFrame_DelegateWrapper(const FMulticastScriptDelegate& OnFirstRemoteAudioFrame, int64 uid, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnFirstRemoteAudioFrame_Parms Parms; \
	Parms.uid=uid; \
	Parms.elapsed=elapsed; \
	OnFirstRemoteAudioFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_67_DELEGATE \
struct _Script_AgoraPlugin_eventOnFirstLocalAudioFramePublished_Parms \
{ \
	int32 elapsed; \
}; \
static inline void FOnFirstLocalAudioFramePublished_DelegateWrapper(const FMulticastScriptDelegate& OnFirstLocalAudioFramePublished, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnFirstLocalAudioFramePublished_Parms Parms; \
	Parms.elapsed=elapsed; \
	OnFirstLocalAudioFramePublished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_66_DELEGATE \
struct _Script_AgoraPlugin_eventOnLicenseValidationFailure_Parms \
{ \
	ELICENSE_ERROR_TYPE error; \
}; \
static inline void FOnLicenseValidationFailure_DelegateWrapper(const FMulticastScriptDelegate& OnLicenseValidationFailure, ELICENSE_ERROR_TYPE error) \
{ \
	_Script_AgoraPlugin_eventOnLicenseValidationFailure_Parms Parms; \
	Parms.error=error; \
	OnLicenseValidationFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_65_DELEGATE \
struct _Script_AgoraPlugin_eventOnTokenPrivilegeWillExpire_Parms \
{ \
	FString token; \
}; \
static inline void FOnTokenPrivilegeWillExpire_DelegateWrapper(const FMulticastScriptDelegate& OnTokenPrivilegeWillExpire, const FString& token) \
{ \
	_Script_AgoraPlugin_eventOnTokenPrivilegeWillExpire_Parms Parms; \
	Parms.token=token; \
	OnTokenPrivilegeWillExpire.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_64_DELEGATE \
static inline void FOnRequestToken_DelegateWrapper(const FMulticastScriptDelegate& OnRequestToken) \
{ \
	OnRequestToken.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_63_DELEGATE \
struct _Script_AgoraPlugin_eventOnStreamMessageError_Parms \
{ \
	int64 userId; \
	int32 streamId; \
	int32 code; \
	int32 missed; \
	int32 cached; \
}; \
static inline void FOnStreamMessageError_DelegateWrapper(const FMulticastScriptDelegate& OnStreamMessageError, int64 userId, int32 streamId, int32 code, int32 missed, int32 cached) \
{ \
	_Script_AgoraPlugin_eventOnStreamMessageError_Parms Parms; \
	Parms.userId=userId; \
	Parms.streamId=streamId; \
	Parms.code=code; \
	Parms.missed=missed; \
	Parms.cached=cached; \
	OnStreamMessageError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_62_DELEGATE \
struct _Script_AgoraPlugin_eventOnStreamMessage_Parms \
{ \
	int64 userId; \
	int32 streamId; \
	FString data; \
	int64 length; \
	int32 sentTs; \
}; \
static inline void FOnStreamMessage_DelegateWrapper(const FMulticastScriptDelegate& OnStreamMessage, int64 userId, int32 streamId, const FString& data, int64 length, int32 sentTs) \
{ \
	_Script_AgoraPlugin_eventOnStreamMessage_Parms Parms; \
	Parms.userId=userId; \
	Parms.streamId=streamId; \
	Parms.data=data; \
	Parms.length=length; \
	Parms.sentTs=sentTs; \
	OnStreamMessage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_61_DELEGATE \
static inline void FOnConnectionBanned_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionBanned) \
{ \
	OnConnectionBanned.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_60_DELEGATE \
static inline void FOnConnectionInterrupted_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionInterrupted) \
{ \
	OnConnectionInterrupted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_59_DELEGATE \
static inline void FOnConnectionLost_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionLost) \
{ \
	OnConnectionLost.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_58_DELEGATE \
struct _Script_AgoraPlugin_eventOnRhythmPlayerStateChanged_Parms \
{ \
	FENUMWRAP_RHYTHM_PLAYER_STATE_TYPE state; \
	FENUMWRAP_RHYTHM_PLAYER_ERROR_TYPE errorCode; \
}; \
static inline void FOnRhythmPlayerStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRhythmPlayerStateChanged, FENUMWRAP_RHYTHM_PLAYER_STATE_TYPE state, FENUMWRAP_RHYTHM_PLAYER_ERROR_TYPE errorCode) \
{ \
	_Script_AgoraPlugin_eventOnRhythmPlayerStateChanged_Parms Parms; \
	Parms.state=state; \
	Parms.errorCode=errorCode; \
	OnRhythmPlayerStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_57_DELEGATE \
struct _Script_AgoraPlugin_eventOnAudioMixingStateChanged_Parms \
{ \
	FENUMWRAP_AUDIO_MIXING_STATE_TYPE state; \
	FENUMWRAP_AUDIO_MIXING_REASON_TYPE reason; \
}; \
static inline void FOnAudioMixingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioMixingStateChanged, FENUMWRAP_AUDIO_MIXING_STATE_TYPE state, FENUMWRAP_AUDIO_MIXING_REASON_TYPE reason) \
{ \
	_Script_AgoraPlugin_eventOnAudioMixingStateChanged_Parms Parms; \
	Parms.state=state; \
	Parms.reason=reason; \
	OnAudioMixingStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_56_DELEGATE \
static inline void FOnVideoStopped_DelegateWrapper(const FMulticastScriptDelegate& OnVideoStopped) \
{ \
	OnVideoStopped.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_55_DELEGATE \
struct _Script_AgoraPlugin_eventOnFacePositionChanged_Parms \
{ \
	int32 imageWidth; \
	int32 imageHeight; \
	FRectangle vecRectangle; \
	TArray<int32> vecDistance; \
	int32 numFaces; \
}; \
static inline void FOnFacePositionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFacePositionChanged, int32 imageWidth, int32 imageHeight, FRectangle vecRectangle, const TArray<int32>& vecDistance, int32 numFaces) \
{ \
	_Script_AgoraPlugin_eventOnFacePositionChanged_Parms Parms; \
	Parms.imageWidth=imageWidth; \
	Parms.imageHeight=imageHeight; \
	Parms.vecRectangle=vecRectangle; \
	Parms.vecDistance=vecDistance; \
	Parms.numFaces=numFaces; \
	OnFacePositionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_54_DELEGATE \
struct _Script_AgoraPlugin_eventOnCameraExposureAreaChanged_Parms \
{ \
	int32 x; \
	int32 y; \
	int32 width; \
	int32 height; \
}; \
static inline void FOnCameraExposureAreaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCameraExposureAreaChanged, int32 x, int32 y, int32 width, int32 height) \
{ \
	_Script_AgoraPlugin_eventOnCameraExposureAreaChanged_Parms Parms; \
	Parms.x=x; \
	Parms.y=y; \
	Parms.width=width; \
	Parms.height=height; \
	OnCameraExposureAreaChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_53_DELEGATE \
struct _Script_AgoraPlugin_eventOnCameraFocusAreaChanged_Parms \
{ \
	int32 x; \
	int32 y; \
	int32 width; \
	int32 height; \
}; \
static inline void FOnCameraFocusAreaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCameraFocusAreaChanged, int32 x, int32 y, int32 width, int32 height) \
{ \
	_Script_AgoraPlugin_eventOnCameraFocusAreaChanged_Parms Parms; \
	Parms.x=x; \
	Parms.y=y; \
	Parms.width=width; \
	Parms.height=height; \
	OnCameraFocusAreaChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_52_DELEGATE \
static inline void FOnCameraReady_DelegateWrapper(const FMulticastScriptDelegate& OnCameraReady) \
{ \
	OnCameraReady.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_51_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteVideoStats_Parms \
{ \
	FRemoteVideoStats stats; \
}; \
static inline void FOnRemoteVideoStats_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteVideoStats, FRemoteVideoStats const& stats) \
{ \
	_Script_AgoraPlugin_eventOnRemoteVideoStats_Parms Parms; \
	Parms.stats=stats; \
	OnRemoteVideoStats.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_50_DELEGATE \
struct _Script_AgoraPlugin_eventOnLocalVideoStats_Parms \
{ \
	EVIDEO_SOURCE_TYPE source; \
	FLocalVideoStats stats; \
}; \
static inline void FOnLocalVideoStats_DelegateWrapper(const FMulticastScriptDelegate& OnLocalVideoStats, EVIDEO_SOURCE_TYPE source, FLocalVideoStats const& stats) \
{ \
	_Script_AgoraPlugin_eventOnLocalVideoStats_Parms Parms; \
	Parms.source=source; \
	Parms.stats=stats; \
	OnLocalVideoStats.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_49_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteAudioStats_Parms \
{ \
	FRemoteAudioStats stats; \
}; \
static inline void FOnRemoteAudioStats_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteAudioStats, FRemoteAudioStats const& stats) \
{ \
	_Script_AgoraPlugin_eventOnRemoteAudioStats_Parms Parms; \
	Parms.stats=stats; \
	OnRemoteAudioStats.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_48_DELEGATE \
struct _Script_AgoraPlugin_eventOnLocalAudioStats_Parms \
{ \
	FLocalAudioStats stats; \
}; \
static inline void FOnLocalAudioStats_DelegateWrapper(const FMulticastScriptDelegate& OnLocalAudioStats, FLocalAudioStats const& stats) \
{ \
	_Script_AgoraPlugin_eventOnLocalAudioStats_Parms Parms; \
	Parms.stats=stats; \
	OnLocalAudioStats.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_47_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserEnableLocalVideo_Parms \
{ \
	int64 uid; \
	bool enabled; \
}; \
static inline void FOnUserEnableLocalVideo_DelegateWrapper(const FMulticastScriptDelegate& OnUserEnableLocalVideo, int64 uid, bool enabled) \
{ \
	_Script_AgoraPlugin_eventOnUserEnableLocalVideo_Parms Parms; \
	Parms.uid=uid; \
	Parms.enabled=enabled ? true : false; \
	OnUserEnableLocalVideo.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_46_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserStateChanged_Parms \
{ \
	int64 uid; \
	int32 state; \
}; \
static inline void FOnUserStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUserStateChanged, int64 uid, int32 state) \
{ \
	_Script_AgoraPlugin_eventOnUserStateChanged_Parms Parms; \
	Parms.uid=uid; \
	Parms.state=state; \
	OnUserStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_45_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserEnableVideo_Parms \
{ \
	int64 uid; \
	bool enabled; \
}; \
static inline void FOnUserEnableVideo_DelegateWrapper(const FMulticastScriptDelegate& OnUserEnableVideo, int64 uid, bool enabled) \
{ \
	_Script_AgoraPlugin_eventOnUserEnableVideo_Parms Parms; \
	Parms.uid=uid; \
	Parms.enabled=enabled ? true : false; \
	OnUserEnableVideo.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_44_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserMuteVideo_Parms \
{ \
	int64 userId; \
	bool muted; \
}; \
static inline void FOnUserMuteVideo_DelegateWrapper(const FMulticastScriptDelegate& OnUserMuteVideo, int64 userId, bool muted) \
{ \
	_Script_AgoraPlugin_eventOnUserMuteVideo_Parms Parms; \
	Parms.userId=userId; \
	Parms.muted=muted ? true : false; \
	OnUserMuteVideo.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_43_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserMuteAudio_Parms \
{ \
	int64 uid; \
	bool muted; \
}; \
static inline void FOnUserMuteAudio_DelegateWrapper(const FMulticastScriptDelegate& OnUserMuteAudio, int64 uid, bool muted) \
{ \
	_Script_AgoraPlugin_eventOnUserMuteAudio_Parms Parms; \
	Parms.uid=uid; \
	Parms.muted=muted ? true : false; \
	OnUserMuteAudio.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_42_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserOffline_Parms \
{ \
	int64 uid; \
	EUSER_OFFLINE_REASON_TYPE reason; \
}; \
static inline void FOnUserOffline_DelegateWrapper(const FMulticastScriptDelegate& OnUserOffline, int64 uid, EUSER_OFFLINE_REASON_TYPE reason) \
{ \
	_Script_AgoraPlugin_eventOnUserOffline_Parms Parms; \
	Parms.uid=uid; \
	Parms.reason=reason; \
	OnUserOffline.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_41_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserJoined_Parms \
{ \
	int64 uid; \
	int32 elapsed; \
}; \
static inline void FOnUserJoined_DelegateWrapper(const FMulticastScriptDelegate& OnUserJoined, int64 uid, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnUserJoined_Parms Parms; \
	Parms.uid=uid; \
	Parms.elapsed=elapsed; \
	OnUserJoined.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_40_DELEGATE \
struct _Script_AgoraPlugin_eventOnFirstRemoteVideoFrame_Parms \
{ \
	int64 userId; \
	int32 width; \
	int32 height; \
	int32 elapsed; \
}; \
static inline void FOnFirstRemoteVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnFirstRemoteVideoFrame, int64 userId, int32 width, int32 height, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnFirstRemoteVideoFrame_Parms Parms; \
	Parms.userId=userId; \
	Parms.width=width; \
	Parms.height=height; \
	Parms.elapsed=elapsed; \
	OnFirstRemoteVideoFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_39_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteVideoStateChanged_Parms \
{ \
	int64 uid; \
	EREMOTE_VIDEO_STATE state; \
	EREMOTE_VIDEO_STATE_REASON reason; \
	int32 elapsed; \
}; \
static inline void FOnRemoteVideoStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteVideoStateChanged, int64 uid, EREMOTE_VIDEO_STATE state, EREMOTE_VIDEO_STATE_REASON reason, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnRemoteVideoStateChanged_Parms Parms; \
	Parms.uid=uid; \
	Parms.state=state; \
	Parms.reason=reason; \
	Parms.elapsed=elapsed; \
	OnRemoteVideoStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_38_DELEGATE \
struct _Script_AgoraPlugin_eventOnLocalVideoStateChanged_Parms \
{ \
	EVIDEO_SOURCE_TYPE source; \
	ELOCAL_VIDEO_STREAM_STATE state; \
	ELOCAL_VIDEO_STREAM_ERROR error; \
}; \
static inline void FOnLocalVideoStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLocalVideoStateChanged, EVIDEO_SOURCE_TYPE source, ELOCAL_VIDEO_STREAM_STATE state, ELOCAL_VIDEO_STREAM_ERROR error) \
{ \
	_Script_AgoraPlugin_eventOnLocalVideoStateChanged_Parms Parms; \
	Parms.source=source; \
	Parms.state=state; \
	Parms.error=error; \
	OnLocalVideoStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_37_DELEGATE \
struct _Script_AgoraPlugin_eventOnVideoSizeChanged_Parms \
{ \
	EVIDEO_SOURCE_TYPE sourceType; \
	int64 uid; \
	int32 width; \
	int32 height; \
	int32 rotation; \
}; \
static inline void FOnVideoSizeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVideoSizeChanged, EVIDEO_SOURCE_TYPE sourceType, int64 uid, int32 width, int32 height, int32 rotation) \
{ \
	_Script_AgoraPlugin_eventOnVideoSizeChanged_Parms Parms; \
	Parms.sourceType=sourceType; \
	Parms.uid=uid; \
	Parms.width=width; \
	Parms.height=height; \
	Parms.rotation=rotation; \
	OnVideoSizeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_36_DELEGATE \
struct _Script_AgoraPlugin_eventOnFirstRemoteVideoDecoded_Parms \
{ \
	int64 uid; \
	int32 width; \
	int32 height; \
	int32 elapsed; \
}; \
static inline void FOnFirstRemoteVideoDecoded_DelegateWrapper(const FMulticastScriptDelegate& OnFirstRemoteVideoDecoded, int64 uid, int32 width, int32 height, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnFirstRemoteVideoDecoded_Parms Parms; \
	Parms.uid=uid; \
	Parms.width=width; \
	Parms.height=height; \
	Parms.elapsed=elapsed; \
	OnFirstRemoteVideoDecoded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_35_DELEGATE \
struct _Script_AgoraPlugin_eventOnVideoSourceFrameSizeChanged_Parms \
{ \
	EVIDEO_SOURCE_TYPE sourceType; \
	int32 width; \
	int32 height; \
}; \
static inline void FOnVideoSourceFrameSizeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVideoSourceFrameSizeChanged, EVIDEO_SOURCE_TYPE sourceType, int32 width, int32 height) \
{ \
	_Script_AgoraPlugin_eventOnVideoSourceFrameSizeChanged_Parms Parms; \
	Parms.sourceType=sourceType; \
	Parms.width=width; \
	Parms.height=height; \
	OnVideoSourceFrameSizeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_34_DELEGATE \
struct _Script_AgoraPlugin_eventOnFirstLocalVideoFramePublished_Parms \
{ \
	EVIDEO_SOURCE_TYPE source; \
	int32 elapsed; \
}; \
static inline void FOnFirstLocalVideoFramePublished_DelegateWrapper(const FMulticastScriptDelegate& OnFirstLocalVideoFramePublished, EVIDEO_SOURCE_TYPE source, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnFirstLocalVideoFramePublished_Parms Parms; \
	Parms.source=source; \
	Parms.elapsed=elapsed; \
	OnFirstLocalVideoFramePublished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_33_DELEGATE \
struct _Script_AgoraPlugin_eventOnFirstLocalVideoFrame_Parms \
{ \
	EVIDEO_SOURCE_TYPE source; \
	int32 width; \
	int32 height; \
	int32 elapsed; \
}; \
static inline void FOnFirstLocalVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnFirstLocalVideoFrame, EVIDEO_SOURCE_TYPE source, int32 width, int32 height, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnFirstLocalVideoFrame_Parms Parms; \
	Parms.source=source; \
	Parms.width=width; \
	Parms.height=height; \
	Parms.elapsed=elapsed; \
	OnFirstLocalVideoFrame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_32_DELEGATE \
struct _Script_AgoraPlugin_eventOnLastmileQuality_Parms \
{ \
	int32 quality; \
}; \
static inline void FOnLastmileQuality_DelegateWrapper(const FMulticastScriptDelegate& OnLastmileQuality, int32 quality) \
{ \
	_Script_AgoraPlugin_eventOnLastmileQuality_Parms Parms; \
	Parms.quality=quality; \
	OnLastmileQuality.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_31_DELEGATE \
struct _Script_AgoraPlugin_eventOnDownlinkNetworkInfoUpdated_Parms \
{ \
	FDownlinkNetworkInfo info; \
}; \
static inline void FOnDownlinkNetworkInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnDownlinkNetworkInfoUpdated, FDownlinkNetworkInfo const& info) \
{ \
	_Script_AgoraPlugin_eventOnDownlinkNetworkInfoUpdated_Parms Parms; \
	Parms.info=info; \
	OnDownlinkNetworkInfoUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_30_DELEGATE \
struct _Script_AgoraPlugin_eventOnUplinkNetworkInfoUpdated_Parms \
{ \
	FUplinkNetworkInfo info; \
}; \
static inline void FOnUplinkNetworkInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnUplinkNetworkInfoUpdated, FUplinkNetworkInfo const& info) \
{ \
	_Script_AgoraPlugin_eventOnUplinkNetworkInfoUpdated_Parms Parms; \
	Parms.info=info; \
	OnUplinkNetworkInfoUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_29_DELEGATE \
static inline void FOnIntraRequestReceived_DelegateWrapper(const FMulticastScriptDelegate& OnIntraRequestReceived) \
{ \
	OnIntraRequestReceived.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_28_DELEGATE \
struct _Script_AgoraPlugin_eventOnNetworkQuality_Parms \
{ \
	int64 uid; \
	int32 txQuality; \
	int32 rxQuality; \
}; \
static inline void FOnNetworkQuality_DelegateWrapper(const FMulticastScriptDelegate& OnNetworkQuality, int64 uid, int32 txQuality, int32 rxQuality) \
{ \
	_Script_AgoraPlugin_eventOnNetworkQuality_Parms Parms; \
	Parms.uid=uid; \
	Parms.txQuality=txQuality; \
	Parms.rxQuality=rxQuality; \
	OnNetworkQuality.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_27_DELEGATE \
struct _Script_AgoraPlugin_eventOnMediaDeviceChanged_Parms \
{ \
	int32 deviceType; \
}; \
static inline void FOnMediaDeviceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMediaDeviceChanged, int32 deviceType) \
{ \
	_Script_AgoraPlugin_eventOnMediaDeviceChanged_Parms Parms; \
	Parms.deviceType=deviceType; \
	OnMediaDeviceChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_26_DELEGATE \
struct _Script_AgoraPlugin_eventOnVideoDeviceStateChanged_Parms \
{ \
	FString deviceId; \
	int32 deviceType; \
	int32 deviceState; \
}; \
static inline void FOnVideoDeviceStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVideoDeviceStateChanged, const FString& deviceId, int32 deviceType, int32 deviceState) \
{ \
	_Script_AgoraPlugin_eventOnVideoDeviceStateChanged_Parms Parms; \
	Parms.deviceId=deviceId; \
	Parms.deviceType=deviceType; \
	Parms.deviceState=deviceState; \
	OnVideoDeviceStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_25_DELEGATE \
struct _Script_AgoraPlugin_eventOnAudioEffectFinished_Parms \
{ \
	int32 soundId; \
}; \
static inline void FOnAudioEffectFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioEffectFinished, int32 soundId) \
{ \
	_Script_AgoraPlugin_eventOnAudioEffectFinished_Parms Parms; \
	Parms.soundId=soundId; \
	OnAudioEffectFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_24_DELEGATE \
static inline void FOnAudioMixingFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioMixingFinished) \
{ \
	OnAudioMixingFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_23_DELEGATE \
struct _Script_AgoraPlugin_eventOnAudioMixingPositionChanged_Parms \
{ \
	int64 position; \
}; \
static inline void FOnAudioMixingPositionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioMixingPositionChanged, int64 position) \
{ \
	_Script_AgoraPlugin_eventOnAudioMixingPositionChanged_Parms Parms; \
	Parms.position=position; \
	OnAudioMixingPositionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_22_DELEGATE \
struct _Script_AgoraPlugin_eventOnAudioDeviceStateChanged_Parms \
{ \
	FString deviceId; \
	int32 deviceType; \
	int32 deviceState; \
}; \
static inline void FOnAudioDeviceStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioDeviceStateChanged, const FString& deviceId, int32 deviceType, int32 deviceState) \
{ \
	_Script_AgoraPlugin_eventOnAudioDeviceStateChanged_Parms Parms; \
	Parms.deviceId=deviceId; \
	Parms.deviceType=deviceType; \
	Parms.deviceState=deviceState; \
	OnAudioDeviceStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_21_DELEGATE \
struct _Script_AgoraPlugin_eventOnRtcStats_Parms \
{ \
	FRtcStats stats; \
}; \
static inline void FOnRtcStats_DelegateWrapper(const FMulticastScriptDelegate& OnRtcStats, FRtcStats const& stats) \
{ \
	_Script_AgoraPlugin_eventOnRtcStats_Parms Parms; \
	Parms.stats=stats; \
	OnRtcStats.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_20_DELEGATE \
struct _Script_AgoraPlugin_eventOnLeaveChannel_Parms \
{ \
	FRtcStats stats; \
}; \
static inline void FOnLeaveChannel_DelegateWrapper(const FMulticastScriptDelegate& OnLeaveChannel, FRtcStats const& stats) \
{ \
	_Script_AgoraPlugin_eventOnLeaveChannel_Parms Parms; \
	Parms.stats=stats; \
	OnLeaveChannel.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_19_DELEGATE \
struct _Script_AgoraPlugin_eventOnAudioVolumeIndication_Parms \
{ \
	TArray<FAudioVolumeInfo> speakers; \
	int32 totalVolume; \
}; \
static inline void FOnAudioVolumeIndication_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVolumeIndication, TArray<FAudioVolumeInfo> const& speakers, int32 totalVolume) \
{ \
	_Script_AgoraPlugin_eventOnAudioVolumeIndication_Parms Parms; \
	Parms.speakers=speakers; \
	Parms.totalVolume=totalVolume; \
	OnAudioVolumeIndication.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_18_DELEGATE \
struct _Script_AgoraPlugin_eventOnLastmileProbeResult_Parms \
{ \
	FLastmileProbeResult result; \
}; \
static inline void FOnLastmileProbeResult_DelegateWrapper(const FMulticastScriptDelegate& OnLastmileProbeResult, FLastmileProbeResult const& result) \
{ \
	_Script_AgoraPlugin_eventOnLastmileProbeResult_Parms Parms; \
	Parms.result=result; \
	OnLastmileProbeResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_17_DELEGATE \
struct _Script_AgoraPlugin_eventOnAudioQuality_Parms \
{ \
	int64 uid; \
	int32 quality; \
	int32 delay; \
	int32 lost; \
}; \
static inline void FOnAudioQuality_DelegateWrapper(const FMulticastScriptDelegate& OnAudioQuality, int64 uid, int32 quality, int32 delay, int32 lost) \
{ \
	_Script_AgoraPlugin_eventOnAudioQuality_Parms Parms; \
	Parms.uid=uid; \
	Parms.quality=quality; \
	Parms.delay=delay; \
	Parms.lost=lost; \
	OnAudioQuality.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_16_DELEGATE \
struct _Script_AgoraPlugin_eventOnError_Parms \
{ \
	int32 err; \
	FString msg; \
}; \
static inline void FOnError_DelegateWrapper(const FMulticastScriptDelegate& OnError, int32 err, const FString& msg) \
{ \
	_Script_AgoraPlugin_eventOnError_Parms Parms; \
	Parms.err=err; \
	Parms.msg=msg; \
	OnError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_15_DELEGATE \
struct _Script_AgoraPlugin_eventOnProxyConnected_Parms \
{ \
	FString channel; \
	int64 uid; \
	EPROXY_TYPE proxyType; \
	FString localProxyIp; \
	int32 elapsed; \
}; \
static inline void FOnProxyConnected_DelegateWrapper(const FMulticastScriptDelegate& OnProxyConnected, const FString& channel, int64 uid, EPROXY_TYPE proxyType, const FString& localProxyIp, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnProxyConnected_Parms Parms; \
	Parms.channel=channel; \
	Parms.uid=uid; \
	Parms.proxyType=proxyType; \
	Parms.localProxyIp=localProxyIp; \
	Parms.elapsed=elapsed; \
	OnProxyConnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_14_DELEGATE \
struct _Script_AgoraPlugin_eventOnRejoinChannelSuccess_Parms \
{ \
	FString channel; \
	int64 uid; \
	int32 elapsed; \
}; \
static inline void FOnRejoinChannelSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnRejoinChannelSuccess, const FString& channel, int64 uid, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnRejoinChannelSuccess_Parms Parms; \
	Parms.channel=channel; \
	Parms.uid=uid; \
	Parms.elapsed=elapsed; \
	OnRejoinChannelSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_13_DELEGATE \
struct _Script_AgoraPlugin_eventOnJoinChannelSuccess_Parms \
{ \
	FString channel; \
	int64 uid; \
	int32 elapsed; \
}; \
static inline void FOnJoinChannelSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnJoinChannelSuccess, const FString& channel, int64 uid, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnJoinChannelSuccess_Parms Parms; \
	Parms.channel=channel; \
	Parms.uid=uid; \
	Parms.elapsed=elapsed; \
	OnJoinChannelSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_RPC_WRAPPERS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIRtcEngineEventHandler(); \
	friend struct Z_Construct_UClass_UIRtcEngineEventHandler_Statics; \
public: \
	DECLARE_CLASS(UIRtcEngineEventHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIRtcEngineEventHandler)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUIRtcEngineEventHandler(); \
	friend struct Z_Construct_UClass_UIRtcEngineEventHandler_Statics; \
public: \
	DECLARE_CLASS(UIRtcEngineEventHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIRtcEngineEventHandler)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIRtcEngineEventHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIRtcEngineEventHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIRtcEngineEventHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIRtcEngineEventHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIRtcEngineEventHandler(UIRtcEngineEventHandler&&); \
	NO_API UIRtcEngineEventHandler(const UIRtcEngineEventHandler&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIRtcEngineEventHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIRtcEngineEventHandler(UIRtcEngineEventHandler&&); \
	NO_API UIRtcEngineEventHandler(const UIRtcEngineEventHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIRtcEngineEventHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIRtcEngineEventHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIRtcEngineEventHandler)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_116_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIRtcEngineEventHandler>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_RPC_WRAPPERS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMetadataObserver(); \
	friend struct Z_Construct_UClass_UIMetadataObserver_Statics; \
public: \
	DECLARE_CLASS(UIMetadataObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMetadataObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_INCLASS \
private: \
	static void StaticRegisterNativesUIMetadataObserver(); \
	friend struct Z_Construct_UClass_UIMetadataObserver_Statics; \
public: \
	DECLARE_CLASS(UIMetadataObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMetadataObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMetadataObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMetadataObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMetadataObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMetadataObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMetadataObserver(UIMetadataObserver&&); \
	NO_API UIMetadataObserver(const UIMetadataObserver&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMetadataObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMetadataObserver(UIMetadataObserver&&); \
	NO_API UIMetadataObserver(const UIMetadataObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMetadataObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMetadataObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMetadataObserver)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_509_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_512_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMetadataObserver>();

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_RPC_WRAPPERS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIDirectCdnStreamingEventHandler(); \
	friend struct Z_Construct_UClass_UIDirectCdnStreamingEventHandler_Statics; \
public: \
	DECLARE_CLASS(UIDirectCdnStreamingEventHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIDirectCdnStreamingEventHandler)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_INCLASS \
private: \
	static void StaticRegisterNativesUIDirectCdnStreamingEventHandler(); \
	friend struct Z_Construct_UClass_UIDirectCdnStreamingEventHandler_Statics; \
public: \
	DECLARE_CLASS(UIDirectCdnStreamingEventHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIDirectCdnStreamingEventHandler)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIDirectCdnStreamingEventHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIDirectCdnStreamingEventHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIDirectCdnStreamingEventHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIDirectCdnStreamingEventHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIDirectCdnStreamingEventHandler(UIDirectCdnStreamingEventHandler&&); \
	NO_API UIDirectCdnStreamingEventHandler(const UIDirectCdnStreamingEventHandler&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIDirectCdnStreamingEventHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIDirectCdnStreamingEventHandler(UIDirectCdnStreamingEventHandler&&); \
	NO_API UIDirectCdnStreamingEventHandler(const UIDirectCdnStreamingEventHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIDirectCdnStreamingEventHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIDirectCdnStreamingEventHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIDirectCdnStreamingEventHandler)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_532_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h_535_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIDirectCdnStreamingEventHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
