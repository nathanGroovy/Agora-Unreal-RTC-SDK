// Fill out your copyright notice in the Description page of Project Settings.


#include "ChannelMediaRelayWidget.h"

void UChannelMediaRelayWidget::InitAgoraWidget(FString APP_ID, FString TOKEN, FString CHANNEL_NAME)
{
	LogMsgViewPtr = UBFL_Logger::CreateLogView(CanvasPanel_LogMsgView, DraggableLogMsgViewTemplate);

	CheckPermission();

	InitAgoraEngine(APP_ID, TOKEN, CHANNEL_NAME);

	JoinChannel();
}

void UChannelMediaRelayWidget::CheckPermission()
{
#if PLATFORM_ANDROID
	FString TargetPlatformName = UGameplayStatics::GetPlatformName();
	if (TargetPlatformName == "Android")
	{
		TArray<FString> AndroidPermission;
#if !AGORA_UESDK_AUDIO_ONLY || (!(PLATFORM_ANDROID || PLATFORM_IOS))
		AndroidPermission.Add(FString("android.permission.CAMERA"));
#endif
		AndroidPermission.Add(FString("android.permission.RECORD_AUDIO"));
		AndroidPermission.Add(FString("android.permission.READ_PHONE_STATE"));
		AndroidPermission.Add(FString("android.permission.WRITE_EXTERNAL_STORAGE"));
		UAndroidPermissionFunctionLibrary::AcquirePermissions(AndroidPermission);
	}
#endif
}

void UChannelMediaRelayWidget::InitAgoraEngine(FString APP_ID, FString TOKEN, FString CHANNEL_NAME)
{
	agora::rtc::RtcEngineContext RtcEngineContext;

	UserRtcEventHandlerEx = MakeShared<FUserRtcEventHandlerEx>(this);
	std::string StdStrAppId = TCHAR_TO_UTF8(*APP_ID);
	RtcEngineContext.appId = StdStrAppId.c_str();
	RtcEngineContext.eventHandler = UserRtcEventHandlerEx.Get();
	RtcEngineContext.channelProfile = agora::CHANNEL_PROFILE_TYPE::CHANNEL_PROFILE_LIVE_BROADCASTING;

	AppId = APP_ID;
	Token = TOKEN;
	ChannelName = CHANNEL_NAME;

	RtcEngineProxy = agora::rtc::ue::createAgoraRtcEngineEx();

	int SDKBuild = 0;
	FString SDKInfo = FString::Printf(TEXT("SDK Version: %s Build: %d"), UTF8_TO_TCHAR(RtcEngineProxy->getVersion(&SDKBuild)), SDKBuild);
	UBFL_Logger::Print(FString::Printf(TEXT("SDK Info:  %s"), *SDKInfo), LogMsgViewPtr);

	int ret = RtcEngineProxy->initialize(RtcEngineContext);
	UBFL_Logger::Print(FString::Printf(TEXT("%s ret %d"), *FString(FUNCTION_MACRO), ret), LogMsgViewPtr);

}

void UChannelMediaRelayWidget::JoinChannel()
{
	RtcEngineProxy->enableAudio();
	RtcEngineProxy->enableVideo();
	RtcEngineProxy->setClientRole(CLIENT_ROLE_BROADCASTER);
	int ret = RtcEngineProxy->joinChannel(TCHAR_TO_UTF8(*Token), TCHAR_TO_UTF8(*ChannelName), "", 0);
	UBFL_Logger::Print(FString::Printf(TEXT("%s ret %d"), *FString(FUNCTION_MACRO), ret), LogMsgViewPtr);
}



