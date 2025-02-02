// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../BaseAgoraUserWidget.h"
#include "AgoraPluginInterface.h"

// UI
#include "Components/Button.h"
#include "Components/CanvasPanel.h"

// UI Utility
#include "../../../Utility/BFL_VideoViewManager.h"
#include "../../../Utility/BFL_Logger.h"

#if PLATFORM_ANDROID
#include "AndroidPermission/Classes/AndroidPermissionFunctionLibrary.h"
#endif

#include "JoinMultipleChannelsWidget.generated.h"

using namespace agora::rtc;

/**
 * 
 */
UCLASS()
class AGORAEXAMPLE_API UJoinMultipleChannelsWidget : public UBaseAgoraUserWidget
{
	GENERATED_BODY()


#pragma region Event Handler

public:

	class FUserRtcEventHandlerEx : public agora::rtc::IRtcEngineEventHandlerEx
	{
	public:

		FUserRtcEventHandlerEx(UJoinMultipleChannelsWidget* InVideoWidget) : WidgetPtr(InVideoWidget) {};

#pragma region AgoraCallback - IRtcEngineEventHandlerEx

		void onJoinChannelSuccess(const agora::rtc::RtcConnection& connection, int elapsed) override;

		void onLeaveChannel(const agora::rtc::RtcConnection& connection, const agora::rtc::RtcStats& stats) override;

		void onUserJoined(const agora::rtc::RtcConnection& connection, agora::rtc::uid_t remoteUid, int elapsed) override;

		void onUserOffline(const agora::rtc::RtcConnection& connection, agora::rtc::uid_t remoteUid, agora::rtc::USER_OFFLINE_REASON_TYPE reason) override;

#pragma endregion

		inline bool IsWidgetValid() { return WidgetPtr.IsValid(); }

	private:

		TWeakObjectPtr<UJoinMultipleChannelsWidget> WidgetPtr;
	};

#pragma endregion


#pragma region UI

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (BindWidget))
		UButton* Btn_BackToHome = nullptr;

	UFUNCTION(BlueprintCallable)
	void OnBtnBackToHomeClicked();


	UFUNCTION(BlueprintCallable)
	void OnBtnPublishChannel1();
	
	UFUNCTION(BlueprintCallable)
	void OnBtnPublishChannel2();
#pragma endregion

public:

	void InitAgoraWidget(FString APP_ID, FString TOKEN, FString CHANNEL_NAME) override;


#pragma region UI Utility - Video View

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UCanvasPanel* CanvasPanel_VideoView = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UDraggableVideoViewWidget> DraggableVideoViewTemplate;
	
protected:

	int MakeVideoView(uint32 uid, agora::rtc::VIDEO_SOURCE_TYPE sourceType = VIDEO_SOURCE_CAMERA_PRIMARY,FString channelId = "");
	int ReleaseVideoView(uint32 uid, agora::rtc::VIDEO_SOURCE_TYPE sourceType = VIDEO_SOURCE_CAMERA_PRIMARY, FString channelId = "");

	TMap<FVideoViewIdentity, UDraggableVideoViewWidget*> VideoViewMap;


#pragma endregion

#pragma region UI Utility - Log Msg View

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UCanvasPanel* CanvasPanel_LogMsgView = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UDraggableLogMsgViewWidget> DraggableLogMsgViewTemplate;

public:
	inline UDraggableLogMsgViewWidget* GetLogMsgViewPtr() {return LogMsgViewPtr;} 

private:
	UDraggableLogMsgViewWidget* LogMsgViewPtr = nullptr;

#pragma endregion

public:
	inline FString GetAppId() { return AppId; };
	inline FString GetToken() { return Token; };
	inline FString GetChannelName1() { return ChannelName1; };
	inline FString GetChannelName2() { return ChannelName2; };
	inline uint32 GetUID1() { return UIDChannel1; };
	inline uint32 GetUID2() { return UIDChannel2; };
protected:
	void CheckPermission();
	void InitAgoraEngine(FString APP_ID, FString TOKEN, FString CHANNEL_NAME);
	void JoinChannel1();
	void JoinChannel2();

	void NativeDestruct() override;
	void UnInitAgoraEngine();

	FString AppId = "";
	FString Token = "";
	FString ChannelName1 = "";
	FString ChannelName2 = "";

	uint32 UIDChannel1 = 123;
	uint32 UIDChannel2 = 456;

	IRtcEngineEx* RtcEngineProxy;

	TSharedPtr<FUserRtcEventHandlerEx> UserRtcEventHandlerEx;
};