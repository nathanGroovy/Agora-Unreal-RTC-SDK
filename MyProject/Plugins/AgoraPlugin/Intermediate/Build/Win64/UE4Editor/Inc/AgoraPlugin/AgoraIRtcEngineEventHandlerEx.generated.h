// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRtcConnection;
enum class EMEDIA_TRACE_EVENT : uint8;
struct FVideoRenderingTracingInfo;
enum class EUPLOAD_ERROR_REASON : uint8;
enum class EENCRYPTION_ERROR_TYPE : uint8;
struct FENUMWRAP_NETWORK_TYPE;
struct FWlAccStats;
enum class EWLACC_MESSAGE_REASON : uint8;
enum class EWLACC_SUGGEST_ACTION : uint8;
enum class ECONNECTION_STATE_TYPE : uint8;
enum class ECONNECTION_CHANGED_REASON_TYPE : uint8;
enum class ECLIENT_ROLE_CHANGE_FAILED_REASON : uint8;
enum class ECLIENT_ROLE_TYPE : uint8;
struct FClientRoleOptions;
enum class EREMOTE_AUDIO_STATE : uint8;
enum class EREMOTE_AUDIO_STATE_REASON : uint8;
enum class ELOCAL_AUDIO_STREAM_STATE : uint8;
enum class ELOCAL_AUDIO_STREAM_ERROR : uint8;
enum class ELICENSE_ERROR_TYPE : uint8;
struct FRemoteVideoStats;
struct FLocalVideoStats;
struct FRemoteAudioStats;
struct FLocalAudioStats;
enum class EUSER_OFFLINE_REASON_TYPE : uint8;
enum class EREMOTE_VIDEO_STATE : uint8;
enum class EREMOTE_VIDEO_STATE_REASON : uint8;
enum class ELOCAL_VIDEO_STREAM_STATE : uint8;
enum class ELOCAL_VIDEO_STREAM_ERROR : uint8;
enum class EVIDEO_SOURCE_TYPE : uint8;
struct FRtcStats;
struct FAudioVolumeInfo;
#ifdef AGORAPLUGIN_AgoraIRtcEngineEventHandlerEx_generated_h
#error "AgoraIRtcEngineEventHandlerEx.generated.h already included, missing '#pragma once' in AgoraIRtcEngineEventHandlerEx.h"
#endif
#define AGORAPLUGIN_AgoraIRtcEngineEventHandlerEx_generated_h