void UChannelMediaRelayWidget::OnBtnStartClicked()
{
	/*
		Starts relaying media streams across channels or updates channels for media relay.
		Details:
			The first successful call to this method starts relaying media streams from the source channel to the destination channels. To relay the media stream to other channels, or exit one of the current media relays, you can call this method again to update the destination channels.
	*/


	ChannelMediaRelayConfiguration Config;
	TArray<ChannelMediaInfo> SrcChannelMediaInfoList;
	ChannelMediaInfo OneSrcMediaInfo;
	std::string StdStrChannelName = TCHAR_TO_UTF8(*ChannelName);
	OneSrcMediaInfo.channelName = StdStrChannelName.c_str();
	OneSrcMediaInfo.uid = 0;
	std::string StdStrToken = TCHAR_TO_UTF8(*Token);
	OneSrcMediaInfo.token = StdStrToken.c_str();
	SrcChannelMediaInfoList.Add(OneSrcMediaInfo);


	TArray<ChannelMediaInfo> DstChannelMediaInfoList;
	ChannelMediaInfo OneDstMediaInfo;
	std::string StdStrChannelNameDst1 = TCHAR_TO_UTF8(*(ChannelName + "Dst1"));
	OneDstMediaInfo.channelName = StdStrChannelNameDst1.c_str();
	OneDstMediaInfo.uid = 0;
	std::string StdStrTokenDst1 = TCHAR_TO_UTF8(*Token);
	OneDstMediaInfo.token = StdStrTokenDst1.c_str();
	DstChannelMediaInfoList.Add(OneDstMediaInfo);
	Config.srcInfo = SrcChannelMediaInfoList.GetData();
	Config.destInfos = DstChannelMediaInfoList.GetData();
	Config.destCount = 1;

	int ret = RtcEngineProxy->startOrUpdateChannelMediaRelay(Config);
	UBFL_Logger::Print(FString::Printf(TEXT("%s ret %d"), *FString(FUNCTION_MACRO), ret), LogMsgViewPtr);

}

void UChannelMediaRelayWidget::OnBtnUpdateClicked()
{
	ChannelMediaRelayConfiguration Config;
	TArray<ChannelMediaInfo> SrcChannelMediaInfoList;
	ChannelMediaInfo OneSrcMediaInfo;
	std::string StdStrChannelName = TCHAR_TO_UTF8(*ChannelName);
	OneSrcMediaInfo.channelName = StdStrChannelName.c_str();
	OneSrcMediaInfo.uid = 0;
	std::string StdStrToken = TCHAR_TO_UTF8(*Token);
	OneSrcMediaInfo.token = StdStrToken.c_str();
	SrcChannelMediaInfoList.Add(OneSrcMediaInfo);


	TArray<ChannelMediaInfo> DstChannelMediaInfoList;
	ChannelMediaInfo OneDstMediaInfo;
	std::string StdStrChannelNameDst2 = TCHAR_TO_UTF8(*(ChannelName + "Dst2"));
	OneDstMediaInfo.channelName = StdStrChannelNameDst2.c_str();
	OneDstMediaInfo.uid = 0;
	std::string StdStrTokenDst2 = TCHAR_TO_UTF8(*Token);
	OneDstMediaInfo.token = StdStrTokenDst2.c_str();
	DstChannelMediaInfoList.Add(OneDstMediaInfo);
	Config.srcInfo = SrcChannelMediaInfoList.GetData();
	Config.destInfos = DstChannelMediaInfoList.GetData();
	Config.destCount = 1;

	int ret = RtcEngineProxy->startOrUpdateChannelMediaRelay(Config);
	UBFL_Logger::Print(FString::Printf(TEXT("%s ret %d"), *FString(FUNCTION_MACRO), ret), LogMsgViewPtr);

}

void UChannelMediaRelayWidget::OnBtnStopClicked()
{
	int ret = RtcEngineProxy->stopChannelMediaRelay();
	UBFL_Logger::Print(FString::Printf(TEXT("%s ret %d"), *FString(FUNCTION_MACRO), ret), LogMsgViewPtr);
}

void UChannelMediaRelayWidget::OnBtnPauseAllClicked()
{
	int ret = RtcEngineProxy->pauseAllChannelMediaRelay();
	UBFL_Logger::Print(FString::Printf(TEXT("%s ret %d"), *FString(FUNCTION_MACRO), ret), LogMsgViewPtr);
}

void UChannelMediaRelayWidget::OnBtnResumeAllClicked()
{
	int ret = RtcEngineProxy->resumeAllChannelMediaRelay();
	UBFL_Logger::Print(FString::Printf(TEXT("%s ret %d"), *FString(FUNCTION_MACRO), ret), LogMsgViewPtr);

}


void UChannelMediaRelayWidget::OnBtnBackToHomeClicked()
{
	UnInitAgoraEngine();
	UGameplayStatics::OpenLevel(UGameplayStatics::GetPlayerController(GWorld, 0)->GetWorld(), FName("MainLevel"));
}


void UChannelMediaRelayWidget::NativeDestruct()
{
	Super::NativeDestruct();

	UnInitAgoraEngine();
}



void UChannelMediaRelayWidget::UnInitAgoraEngine()
{
	if (RtcEngineProxy != nullptr)
	{
		RtcEngineProxy->leaveChannel();
		RtcEngineProxy->unregisterEventHandler(UserRtcEventHandlerEx.Get());
		RtcEngineProxy->release();
		RtcEngineProxy = nullptr;

		UBFL_Logger::Print(FString::Printf(TEXT("%s release agora engine"), *FString(FUNCTION_MACRO)), LogMsgViewPtr);
	}
}


#pragma region UI Utility

int UChannelMediaRelayWidget::MakeVideoView(uint32 uid, agora::rtc::VIDEO_SOURCE_TYPE sourceType /*= VIDEO_SOURCE_CAMERA_PRIMARY*/, FString channelId /*= ""*/)
{
	/*
		For local view:
			please reference the callback function Ex.[onCaptureVideoFrame]

		For remote view:
			please reference the callback function [onRenderVideoFrame]

		channelId will be set in [setupLocalVideo] / [setupRemoteVideo]
	*/

	int ret = -ERROR_NULLPTR;

	if (RtcEngineProxy == nullptr)
		return ret;

	agora::rtc::VideoCanvas videoCanvas;
	videoCanvas.uid = uid;
	videoCanvas.sourceType = sourceType;

	if (uid == 0) {
		FVideoViewIdentity VideoViewIdentity(uid, sourceType, "");
		videoCanvas.view = UBFL_VideoViewManager::CreateOneVideoViewToCanvasPanel(VideoViewIdentity, CanvasPanel_VideoView, VideoViewMap, DraggableVideoViewTemplate);
		ret = RtcEngineProxy->setupLocalVideo(videoCanvas);
	}
	else
	{

		FVideoViewIdentity VideoViewIdentity(uid, sourceType, channelId);
		videoCanvas.view = UBFL_VideoViewManager::CreateOneVideoViewToCanvasPanel(VideoViewIdentity, CanvasPanel_VideoView, VideoViewMap, DraggableVideoViewTemplate);

		if (channelId == "") {
			ret = RtcEngineProxy->setupRemoteVideo(videoCanvas);
		}
		else {
			agora::rtc::RtcConnection connection;
			std::string StdStrChannelId = TCHAR_TO_UTF8(*channelId);
			connection.channelId = StdStrChannelId.c_str();
			ret = ((agora::rtc::IRtcEngineEx*)RtcEngineProxy)->setupRemoteVideoEx(videoCanvas, connection);
		}
	}

	return ret;
}

int UChannelMediaRelayWidget::ReleaseVideoView(uint32 uid, agora::rtc::VIDEO_SOURCE_TYPE sourceType /*= VIDEO_SOURCE_CAMERA_PRIMARY*/, FString channelId /*= ""*/)
{
	int ret = -ERROR_NULLPTR;

	if (RtcEngineProxy == nullptr)
		return ret;

	agora::rtc::VideoCanvas videoCanvas;
	videoCanvas.view = nullptr;
	videoCanvas.uid = uid;
	videoCanvas.sourceType = sourceType;

	if (uid == 0) {
		FVideoViewIdentity VideoViewIdentity(uid, sourceType, "");
		UBFL_VideoViewManager::ReleaseOneVideoView(VideoViewIdentity, VideoViewMap);
		ret = RtcEngineProxy->setupLocalVideo(videoCanvas);
	}
	else
	{
		FVideoViewIdentity VideoViewIdentity(uid, sourceType, channelId);
		UBFL_VideoViewManager::ReleaseOneVideoView(VideoViewIdentity, VideoViewMap);
		if (channelId == "") {
			ret = RtcEngineProxy->setupRemoteVideo(videoCanvas);
		}
		else {
			agora::rtc::RtcConnection connection;
			std::string StdStrChannelId = TCHAR_TO_UTF8(*channelId);
			connection.channelId = StdStrChannelId.c_str();
			ret = ((agora::rtc::IRtcEngineEx*)RtcEngineProxy)->setupRemoteVideoEx(videoCanvas, connection);
		}
	}
	return ret;
}