#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_65_DELEGATE \
struct _Script_AgoraPlugin_eventOnVideoRenderingTracingResultEx_Parms \
{ \
	FRtcConnection connection; \
	int64 uid; \
	EMEDIA_TRACE_EVENT currentEvent; \
	FVideoRenderingTracingInfo tracingInfo; \
}; \
static inline void FOnVideoRenderingTracingResultEx_DelegateWrapper(const FMulticastScriptDelegate& OnVideoRenderingTracingResultEx, FRtcConnection const& connection, int64 uid, EMEDIA_TRACE_EVENT currentEvent, FVideoRenderingTracingInfo tracingInfo) \
{ \
	_Script_AgoraPlugin_eventOnVideoRenderingTracingResultEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.uid=uid; \
	Parms.currentEvent=currentEvent; \
	Parms.tracingInfo=tracingInfo; \
	OnVideoRenderingTracingResultEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_64_DELEGATE \
struct _Script_AgoraPlugin_eventOnSnapshotTakenEx_Parms \
{ \
	FRtcConnection connection; \
	int64 uid; \
	FString filePath; \
	int32 width; \
	int32 height; \
	int32 errCode; \
}; \
static inline void FOnSnapshotTakenEx_DelegateWrapper(const FMulticastScriptDelegate& OnSnapshotTakenEx, FRtcConnection const& connection, int64 uid, const FString& filePath, int32 width, int32 height, int32 errCode) \
{ \
	_Script_AgoraPlugin_eventOnSnapshotTakenEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.uid=uid; \
	Parms.filePath=filePath; \
	Parms.width=width; \
	Parms.height=height; \
	Parms.errCode=errCode; \
	OnSnapshotTakenEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_63_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserAccountUpdatedEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	FString userAccount; \
}; \
static inline void FOnUserAccountUpdatedEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserAccountUpdatedEx, FRtcConnection const& connection, int64 remoteUid, const FString& userAccount) \
{ \
	_Script_AgoraPlugin_eventOnUserAccountUpdatedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.userAccount=userAccount; \
	OnUserAccountUpdatedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_62_DELEGATE \
struct _Script_AgoraPlugin_eventOnUploadLogResultEx_Parms \
{ \
	FRtcConnection connection; \
	FString requestId; \
	bool success; \
	EUPLOAD_ERROR_REASON reason; \
}; \
static inline void FOnUploadLogResultEx_DelegateWrapper(const FMulticastScriptDelegate& OnUploadLogResultEx, FRtcConnection const& connection, const FString& requestId, bool success, EUPLOAD_ERROR_REASON reason) \
{ \
	_Script_AgoraPlugin_eventOnUploadLogResultEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.requestId=requestId; \
	Parms.success=success ? true : false; \
	Parms.reason=reason; \
	OnUploadLogResultEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_61_DELEGATE \
struct _Script_AgoraPlugin_eventOnEncryptionErrorEx_Parms \
{ \
	FRtcConnection connection; \
	EENCRYPTION_ERROR_TYPE errorType; \
}; \
static inline void FOnEncryptionErrorEx_DelegateWrapper(const FMulticastScriptDelegate& OnEncryptionErrorEx, FRtcConnection const& connection, EENCRYPTION_ERROR_TYPE errorType) \
{ \
	_Script_AgoraPlugin_eventOnEncryptionErrorEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.errorType=errorType; \
	OnEncryptionErrorEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_60_DELEGATE \
struct _Script_AgoraPlugin_eventOnNetworkTypeChangedEx_Parms \
{ \
	FRtcConnection connection; \
	FENUMWRAP_NETWORK_TYPE type; \
}; \
static inline void FOnNetworkTypeChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnNetworkTypeChangedEx, FRtcConnection const& connection, FENUMWRAP_NETWORK_TYPE type) \
{ \
	_Script_AgoraPlugin_eventOnNetworkTypeChangedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.type=type; \
	OnNetworkTypeChangedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_59_DELEGATE \
struct _Script_AgoraPlugin_eventOnWlAccStatsEx_Parms \
{ \
	FRtcConnection connection; \
	FWlAccStats currentStats; \
	FWlAccStats averageStats; \
}; \
static inline void FOnWlAccStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnWlAccStatsEx, FRtcConnection const& connection, FWlAccStats currentStats, FWlAccStats averageStats) \
{ \
	_Script_AgoraPlugin_eventOnWlAccStatsEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.currentStats=currentStats; \
	Parms.averageStats=averageStats; \
	OnWlAccStatsEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_58_DELEGATE \
struct _Script_AgoraPlugin_eventOnWlAccMessageEx_Parms \
{ \
	FRtcConnection connection; \
	EWLACC_MESSAGE_REASON reason; \
	EWLACC_SUGGEST_ACTION action; \
	FString wlAccMsg; \
}; \
static inline void FOnWlAccMessageEx_DelegateWrapper(const FMulticastScriptDelegate& OnWlAccMessageEx, FRtcConnection const& connection, EWLACC_MESSAGE_REASON reason, EWLACC_SUGGEST_ACTION action, const FString& wlAccMsg) \
{ \
	_Script_AgoraPlugin_eventOnWlAccMessageEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.reason=reason; \
	Parms.action=action; \
	Parms.wlAccMsg=wlAccMsg; \
	OnWlAccMessageEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_57_DELEGATE \
struct _Script_AgoraPlugin_eventOnConnectionStateChangedEx_Parms \
{ \
	FRtcConnection connection; \
	ECONNECTION_STATE_TYPE state; \
	ECONNECTION_CHANGED_REASON_TYPE reason; \
}; \
static inline void FOnConnectionStateChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionStateChangedEx, FRtcConnection const& connection, ECONNECTION_STATE_TYPE state, ECONNECTION_CHANGED_REASON_TYPE reason) \
{ \
	_Script_AgoraPlugin_eventOnConnectionStateChangedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.state=state; \
	Parms.reason=reason; \
	OnConnectionStateChangedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_56_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteVideoTransportStatsEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	int32 delay; \
	int32 lost; \
	int32 rxKBitRate; \
}; \
static inline void FOnRemoteVideoTransportStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteVideoTransportStatsEx, FRtcConnection const& connection, int64 remoteUid, int32 delay, int32 lost, int32 rxKBitRate) \
{ \
	_Script_AgoraPlugin_eventOnRemoteVideoTransportStatsEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.delay=delay; \
	Parms.lost=lost; \
	Parms.rxKBitRate=rxKBitRate; \
	OnRemoteVideoTransportStatsEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_55_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteAudioTransportStatsEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	int32 delay; \
	int32 lost; \
	int32 rxKBitRate; \
}; \
static inline void FOnRemoteAudioTransportStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteAudioTransportStatsEx, FRtcConnection const& connection, int64 remoteUid, int32 delay, int32 lost, int32 rxKBitRate) \
{ \
	_Script_AgoraPlugin_eventOnRemoteAudioTransportStatsEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.delay=delay; \
	Parms.lost=lost; \
	Parms.rxKBitRate=rxKBitRate; \
	OnRemoteAudioTransportStatsEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_54_DELEGATE \
struct _Script_AgoraPlugin_eventOnClientRoleChangeFailedEx_Parms \
{ \
	FRtcConnection connection; \
	ECLIENT_ROLE_CHANGE_FAILED_REASON reason; \
	ECLIENT_ROLE_TYPE currentRole; \
}; \
static inline void FOnClientRoleChangeFailedEx_DelegateWrapper(const FMulticastScriptDelegate& OnClientRoleChangeFailedEx, FRtcConnection const& connection, ECLIENT_ROLE_CHANGE_FAILED_REASON reason, ECLIENT_ROLE_TYPE currentRole) \
{ \
	_Script_AgoraPlugin_eventOnClientRoleChangeFailedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.reason=reason; \
	Parms.currentRole=currentRole; \
	OnClientRoleChangeFailedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_53_DELEGATE \
struct _Script_AgoraPlugin_eventOnClientRoleChangedEx_Parms \
{ \
	FRtcConnection connection; \
	ECLIENT_ROLE_TYPE oldRole; \
	ECLIENT_ROLE_TYPE newRole; \
	FClientRoleOptions newRoleOptions; \
}; \
static inline void FOnClientRoleChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnClientRoleChangedEx, FRtcConnection const& connection, ECLIENT_ROLE_TYPE oldRole, ECLIENT_ROLE_TYPE newRole, FClientRoleOptions const& newRoleOptions) \
{ \
	_Script_AgoraPlugin_eventOnClientRoleChangedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.oldRole=oldRole; \
	Parms.newRole=newRole; \
	Parms.newRoleOptions=newRoleOptions; \
	OnClientRoleChangedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_52_DELEGATE \
struct _Script_AgoraPlugin_eventOnActiveSpeakerEx_Parms \
{ \
	FRtcConnection connection; \
	int64 uid; \
}; \
static inline void FOnActiveSpeakerEx_DelegateWrapper(const FMulticastScriptDelegate& OnActiveSpeakerEx, FRtcConnection const& connection, int64 uid) \
{ \
	_Script_AgoraPlugin_eventOnActiveSpeakerEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.uid=uid; \
	OnActiveSpeakerEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_51_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteAudioStateChangedEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	EREMOTE_AUDIO_STATE state; \
	EREMOTE_AUDIO_STATE_REASON reason; \
	int32 elapsed; \
}; \
static inline void FOnRemoteAudioStateChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteAudioStateChangedEx, FRtcConnection const& connection, int64 remoteUid, EREMOTE_AUDIO_STATE state, EREMOTE_AUDIO_STATE_REASON reason, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnRemoteAudioStateChangedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.state=state; \
	Parms.reason=reason; \
	Parms.elapsed=elapsed; \
	OnRemoteAudioStateChangedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_50_DELEGATE \
struct _Script_AgoraPlugin_eventOnLocalAudioStateChangedEx_Parms \
{ \
	FRtcConnection connection; \
	ELOCAL_AUDIO_STREAM_STATE state; \
	ELOCAL_AUDIO_STREAM_ERROR error; \
}; \
static inline void FOnLocalAudioStateChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnLocalAudioStateChangedEx, FRtcConnection const& connection, ELOCAL_AUDIO_STREAM_STATE state, ELOCAL_AUDIO_STREAM_ERROR error) \
{ \
	_Script_AgoraPlugin_eventOnLocalAudioStateChangedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.state=state; \
	Parms.error=error; \
	OnLocalAudioStateChangedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_49_DELEGATE \
struct _Script_AgoraPlugin_eventOnFirstRemoteAudioDecodedEx_Parms \
{ \
	FRtcConnection connection; \
	int64 uid; \
	int32 elapsed; \
}; \
static inline void FOnFirstRemoteAudioDecodedEx_DelegateWrapper(const FMulticastScriptDelegate& OnFirstRemoteAudioDecodedEx, FRtcConnection const& connection, int64 uid, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnFirstRemoteAudioDecodedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.uid=uid; \
	Parms.elapsed=elapsed; \
	OnFirstRemoteAudioDecodedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_48_DELEGATE \
struct _Script_AgoraPlugin_eventOnFirstRemoteAudioFrameEx_Parms \
{ \
	FRtcConnection connection; \
	int64 userId; \
	int32 elapsed; \
}; \
static inline void FOnFirstRemoteAudioFrameEx_DelegateWrapper(const FMulticastScriptDelegate& OnFirstRemoteAudioFrameEx, FRtcConnection const& connection, int64 userId, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnFirstRemoteAudioFrameEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.userId=userId; \
	Parms.elapsed=elapsed; \
	OnFirstRemoteAudioFrameEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_47_DELEGATE \
struct _Script_AgoraPlugin_eventOnFirstLocalAudioFramePublishedEx_Parms \
{ \
	FRtcConnection connection; \
	int32 elapsed; \
}; \
static inline void FOnFirstLocalAudioFramePublishedEx_DelegateWrapper(const FMulticastScriptDelegate& OnFirstLocalAudioFramePublishedEx, FRtcConnection const& connection, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnFirstLocalAudioFramePublishedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.elapsed=elapsed; \
	OnFirstLocalAudioFramePublishedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_46_DELEGATE \
struct _Script_AgoraPlugin_eventOnTokenPrivilegeWillExpireEx_Parms \
{ \
	FRtcConnection connection; \
	FString token; \
}; \
static inline void FOnTokenPrivilegeWillExpireEx_DelegateWrapper(const FMulticastScriptDelegate& OnTokenPrivilegeWillExpireEx, FRtcConnection const& connection, const FString& token) \
{ \
	_Script_AgoraPlugin_eventOnTokenPrivilegeWillExpireEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.token=token; \
	OnTokenPrivilegeWillExpireEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_45_DELEGATE \
struct _Script_AgoraPlugin_eventOnLicenseValidationFailureEx_Parms \
{ \
	FRtcConnection connection; \
	ELICENSE_ERROR_TYPE reason; \
}; \
static inline void FOnLicenseValidationFailureEx_DelegateWrapper(const FMulticastScriptDelegate& OnLicenseValidationFailureEx, FRtcConnection const& connection, ELICENSE_ERROR_TYPE reason) \
{ \
	_Script_AgoraPlugin_eventOnLicenseValidationFailureEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.reason=reason; \
	OnLicenseValidationFailureEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_44_DELEGATE \
struct _Script_AgoraPlugin_eventOnRequestTokenEx_Parms \
{ \
	FRtcConnection connection; \
}; \
static inline void FOnRequestTokenEx_DelegateWrapper(const FMulticastScriptDelegate& OnRequestTokenEx, FRtcConnection const& connection) \
{ \
	_Script_AgoraPlugin_eventOnRequestTokenEx_Parms Parms; \
	Parms.connection=connection; \
	OnRequestTokenEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_43_DELEGATE \
struct _Script_AgoraPlugin_eventOnStreamMessageErrorEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	int32 streamId; \
	int32 code; \
	int32 missed; \
	int32 cached; \
}; \
static inline void FOnStreamMessageErrorEx_DelegateWrapper(const FMulticastScriptDelegate& OnStreamMessageErrorEx, FRtcConnection const& connection, int64 remoteUid, int32 streamId, int32 code, int32 missed, int32 cached) \
{ \
	_Script_AgoraPlugin_eventOnStreamMessageErrorEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.streamId=streamId; \
	Parms.code=code; \
	Parms.missed=missed; \
	Parms.cached=cached; \
	OnStreamMessageErrorEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_42_DELEGATE \
struct _Script_AgoraPlugin_eventOnStreamMessageEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	int32 streamId; \
	FString data; \
	int64 length; \
	int64 sentTs; \
}; \
static inline void FOnStreamMessageEx_DelegateWrapper(const FMulticastScriptDelegate& OnStreamMessageEx, FRtcConnection const& connection, int64 remoteUid, int32 streamId, const FString& data, int64 length, int64 sentTs) \
{ \
	_Script_AgoraPlugin_eventOnStreamMessageEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.streamId=streamId; \
	Parms.data=data; \
	Parms.length=length; \
	Parms.sentTs=sentTs; \
	OnStreamMessageEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_41_DELEGATE \
struct _Script_AgoraPlugin_eventOnConnectionBannedEx_Parms \
{ \
	FRtcConnection connection; \
}; \
static inline void FOnConnectionBannedEx_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionBannedEx, FRtcConnection const& connection) \
{ \
	_Script_AgoraPlugin_eventOnConnectionBannedEx_Parms Parms; \
	Parms.connection=connection; \
	OnConnectionBannedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_40_DELEGATE \
struct _Script_AgoraPlugin_eventOnConnectionInterruptedEx_Parms \
{ \
	FRtcConnection connection; \
}; \
static inline void FOnConnectionInterruptedEx_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionInterruptedEx, FRtcConnection const& connection) \
{ \
	_Script_AgoraPlugin_eventOnConnectionInterruptedEx_Parms Parms; \
	Parms.connection=connection; \
	OnConnectionInterruptedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_39_DELEGATE \
struct _Script_AgoraPlugin_eventOnConnectionLostEx_Parms \
{ \
	FRtcConnection connection; \
}; \
static inline void FOnConnectionLostEx_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionLostEx, FRtcConnection const& connection) \
{ \
	_Script_AgoraPlugin_eventOnConnectionLostEx_Parms Parms; \
	Parms.connection=connection; \
	OnConnectionLostEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_38_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteVideoStatsEx_Parms \
{ \
	FRtcConnection connection; \
	FRemoteVideoStats stats; \
}; \
static inline void FOnRemoteVideoStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteVideoStatsEx, FRtcConnection const& connection, FRemoteVideoStats const& stats) \
{ \
	_Script_AgoraPlugin_eventOnRemoteVideoStatsEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.stats=stats; \
	OnRemoteVideoStatsEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_37_DELEGATE \
struct _Script_AgoraPlugin_eventOnLocalVideoStatsEx_Parms \
{ \
	FRtcConnection connection; \
	FLocalVideoStats stats; \
}; \
static inline void FOnLocalVideoStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnLocalVideoStatsEx, FRtcConnection const& connection, FLocalVideoStats const& stats) \
{ \
	_Script_AgoraPlugin_eventOnLocalVideoStatsEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.stats=stats; \
	OnLocalVideoStatsEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_36_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteAudioStatsEx_Parms \
{ \
	FRtcConnection connection; \
	FRemoteAudioStats stats; \
}; \
static inline void FOnRemoteAudioStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteAudioStatsEx, FRtcConnection const& connection, FRemoteAudioStats const& stats) \
{ \
	_Script_AgoraPlugin_eventOnRemoteAudioStatsEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.stats=stats; \
	OnRemoteAudioStatsEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_35_DELEGATE \
struct _Script_AgoraPlugin_eventOnLocalAudioStatsEx_Parms \
{ \
	FRtcConnection connection; \
	FLocalAudioStats stats; \
}; \
static inline void FOnLocalAudioStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnLocalAudioStatsEx, FRtcConnection const& connection, FLocalAudioStats const& stats) \
{ \
	_Script_AgoraPlugin_eventOnLocalAudioStatsEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.stats=stats; \
	OnLocalAudioStatsEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_34_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserStateChangedEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	int32 state; \
}; \
static inline void FOnUserStateChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserStateChangedEx, FRtcConnection const& connection, int64 remoteUid, int32 state) \
{ \
	_Script_AgoraPlugin_eventOnUserStateChangedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.state=state; \
	OnUserStateChangedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_33_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserEnableLocalVideoEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	bool enabled; \
}; \
static inline void FOnUserEnableLocalVideoEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserEnableLocalVideoEx, FRtcConnection const& connection, int64 remoteUid, bool enabled) \
{ \
	_Script_AgoraPlugin_eventOnUserEnableLocalVideoEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.enabled=enabled ? true : false; \
	OnUserEnableLocalVideoEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_32_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserEnableVideoEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	bool enabled; \
}; \
static inline void FOnUserEnableVideoEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserEnableVideoEx, FRtcConnection const& connection, int64 remoteUid, bool enabled) \
{ \
	_Script_AgoraPlugin_eventOnUserEnableVideoEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.enabled=enabled ? true : false; \
	OnUserEnableVideoEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_31_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserMuteVideoEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	bool muted; \
}; \
static inline void FOnUserMuteVideoEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserMuteVideoEx, FRtcConnection const& connection, int64 remoteUid, bool muted) \
{ \
	_Script_AgoraPlugin_eventOnUserMuteVideoEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.muted=muted ? true : false; \
	OnUserMuteVideoEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_30_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserMuteAudioEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	bool muted; \
}; \
static inline void FOnUserMuteAudioEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserMuteAudioEx, FRtcConnection const& connection, int64 remoteUid, bool muted) \
{ \
	_Script_AgoraPlugin_eventOnUserMuteAudioEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.muted=muted ? true : false; \
	OnUserMuteAudioEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_29_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserOfflineEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	EUSER_OFFLINE_REASON_TYPE reason; \
}; \
static inline void FOnUserOfflineEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserOfflineEx, FRtcConnection const& connection, int64 remoteUid, EUSER_OFFLINE_REASON_TYPE reason) \
{ \
	_Script_AgoraPlugin_eventOnUserOfflineEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.reason=reason; \
	OnUserOfflineEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_28_DELEGATE \
struct _Script_AgoraPlugin_eventOnUserJoinedEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	int32 elapsed; \
}; \
static inline void FOnUserJoinedEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserJoinedEx, FRtcConnection const& connection, int64 remoteUid, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnUserJoinedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.elapsed=elapsed; \
	OnUserJoinedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_27_DELEGATE \
struct _Script_AgoraPlugin_eventOnFirstRemoteVideoFrameEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	int32 width; \
	int32 height; \
	int32 elapsed; \
}; \
static inline void FOnFirstRemoteVideoFrameEx_DelegateWrapper(const FMulticastScriptDelegate& OnFirstRemoteVideoFrameEx, FRtcConnection const& connection, int64 remoteUid, int32 width, int32 height, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnFirstRemoteVideoFrameEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.width=width; \
	Parms.height=height; \
	Parms.elapsed=elapsed; \
	OnFirstRemoteVideoFrameEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_26_DELEGATE \
struct _Script_AgoraPlugin_eventOnRemoteVideoStateChangedEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	EREMOTE_VIDEO_STATE state; \
	EREMOTE_VIDEO_STATE_REASON reason; \
	int32 elapsed; \
}; \
static inline void FOnRemoteVideoStateChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteVideoStateChangedEx, FRtcConnection const& connection, int64 remoteUid, EREMOTE_VIDEO_STATE state, EREMOTE_VIDEO_STATE_REASON reason, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnRemoteVideoStateChangedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.state=state; \
	Parms.reason=reason; \
	Parms.elapsed=elapsed; \
	OnRemoteVideoStateChangedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_25_DELEGATE \
struct _Script_AgoraPlugin_eventOnLocalVideoStateChangedEx_Parms \
{ \
	FRtcConnection connection; \
	ELOCAL_VIDEO_STREAM_STATE state; \
	ELOCAL_VIDEO_STREAM_ERROR errorCode; \
}; \
static inline void FOnLocalVideoStateChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnLocalVideoStateChangedEx, FRtcConnection const& connection, ELOCAL_VIDEO_STREAM_STATE state, ELOCAL_VIDEO_STREAM_ERROR errorCode) \
{ \
	_Script_AgoraPlugin_eventOnLocalVideoStateChangedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.state=state; \
	Parms.errorCode=errorCode; \
	OnLocalVideoStateChangedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_24_DELEGATE \
struct _Script_AgoraPlugin_eventOnVideoSizeChangedEx_Parms \
{ \
	FRtcConnection connection; \
	EVIDEO_SOURCE_TYPE sourceType; \
	int64 uid; \
	int32 width; \
	int32 height; \
	int32 rotation; \
}; \
static inline void FOnVideoSizeChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnVideoSizeChangedEx, FRtcConnection const& connection, EVIDEO_SOURCE_TYPE sourceType, int64 uid, int32 width, int32 height, int32 rotation) \
{ \
	_Script_AgoraPlugin_eventOnVideoSizeChangedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.sourceType=sourceType; \
	Parms.uid=uid; \
	Parms.width=width; \
	Parms.height=height; \
	Parms.rotation=rotation; \
	OnVideoSizeChangedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_23_DELEGATE \
struct _Script_AgoraPlugin_eventOnFirstRemoteVideoDecodedEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	int32 width; \
	int32 height; \
	int32 elapsed; \
}; \
static inline void FOnFirstRemoteVideoDecodedEx_DelegateWrapper(const FMulticastScriptDelegate& OnFirstRemoteVideoDecodedEx, FRtcConnection const& connection, int64 remoteUid, int32 width, int32 height, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnFirstRemoteVideoDecodedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.width=width; \
	Parms.height=height; \
	Parms.elapsed=elapsed; \
	OnFirstRemoteVideoDecodedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_22_DELEGATE \
struct _Script_AgoraPlugin_eventOnVideoSourceFrameSizeChangedEx_Parms \
{ \
	FRtcConnection connection; \
	EVIDEO_SOURCE_TYPE sourceType; \
	int32 width; \
	int32 height; \
}; \
static inline void FOnVideoSourceFrameSizeChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnVideoSourceFrameSizeChangedEx, FRtcConnection const& connection, EVIDEO_SOURCE_TYPE sourceType, int32 width, int32 height) \
{ \
	_Script_AgoraPlugin_eventOnVideoSourceFrameSizeChangedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.sourceType=sourceType; \
	Parms.width=width; \
	Parms.height=height; \
	OnVideoSourceFrameSizeChangedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_21_DELEGATE \
struct _Script_AgoraPlugin_eventOnFirstLocalVideoFramePublishedEx_Parms \
{ \
	FRtcConnection connection; \
	int32 elapsed; \
}; \
static inline void FOnFirstLocalVideoFramePublishedEx_DelegateWrapper(const FMulticastScriptDelegate& OnFirstLocalVideoFramePublishedEx, FRtcConnection const& connection, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnFirstLocalVideoFramePublishedEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.elapsed=elapsed; \
	OnFirstLocalVideoFramePublishedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_20_DELEGATE \
struct _Script_AgoraPlugin_eventOnIntraRequestReceivedEx_Parms \
{ \
	FRtcConnection connection; \
}; \
static inline void FOnIntraRequestReceivedEx_DelegateWrapper(const FMulticastScriptDelegate& OnIntraRequestReceivedEx, FRtcConnection const& connection) \
{ \
	_Script_AgoraPlugin_eventOnIntraRequestReceivedEx_Parms Parms; \
	Parms.connection=connection; \
	OnIntraRequestReceivedEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_19_DELEGATE \
struct _Script_AgoraPlugin_eventOnNetworkQualityEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	int32 txQuality; \
	int32 rxQuality; \
}; \
static inline void FOnNetworkQualityEx_DelegateWrapper(const FMulticastScriptDelegate& OnNetworkQualityEx, FRtcConnection const& connection, int64 remoteUid, int32 txQuality, int32 rxQuality) \
{ \
	_Script_AgoraPlugin_eventOnNetworkQualityEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.txQuality=txQuality; \
	Parms.rxQuality=rxQuality; \
	OnNetworkQualityEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_18_DELEGATE \
struct _Script_AgoraPlugin_eventOnRtcStatsEx_Parms \
{ \
	FRtcConnection connection; \
	FRtcStats stats; \
}; \
static inline void FOnRtcStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnRtcStatsEx, FRtcConnection const& connection, FRtcStats const& stats) \
{ \
	_Script_AgoraPlugin_eventOnRtcStatsEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.stats=stats; \
	OnRtcStatsEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_17_DELEGATE \
struct _Script_AgoraPlugin_eventOnLeaveChannelEx_Parms \
{ \
	FRtcConnection connection; \
	FRtcStats stats; \
}; \
static inline void FOnLeaveChannelEx_DelegateWrapper(const FMulticastScriptDelegate& OnLeaveChannelEx, FRtcConnection const& connection, FRtcStats const& stats) \
{ \
	_Script_AgoraPlugin_eventOnLeaveChannelEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.stats=stats; \
	OnLeaveChannelEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_16_DELEGATE \
struct _Script_AgoraPlugin_eventOnAudioVolumeIndicationEx_Parms \
{ \
	FRtcConnection connection; \
	TArray<FAudioVolumeInfo> speakers; \
	int32 totalVolume; \
}; \
static inline void FOnAudioVolumeIndicationEx_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVolumeIndicationEx, FRtcConnection const& connection, TArray<FAudioVolumeInfo> const& speakers, int32 totalVolume) \
{ \
	_Script_AgoraPlugin_eventOnAudioVolumeIndicationEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.speakers=speakers; \
	Parms.totalVolume=totalVolume; \
	OnAudioVolumeIndicationEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_15_DELEGATE \
struct _Script_AgoraPlugin_eventOnAudioQualityEx_Parms \
{ \
	FRtcConnection connection; \
	int64 remoteUid; \
	int32 quality; \
	int32 delay; \
	int32 lost; \
}; \
static inline void FOnAudioQualityEx_DelegateWrapper(const FMulticastScriptDelegate& OnAudioQualityEx, FRtcConnection const& connection, int64 remoteUid, int32 quality, int32 delay, int32 lost) \
{ \
	_Script_AgoraPlugin_eventOnAudioQualityEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.remoteUid=remoteUid; \
	Parms.quality=quality; \
	Parms.delay=delay; \
	Parms.lost=lost; \
	OnAudioQualityEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_14_DELEGATE \
struct _Script_AgoraPlugin_eventOnRejoinChannelSuccessEx_Parms \
{ \
	FRtcConnection connection; \
	int32 elapsed; \
}; \
static inline void FOnRejoinChannelSuccessEx_DelegateWrapper(const FMulticastScriptDelegate& OnRejoinChannelSuccessEx, FRtcConnection const& connection, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnRejoinChannelSuccessEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.elapsed=elapsed; \
	OnRejoinChannelSuccessEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_13_DELEGATE \
struct _Script_AgoraPlugin_eventOnJoinChannelSuccessEx_Parms \
{ \
	FRtcConnection connection; \
	int32 elapsed; \
}; \
static inline void FOnJoinChannelSuccessEx_DelegateWrapper(const FMulticastScriptDelegate& OnJoinChannelSuccessEx, FRtcConnection const& connection, int32 elapsed) \
{ \
	_Script_AgoraPlugin_eventOnJoinChannelSuccessEx_Parms Parms; \
	Parms.connection=connection; \
	Parms.elapsed=elapsed; \
	OnJoinChannelSuccessEx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_SPARSE_DATA
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_RPC_WRAPPERS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIRtcEngineEventHandlerEx(); \
	friend struct Z_Construct_UClass_UIRtcEngineEventHandlerEx_Statics; \
public: \
	DECLARE_CLASS(UIRtcEngineEventHandlerEx, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIRtcEngineEventHandlerEx)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUIRtcEngineEventHandlerEx(); \
	friend struct Z_Construct_UClass_UIRtcEngineEventHandlerEx_Statics; \
public: \
	DECLARE_CLASS(UIRtcEngineEventHandlerEx, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIRtcEngineEventHandlerEx)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIRtcEngineEventHandlerEx(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIRtcEngineEventHandlerEx) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIRtcEngineEventHandlerEx); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIRtcEngineEventHandlerEx); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIRtcEngineEventHandlerEx(UIRtcEngineEventHandlerEx&&); \
	NO_API UIRtcEngineEventHandlerEx(const UIRtcEngineEventHandlerEx&); \
public:


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIRtcEngineEventHandlerEx(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIRtcEngineEventHandlerEx(UIRtcEngineEventHandlerEx&&); \
	NO_API UIRtcEngineEventHandlerEx(const UIRtcEngineEventHandlerEx&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIRtcEngineEventHandlerEx); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIRtcEngineEventHandlerEx); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIRtcEngineEventHandlerEx)


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_69_PROLOG
#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_RPC_WRAPPERS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_INCLASS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_SPARSE_DATA \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIRtcEngineEventHandlerEx>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIRtcEngineEventHandlerEx_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