#pragma endregion


#pragma region AgoraCallback - IRtcEngineEventHandlerEx

void UChannelMediaRelayWidget::FUserRtcEventHandlerEx::onJoinChannelSuccess(const agora::rtc::RtcConnection& connection, int elapsed)
{
	if (!IsWidgetValid())
		return;

	AsyncTask(ENamedThreads::GameThread, [=]()
		{
			if (!IsWidgetValid())
			{
				UBFL_Logger::Print(FString::Printf(TEXT("%s bIsDestruct "), *FString(FUNCTION_MACRO)));
				return;
			}
			UBFL_Logger::Print(FString::Printf(TEXT("%s"), *FString(FUNCTION_MACRO)), WidgetPtr->GetLogMsgViewPtr());

			WidgetPtr->MakeVideoView(0, agora::rtc::VIDEO_SOURCE_TYPE::VIDEO_SOURCE_CAMERA);
		});
}

void UChannelMediaRelayWidget::FUserRtcEventHandlerEx::onLeaveChannel(const agora::rtc::RtcConnection& connection, const agora::rtc::RtcStats& stats)
{
	if (!IsWidgetValid())
		return;

	AsyncTask(ENamedThreads::GameThread, [=]()
		{
			if (!IsWidgetValid())
			{
				UBFL_Logger::Print(FString::Printf(TEXT("%s bIsDestruct "), *FString(FUNCTION_MACRO)));
				return;
			}
			UBFL_Logger::Print(FString::Printf(TEXT("%s"), *FString(FUNCTION_MACRO)), WidgetPtr->GetLogMsgViewPtr());

			WidgetPtr->ReleaseVideoView(0, agora::rtc::VIDEO_SOURCE_TYPE::VIDEO_SOURCE_CAMERA);
		});
}

void UChannelMediaRelayWidget::FUserRtcEventHandlerEx::onUserJoined(const agora::rtc::RtcConnection& connection, agora::rtc::uid_t remoteUid, int elapsed)
{
	if (!IsWidgetValid())
		return;

	AsyncTask(ENamedThreads::GameThread, [=]()
		{
			if (!IsWidgetValid())
			{
				UBFL_Logger::Print(FString::Printf(TEXT("%s bIsDestruct "), *FString(FUNCTION_MACRO)));
				return;
			}
			UBFL_Logger::Print(FString::Printf(TEXT("%s remote uid=%d"), *FString(FUNCTION_MACRO), remoteUid), WidgetPtr->GetLogMsgViewPtr());

			WidgetPtr->MakeVideoView(remoteUid, agora::rtc::VIDEO_SOURCE_TYPE::VIDEO_SOURCE_REMOTE, WidgetPtr->GetChannelName());
		});
}

void UChannelMediaRelayWidget::FUserRtcEventHandlerEx::onUserOffline(const agora::rtc::RtcConnection& connection, agora::rtc::uid_t remoteUid, agora::rtc::USER_OFFLINE_REASON_TYPE reason)
{
	if (!IsWidgetValid())
		return;

	AsyncTask(ENamedThreads::GameThread, [=]()
		{
			if (!IsWidgetValid())
			{
				UBFL_Logger::Print(FString::Printf(TEXT("%s bIsDestruct "), *FString(FUNCTION_MACRO)));
				return;
			}
			UBFL_Logger::Print(FString::Printf(TEXT("%s remote uid=%d"), *FString(FUNCTION_MACRO), remoteUid), WidgetPtr->GetLogMsgViewPtr());

			WidgetPtr->ReleaseVideoView(remoteUid, agora::rtc::VIDEO_SOURCE_TYPE::VIDEO_SOURCE_REMOTE, WidgetPtr->GetChannelName());
		});
}

#pragma endregion