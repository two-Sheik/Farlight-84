// Class LimNativeWidget.AudioPermissionHelperProxy
// Size: 0x48 (Inherited: 0x28)
struct UAudioPermissionHelperProxy : UObject {
	char pad_28[0x20]; // 0x28(0x20)

	void OnAndroidPermissionResult(struct TArray<struct FString>& Permissions, struct TArray<bool>& Results); // Function LimNativeWidget.AudioPermissionHelperProxy.OnAndroidPermissionResult // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x944480
	enum class EIOSAudioPermissionState CheckIOSAudioPermission(); // Function LimNativeWidget.AudioPermissionHelperProxy.CheckIOSAudioPermission // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9432a0
	bool CheckAndroidAudioPermission(); // Function LimNativeWidget.AudioPermissionHelperProxy.CheckAndroidAudioPermission // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9432a0
	void AcquireIOSAudioPermission(); // Function LimNativeWidget.AudioPermissionHelperProxy.AcquireIOSAudioPermission // (Final|Native|Public|BlueprintCallable) // @ game+0x8ee0f0
	void AcquireAndroidAudioPermission(); // Function LimNativeWidget.AudioPermissionHelperProxy.AcquireAndroidAudioPermission // (Final|Native|Public|BlueprintCallable) // @ game+0x8ee0f0
};

// Class LimNativeWidget.ChatGMEManager
// Size: 0x798 (Inherited: 0x28)
struct UChatGMEManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FLimNativeLowLevelWrapper ctx; // 0x30(0x10)
	struct FMulticastInlineDelegate OnEnterRoom; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)
	struct FMulticastInlineDelegate OnExitRoom; // 0x68(0x10)
	char pad_78[0x18]; // 0x78(0x18)
	struct FMulticastInlineDelegate OnRoomDisconnect; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)
	struct FMulticastInlineDelegate OnUserUpdate; // 0xb8(0x10)
	char pad_C8[0x18]; // 0xc8(0x18)
	struct FMulticastInlineDelegate OnNumberOfUsersUpdate; // 0xe0(0x10)
	char pad_F0[0x18]; // 0xf0(0x18)
	struct FMulticastInlineDelegate OnNumberOfAudioStreamsUpdate; // 0x108(0x10)
	char pad_118[0x18]; // 0x118(0x18)
	struct FMulticastInlineDelegate OnReconnectStart; // 0x130(0x10)
	char pad_140[0x18]; // 0x140(0x18)
	struct FMulticastInlineDelegate OnReconnectSuccess; // 0x158(0x10)
	char pad_168[0x18]; // 0x168(0x18)
	struct FMulticastInlineDelegate OnSwitchRoom; // 0x180(0x10)
	char pad_190[0x18]; // 0x190(0x18)
	struct FMulticastInlineDelegate OnChangeRoomType; // 0x1a8(0x10)
	char pad_1B8[0x18]; // 0x1b8(0x18)
	struct FMulticastInlineDelegate OnAudioDataEmpty; // 0x1d0(0x10)
	char pad_1E0[0x18]; // 0x1e0(0x18)
	struct FMulticastInlineDelegate OnRoomSharingStart; // 0x1f8(0x10)
	char pad_208[0x18]; // 0x208(0x18)
	struct FMulticastInlineDelegate OnRoomSharingStop; // 0x220(0x10)
	char pad_230[0x18]; // 0x230(0x18)
	struct FMulticastInlineDelegate OnRecordCompleted; // 0x248(0x10)
	char pad_258[0x18]; // 0x258(0x18)
	struct FMulticastInlineDelegate OnRecordPreviewCompleted; // 0x270(0x10)
	char pad_280[0x18]; // 0x280(0x18)
	struct FMulticastInlineDelegate OnRecordMixCompleted; // 0x298(0x10)
	char pad_2A8[0x18]; // 0x2a8(0x18)
	struct FMulticastInlineDelegate OnAudioRouteUpdate; // 0x2c0(0x10)
	char pad_2D0[0x18]; // 0x2d0(0x18)
	struct FMulticastInlineDelegate OnSpeakerDefaultDeviceChanged; // 0x2e8(0x10)
	char pad_2F8[0x18]; // 0x2f8(0x18)
	struct FMulticastInlineDelegate OnSpeakerNewDevice; // 0x310(0x10)
	char pad_320[0x18]; // 0x320(0x18)
	struct FMulticastInlineDelegate OnSpeakerLostDevice; // 0x338(0x10)
	char pad_348[0x18]; // 0x348(0x18)
	struct FMulticastInlineDelegate OnMicNewDevice; // 0x360(0x10)
	char pad_370[0x18]; // 0x370(0x18)
	struct FMulticastInlineDelegate OnMicLostDevice; // 0x388(0x10)
	char pad_398[0x18]; // 0x398(0x18)
	struct FMulticastInlineDelegate OnMicDefaultDeviceChanged; // 0x3b0(0x10)
	char pad_3C0[0x18]; // 0x3c0(0x18)
	struct FMulticastInlineDelegate OnAudioRouteChanged; // 0x3d8(0x10)
	char pad_3E8[0x18]; // 0x3e8(0x18)
	struct FMulticastInlineDelegate OnUserVolumes; // 0x400(0x10)
	char pad_410[0x18]; // 0x410(0x18)
	struct FMulticastInlineDelegate OnChangeRoomQuality; // 0x428(0x10)
	char pad_438[0x18]; // 0x438(0x18)
	struct FMulticastInlineDelegate OnAccompanyFinish; // 0x450(0x10)
	char pad_460[0x18]; // 0x460(0x18)
	struct FMulticastInlineDelegate OnServerAudioRouteEvent; // 0x478(0x10)
	char pad_488[0x18]; // 0x488(0x18)
	struct FMulticastInlineDelegate OnCustomDataUpdate; // 0x4a0(0x10)
	char pad_4B0[0x18]; // 0x4b0(0x18)
	struct FMulticastInlineDelegate OnRealtimeASR; // 0x4c8(0x10)
	char pad_4D8[0x18]; // 0x4d8(0x18)
	struct FMulticastInlineDelegate OnChorusEvent; // 0x4f0(0x10)
	char pad_500[0x18]; // 0x500(0x18)
	struct FMulticastInlineDelegate OnChangeTeamId; // 0x518(0x10)
	char pad_528[0x18]; // 0x528(0x18)
	struct FMulticastInlineDelegate OnAudioReady; // 0x540(0x10)
	char pad_550[0x18]; // 0x550(0x18)
	struct FMulticastInlineDelegate OnHardwareTestRecordFinish; // 0x568(0x10)
	char pad_578[0x18]; // 0x578(0x18)
	struct FMulticastInlineDelegate OnHardwareTestPreviewFinish; // 0x590(0x10)
	char pad_5A0[0x18]; // 0x5a0(0x18)
	struct FMulticastInlineDelegate OnPTTRecordComplete; // 0x5b8(0x10)
	char pad_5C8[0x18]; // 0x5c8(0x18)
	struct FMulticastInlineDelegate OnPTTUploadComplete; // 0x5e0(0x10)
	char pad_5F0[0x18]; // 0x5f0(0x18)
	struct FMulticastInlineDelegate OnPTTDownloadComplete; // 0x608(0x10)
	char pad_618[0x18]; // 0x618(0x18)
	struct FMulticastInlineDelegate OnPTTPlayComplete; // 0x630(0x10)
	char pad_640[0x18]; // 0x640(0x18)
	struct FMulticastInlineDelegate OnPTTSpeech2TextComplete; // 0x658(0x10)
	char pad_668[0x18]; // 0x668(0x18)
	struct FMulticastInlineDelegate OnPTTStreamingRecognitionComplete; // 0x680(0x10)
	char pad_690[0x18]; // 0x690(0x18)
	struct FMulticastInlineDelegate OnPTTStreamingRecognitionIsRunning; // 0x6a8(0x10)
	char pad_6B8[0x18]; // 0x6b8(0x18)
	struct FMulticastInlineDelegate OnRoomManagementOperator; // 0x6d0(0x10)
	char pad_6E0[0x18]; // 0x6e0(0x18)
	struct FMulticastInlineDelegate OnPermissionResult; // 0x6f8(0x10)
	char pad_708[0x90]; // 0x708(0x90)

	void UpdateSelfPosition(struct FVector InSelfPosition); // Function LimNativeWidget.ChatGMEManager.UpdateSelfPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x944e30
	void UpdateAudioRecvRange(int32_t InRange); // Function LimNativeWidget.ChatGMEManager.UpdateAudioRecvRange // (Final|Native|Public|BlueprintCallable) // @ game+0x944da0
	void UnRegisterLuaEvent(); // Function LimNativeWidget.ChatGMEManager.UnRegisterLuaEvent // (Event|Public|BlueprintEvent) // @ game+0x260de00
	void Uninit(); // Function LimNativeWidget.ChatGMEManager.Uninit // (Final|Native|Public|BlueprintCallable) // @ game+0x944d80
	bool SwitchRoom(struct FString InRoomId); // Function LimNativeWidget.ChatGMEManager.SwitchRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x944cd0
	void SetRangeAudioTeamID(int32_t InTeamId); // Function LimNativeWidget.ChatGMEManager.SetRangeAudioTeamID // (Final|Native|Public|BlueprintCallable) // @ game+0x944c40
	void SetRangeAudioMode(enum class EChatGMERangeAudioMode InAudioMode); // Function LimNativeWidget.ChatGMEManager.SetRangeAudioMode // (Final|Native|Public|BlueprintCallable) // @ game+0x944bc0
	void SetAudioSendAndRecvRules(enum class EChatGMEAudioRouteSendType SendType, struct TArray<struct FString> SendOpenIDList, enum class EChatGMEAudioRouteRecvType RecvType, struct TArray<struct FString> RecvOpenIDList); // Function LimNativeWidget.ChatGMEManager.SetAudioSendAndRecvRules // (Final|Native|Public|BlueprintCallable) // @ game+0x9448d0
	void SelectSpeak(struct FString InDeviceID); // Function LimNativeWidget.ChatGMEManager.SelectSpeak // (Final|Native|Public|BlueprintCallable) // @ game+0x944830
	void SelectMic(struct FString InDeviceID); // Function LimNativeWidget.ChatGMEManager.SelectMic // (Final|Native|Public|BlueprintCallable) // @ game+0x944790
	void PreInit(); // Function LimNativeWidget.ChatGMEManager.PreInit // (Final|Native|Public|BlueprintCallable) // @ game+0x944770
	void OnUserVolumesDelegate__DelegateSignature(struct FChatGMEDataUserVolumes InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnUserVolumesDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnUserUpdateDelegate__DelegateSignature(struct FChatGMEDataUserUpdate InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnUserUpdateDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnRoomManagementOperatorDelegate__DelegateSignature(struct FChatGMEDataRoomOperator InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnRoomManagementOperatorDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnResultDelegate__DelegateSignature(struct FChatGMEDataResult Result); // DelegateFunction LimNativeWidget.ChatGMEManager.OnResultDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnRecordCompletedDelegate__DelegateSignature(struct FChatGMEDataRecordCompleted InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnRecordCompletedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnNumberOfUsersUpdateDelegate__DelegateSignature(struct FChatGMEDataNumberOfUserUpdate InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfUsersUpdateDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature(struct FChatGMEDataNumberOfAudioStreamsUpdate InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnNotifyFileInfoDelegate__DelegateSignature(struct FChatGMEDataFileInfo InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyFileInfoDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnNotifyDelegate__DelegateSignature(struct FString InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnGetAuthBuffer(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetGMETokenCallBack& RetData); // Function LimNativeWidget.ChatGMEManager.OnGetAuthBuffer // (Final|Native|Protected|HasOutParms) // @ game+0x9445c0
	void OnDeviceChangedDelegate__DelegateSignature(struct FChatGMEDataDeviceInfo InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnDeviceChangedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnChangeRoomTypeDelegate__DelegateSignature(struct FChatGMEDataChangeRoomType InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomTypeDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnChangeRoomQualityDelegate__DelegateSignature(struct FChatGMEDataRoomQuality InData); // DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomQualityDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnAndroidPermissionResult__DelegateSignature(bool bSuccess); // DelegateFunction LimNativeWidget.ChatGMEManager.OnAndroidPermissionResult__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void MediaMute(struct FString InUserId, bool InMute); // Function LimNativeWidget.ChatGMEManager.MediaMute // (Final|Native|Public|BlueprintCallable) // @ game+0x9443a0
	bool IsRoomEntered(); // Function LimNativeWidget.ChatGMEManager.IsRoomEntered // (Final|Native|Public|BlueprintCallable) // @ game+0x944370
	bool IsAudioSendEnabled(); // Function LimNativeWidget.ChatGMEManager.IsAudioSendEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x944340
	bool IsAudioRecvEnabled(); // Function LimNativeWidget.ChatGMEManager.IsAudioRecvEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x944310
	bool IsAudioPlayDeviceEnabled(); // Function LimNativeWidget.ChatGMEManager.IsAudioPlayDeviceEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x9442e0
	bool IsAudioCaptureDeviceEnabled(); // Function LimNativeWidget.ChatGMEManager.IsAudioCaptureDeviceEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x9442b0
	void InnerEnableMic(bool InEnable); // Function LimNativeWidget.ChatGMEManager.InnerEnableMic // (Final|Native|Public|BlueprintCallable) // @ game+0x943580
	void InitGME(struct FString InEnvId, struct FString InGMEUserID); // Function LimNativeWidget.ChatGMEManager.InitGME // (Final|Native|Public|BlueprintCallable) // @ game+0x944130
	void Init(struct FString InUserId, struct FString InAppId, struct FString InEnvId); // Function LimNativeWidget.ChatGMEManager.Init // (Final|Native|Public|BlueprintCallable) // @ game+0x943fa0
	bool GetSpeakerState(); // Function LimNativeWidget.ChatGMEManager.GetSpeakerState // (Final|Native|Public|BlueprintCallable) // @ game+0x943f70
	struct TArray<struct FChatGMEDataDeviceInfo> GetSpeakerList(); // Function LimNativeWidget.ChatGMEManager.GetSpeakerList // (Final|Native|Public|BlueprintCallable) // @ game+0x943f20
	struct FString GetRecordingLocalFilePath(); // Function LimNativeWidget.ChatGMEManager.GetRecordingLocalFilePath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x943ea0
	bool GetMicState(); // Function LimNativeWidget.ChatGMEManager.GetMicState // (Final|Native|Public|BlueprintCallable) // @ game+0x943e70
	struct TArray<struct FChatGMEDataDeviceInfo> GetMicList(); // Function LimNativeWidget.ChatGMEManager.GetMicList // (Final|Native|Public|BlueprintCallable) // @ game+0x943e20
	struct UChatGMEManager* GetInstance(); // Function LimNativeWidget.ChatGMEManager.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x943df0
	void GameUploadRecordedFile(struct FString FilePath); // Function LimNativeWidget.ChatGMEManager.GameUploadRecordedFile // (Final|Native|Public|BlueprintCallable) // @ game+0x943d50
	void GameStopRecording(); // Function LimNativeWidget.ChatGMEManager.GameStopRecording // (Final|Native|Public|BlueprintCallable) // @ game+0x943d30
	void GameStopPlayFile(); // Function LimNativeWidget.ChatGMEManager.GameStopPlayFile // (Final|Native|Public|BlueprintCallable) // @ game+0x943d10
	void GameStartRecording(struct FString FilePath); // Function LimNativeWidget.ChatGMEManager.GameStartRecording // (Final|Native|Public|BlueprintCallable) // @ game+0x943c70
	int32_t GameSetSpeakerVolume(int32_t Volume); // Function LimNativeWidget.ChatGMEManager.GameSetSpeakerVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x943bd0
	int32_t GameSetMicVolume(int32_t MicVolume); // Function LimNativeWidget.ChatGMEManager.GameSetMicVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x943b30
	void GameResumeRecording(); // Function LimNativeWidget.ChatGMEManager.GameResumeRecording // (Final|Native|Public|BlueprintCallable) // @ game+0x943b10
	void GamePlayRecordedFile(struct FString FilePath); // Function LimNativeWidget.ChatGMEManager.GamePlayRecordedFile // (Final|Native|Public|BlueprintCallable) // @ game+0x943a70
	void GamePauseRecording(); // Function LimNativeWidget.ChatGMEManager.GamePauseRecording // (Final|Native|Public|BlueprintCallable) // @ game+0x943a50
	int32_t GameGetVoiceFileDuration(struct FString FilePath); // Function LimNativeWidget.ChatGMEManager.GameGetVoiceFileDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x9439a0
	int32_t GameGetSpeakerVolume(); // Function LimNativeWidget.ChatGMEManager.GameGetSpeakerVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x943970
	int32_t GameGetSpeakerLevel(); // Function LimNativeWidget.ChatGMEManager.GameGetSpeakerLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x943940
	int32_t GameGetMicVolume(); // Function LimNativeWidget.ChatGMEManager.GameGetMicVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x943910
	int32_t GameGetMicLevel(); // Function LimNativeWidget.ChatGMEManager.GameGetMicLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x9438e0
	void GameDownloadRecordedFile(struct FString FileID, struct FString FilePath); // Function LimNativeWidget.ChatGMEManager.GameDownloadRecordedFile // (Final|Native|Public|BlueprintCallable) // @ game+0x9437e0
	void GameCancleRecording(); // Function LimNativeWidget.ChatGMEManager.GameCancleRecording // (Final|Native|Public|BlueprintCallable) // @ game+0x9437c0
	bool ExitRoom(); // Function LimNativeWidget.ChatGMEManager.ExitRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x943790
	bool EnterRoom(struct FString InRoomId, enum class EChatGMERoomType InRoomType); // Function LimNativeWidget.ChatGMEManager.EnterRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x9436a0
	void EnableSpeaker(bool InEnable); // Function LimNativeWidget.ChatGMEManager.EnableSpeaker // (Final|Native|Public|BlueprintCallable) // @ game+0x943610
	void EnableMic(bool InEnable); // Function LimNativeWidget.ChatGMEManager.EnableMic // (Final|Native|Public|BlueprintCallable) // @ game+0x943580
	void EnableAudioSend(bool bEnable); // Function LimNativeWidget.ChatGMEManager.EnableAudioSend // (Final|Native|Public|BlueprintCallable) // @ game+0x9434f0
	void EnableAudioRecv(bool bEnable); // Function LimNativeWidget.ChatGMEManager.EnableAudioRecv // (Final|Native|Public|BlueprintCallable) // @ game+0x943460
	void EnableAudioPlayDevice(bool InEnable); // Function LimNativeWidget.ChatGMEManager.EnableAudioPlayDevice // (Final|Native|Public|BlueprintCallable) // @ game+0x9433d0
	void EnableAudioCaptureDevice(bool InEnable); // Function LimNativeWidget.ChatGMEManager.EnableAudioCaptureDevice // (Final|Native|Public|BlueprintCallable) // @ game+0x943340
	void DestroyInstance(); // Function LimNativeWidget.ChatGMEManager.DestroyInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x943320
	void DeleteCacheFiles(); // Function LimNativeWidget.ChatGMEManager.DeleteCacheFiles // (Final|Native|Public|BlueprintCallable) // @ game+0x943300
	int32_t CheckPlatformMicPermission(); // Function LimNativeWidget.ChatGMEManager.CheckPlatformMicPermission // (Final|Native|Public|BlueprintCallable) // @ game+0x9432d0
};

// Class LimNativeWidget.ChatListEmojiEntryData
// Size: 0xd0 (Inherited: 0x28)
struct UChatListEmojiEntryData : UObject {
	struct FString Tag; // 0x28(0x10)
	struct FSlateBrush Image; // 0x38(0x98)
};

// Class LimNativeWidget.ChatListEntryDataBase
// Size: 0x98 (Inherited: 0x28)
struct UChatListEntryDataBase : UObject {
	enum class ELimNativeMsgContentType MessageType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FDateTime Timestamp; // 0x30(0x08)
	struct FString SenderId; // 0x38(0x10)
	struct FString SenderName; // 0x48(0x10)
	struct FString SenderAvatarUrl; // 0x58(0x10)
	enum class ELimNativeMsgState MsgState; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString ConvID; // 0x70(0x10)
	enum class ELimNativeConvType ConvType; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString MsgId; // 0x88(0x10)
};

// Class LimNativeWidget.ChatListEntryDataText
// Size: 0xa8 (Inherited: 0x98)
struct UChatListEntryDataText : UChatListEntryDataBase {
	struct FString Message; // 0x98(0x10)
};

// Class LimNativeWidget.ChatListEntryDataSystem
// Size: 0xa8 (Inherited: 0x98)
struct UChatListEntryDataSystem : UChatListEntryDataBase {
	struct FString Message; // 0x98(0x10)
};

// Class LimNativeWidget.ChatListEntryDataVoice
// Size: 0xd0 (Inherited: 0x98)
struct UChatListEntryDataVoice : UChatListEntryDataBase {
	struct FString UUID; // 0x98(0x10)
	struct FString URL; // 0xa8(0x10)
	struct FString Size; // 0xb8(0x10)
	int32_t Duration; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class LimNativeWidget.ChatListEntryDataImage
// Size: 0xe0 (Inherited: 0x98)
struct UChatListEntryDataImage : UChatListEntryDataBase {
	struct FString UUID; // 0x98(0x10)
	struct FString Fmt; // 0xa8(0x10)
	struct FString URL; // 0xb8(0x10)
	int32_t Width; // 0xc8(0x04)
	int32_t Height; // 0xcc(0x04)
	struct FString Size; // 0xd0(0x10)
};

// Class LimNativeWidget.ChatListEntryDataCustomEmotion
// Size: 0xf0 (Inherited: 0x98)
struct UChatListEntryDataCustomEmotion : UChatListEntryDataBase {
	struct FString PackName; // 0x98(0x10)
	enum class ELimNativePackType PackType; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FString EmotionName; // 0xb0(0x10)
	struct FString EmotionId; // 0xc0(0x10)
	struct FString EmotionUrl; // 0xd0(0x10)
	struct FString Desc; // 0xe0(0x10)
};

// Class LimNativeWidget.ChatListEntryDataShaderedGameCard
// Size: 0x100 (Inherited: 0x98)
struct UChatListEntryDataShaderedGameCard : UChatListEntryDataBase {
	int32_t Type; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString Text; // 0xa0(0x10)
	struct FString Title; // 0xb0(0x10)
	struct FString Detail; // 0xc0(0x10)
	struct FString Img; // 0xd0(0x10)
	struct FString URL; // 0xe0(0x10)
	struct FString Extra; // 0xf0(0x10)
};

// Class LimNativeWidget.ChatListUserEntryData
// Size: 0x78 (Inherited: 0x28)
struct UChatListUserEntryData : UObject {
	struct FString Uid; // 0x28(0x10)
	struct FString NickName; // 0x38(0x10)
	struct FString AvatarUrl; // 0x48(0x10)
	struct FString AvatarFrameUrl; // 0x58(0x10)
	enum class ELimNativeUserSexType Sex; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t VipLevel; // 0x6c(0x04)
	bool IsShowVip; // 0x70(0x01)
	enum class ELimNativeFriendStateType OnlineState; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t UnreadCount; // 0x74(0x04)
};

// Class LimNativeWidget.LimChatManager
// Size: 0x320 (Inherited: 0x28)
struct ULimChatManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct ULimNative* LimNativeInstance; // 0x30(0x08)
	struct FLimNativeLowLevelWrapper ctx; // 0x38(0x10)
	struct FString CurrentLanguage; // 0x48(0x10)
	struct FMulticastInlineDelegate OnLoginCallBackHandle; // 0x58(0x10)
	struct FMulticastInlineDelegate OnConvsGetCallBackHandle; // 0x68(0x10)
	struct FMulticastInlineDelegate OnNewGetMessageHandle; // 0x78(0x10)
	struct FMulticastInlineDelegate OnMessageReceivedHandle; // 0x88(0x10)
	struct FMulticastInlineDelegate OnNewMessageReceivedHandle; // 0x98(0x10)
	struct FMulticastInlineDelegate OnMessageSendCallBackHandle; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnNewMessageSendCallBackHandle; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnReceiveLogicMsgHandle; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnConvDiscardHandle; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnConfigInfoHandle; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnGetConnStatHandle; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnNetStatHandle; // 0x108(0x10)
	struct FMulticastInlineDelegate OnGetConfigChatLevelHandle; // 0x118(0x10)
	struct FMulticastInlineDelegate OnTextTranslateDynamicDelegate; // 0x128(0x10)
	struct FString SelfRoleID; // 0x138(0x10)
	struct FChatListConvData CurrentConvData; // 0x148(0x18)
	struct TArray<struct FLimNativeConversationData> ConvListFullData; // 0x160(0x10)
	struct TArray<struct FNewChatListMessageData> ChatMsgDataList; // 0x170(0x10)
	struct TArray<struct FLimNativeConvChatLevelConfigData> ChatLevelDataList; // 0x180(0x10)
	struct TMap<struct FChatListConvData, struct FString> MsgIDMap; // 0x190(0x50)
	struct TArray<struct FChatListUserData> PeerDataList; // 0x1e0(0x10)
	struct TArray<struct FChatListUserData> FriendDataList; // 0x1f0(0x10)
	struct TMap<struct FChatListConvData, struct FString> BaseMsgIDMap; // 0x200(0x50)
	struct TMap<struct FChatListConvData, int32_t> UnreadMsgMap; // 0x250(0x50)
	struct FMulticastInlineDelegate OnGetFriendsCallBackHandle; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnGetUserHandle; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnGetUserListHandle; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnGetUserListStateHandle; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnRedHintUpdateHandle; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnInputBoxChangeHandle; // 0x2f0(0x10)
	char pad_300[0x20]; // 0x300(0x20)

	void UnRegisterLuaEvent(); // Function LimNativeWidget.LimChatManager.UnRegisterLuaEvent // (Event|Public|BlueprintEvent) // @ game+0x260de00
	void UnInitChatManager(); // Function LimNativeWidget.LimChatManager.UnInitChatManager // (Final|Native|Public|BlueprintCallable) // @ game+0x94c950
	void TranslateText(struct FString Text, struct FString Lang, struct FString ExtraInfo); // Function LimNativeWidget.LimChatManager.TranslateText // (Final|Native|Public) // @ game+0x94c800
	void SwitchConvTo(struct FChatListConvData& InConvData, bool RefreshConvList); // Function LimNativeWidget.LimChatManager.SwitchConvTo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x94c700
	void SetCtxLanguage(struct FString Lang); // Function LimNativeWidget.LimChatManager.SetCtxLanguage // (Final|Native|Public|BlueprintCallable) // @ game+0x94c660
	void SetConvRead(struct FChatListConvData& ConvData); // Function LimNativeWidget.LimChatManager.SetConvRead // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x94c5b0
	void SetConvMsgRead(struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString MsgId, struct FString Extra); // Function LimNativeWidget.LimChatManager.SetConvMsgRead // (Final|Native|Public|BlueprintCallable) // @ game+0x94c420
	void SendVoiceMessageToConv(struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString FileID, struct FString Extra); // Function LimNativeWidget.LimChatManager.SendVoiceMessageToConv // (Final|Native|Public|BlueprintCallable) // @ game+0x94c250
	void SendTextMessageToConv(struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString Message, struct FString Extra); // Function LimNativeWidget.LimChatManager.SendTextMessageToConv // (Final|Native|Public|BlueprintCallable) // @ game+0x94c080
	void SendTextMessage(struct FString Message, struct FString Extra); // Function LimNativeWidget.LimChatManager.SendTextMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x94bf80
	void PostInitChatManager(struct FLimNativeReportConfig ReportConfig, struct FLimNativeParkConfig ParkConfig); // Function LimNativeWidget.LimChatManager.PostInitChatManager // (Final|Native|Public|BlueprintCallable) // @ game+0x94b840
	struct UUserWidget* OpenChatUI(struct UObject* WorldContextObject, struct FString ChatWidgetPath, int32_t ZOrder); // Function LimNativeWidget.LimChatManager.OpenChatUI // (Final|Native|Public|BlueprintCallable) // @ game+0x94b6d0
	void OnTextTranslateDynamicDelegate__DelegateSignature(bool TranslateRes, struct FString TranslatedText, struct FString Translator, struct FString ExtraInfo); // DelegateFunction LimNativeWidget.LimChatManager.OnTextTranslateDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnSendMessageCallBackDynamicDelegate__DelegateSignature(struct FChatListMessageData& MsgCallBack); // DelegateFunction LimNativeWidget.LimChatManager.OnSendMessageCallBackDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	void OnRedHintUpdateDynamicDelegate__DelegateSignature(); // DelegateFunction LimNativeWidget.LimChatManager.OnRedHintUpdateDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnReceiveMessageDynamicDelegate__DelegateSignature(struct FChatListMessageData& Msg); // DelegateFunction LimNativeWidget.LimChatManager.OnReceiveMessageDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	void OnReceiveLogicMessageDynamicDelegate__DelegateSignature(int32_t MsgType, struct FLimNativeDataBizFullObj& NativeMsg); // DelegateFunction LimNativeWidget.LimChatManager.OnReceiveLogicMessageDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	void OnOpenChatUI(); // Function LimNativeWidget.LimChatManager.OnOpenChatUI // (Final|Native|Public|BlueprintCallable) // @ game+0x8ee0f0
	void OnNewSendMessageCallBackDynamicDelegate__DelegateSignature(struct FNewChatListMessageData& MsgCallBack, struct FString RetData, int32_t Code); // DelegateFunction LimNativeWidget.LimChatManager.OnNewSendMessageCallBackDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	void OnNewReceiveMessageDynamicDelegate__DelegateSignature(struct FNewChatListMessageData& Msg); // DelegateFunction LimNativeWidget.LimChatManager.OnNewReceiveMessageDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	void OnMiscConfigInfoHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetMiscConfigInfoCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnMiscConfigInfoHandle // (Final|Native|Protected|HasOutParms) // @ game+0x94b520
	void OnMessageSend(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSendMsgCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnMessageSend // (Final|Native|Protected|HasOutParms) // @ game+0x94b2e0
	void OnMessageReceived(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgReceivedEventCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnMessageReceived // (Final|Native|Protected|HasOutParms) // @ game+0x94b0f0
	void OnLoginDynamicDelegate__DelegateSignature(bool LoginRes, int32_t Code, struct FString RetData); // DelegateFunction LimNativeWidget.LimChatManager.OnLoginDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnLogin(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnLoginCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnLogin // (Final|Native|Protected|HasOutParms) // @ game+0x94af80
	void OnLogicMsgReceived(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgLogicReceivedEventCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnLogicMsgReceived // (Final|Native|Protected|HasOutParms) // @ game+0x94ae00
	void OnLog(struct FLimNativeLowLevelWrapper& InWrapper, struct FString Data); // Function LimNativeWidget.LimChatManager.OnLog // (Final|Native|Protected|HasOutParms) // @ game+0x94acd0
	void OnInputBoxStateChangeDelegate__DelegateSignature(bool bUp, int32_t Left, int32_t Top, int32_t Right, int32_t Bottom); // DelegateFunction LimNativeWidget.LimChatManager.OnInputBoxStateChangeDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnGetUsersStateCallBackDynamicDelegate__DelegateSignature(); // DelegateFunction LimNativeWidget.LimChatManager.OnGetUsersStateCallBackDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnGetUsersCallBackDynamicDelegate__DelegateSignature(struct TArray<struct FChatListUserData>& UserDataList); // DelegateFunction LimNativeWidget.LimChatManager.OnGetUsersCallBackDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	void OnGetUserListState(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersStateCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnGetUserListState // (Final|Native|Protected|HasOutParms) // @ game+0x94aab0
	void OnGetUserListInfo(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnGetUserListInfo // (Final|Native|Protected|HasOutParms) // @ game+0x94a7e0
	void OnGetUserInfo(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUserCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnGetUserInfo // (Final|Native|Protected|HasOutParms) // @ game+0x94a680
	void OnGetUserCallBackDynamicDelegate__DelegateSignature(struct FChatListUserData& UserData); // DelegateFunction LimNativeWidget.LimChatManager.OnGetUserCallBackDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	void OnGetTextTranslateHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeTextTranslateCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnGetTextTranslateHandle // (Final|Native|Protected|HasOutParms) // @ game+0x94a4a0
	void OnGetNetStatHandle(struct FLimNativeLowLevelWrapper& InWrapper, int32_t RetData); // Function LimNativeWidget.LimChatManager.OnGetNetStatHandle // (Final|Native|Protected|HasOutParms) // @ game+0x94a390
	void OnGetNetStatDynamicDelegate__DelegateSignature(int32_t val); // DelegateFunction LimNativeWidget.LimChatManager.OnGetNetStatDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnGetMessageInRange(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetMsgsCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnGetMessageInRange // (Final|Native|Protected|HasOutParms) // @ game+0x94a1d0
	void OnGetMessageDataDynamicDelegate__DelegateSignature(int32_t Code, struct FString ConvID, enum class ELimNativeConvType ConvType); // DelegateFunction LimNativeWidget.LimChatManager.OnGetMessageDataDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnGetFriendsCallBackDynamicDelegate__DelegateSignature(struct TArray<struct FChatListUserData>& FriendList); // DelegateFunction LimNativeWidget.LimChatManager.OnGetFriendsCallBackDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	void OnGetFriends(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetFriendCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnGetFriends // (Final|Native|Protected|HasOutParms) // @ game+0x949f00
	void OnGetConnStateHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetConnStateCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnGetConnStateHandle // (Final|Native|Protected|HasOutParms) // @ game+0x949d80
	void OnGetConnStatDynamicDelegate__DelegateSignature(bool Result, int32_t val); // DelegateFunction LimNativeWidget.LimChatManager.OnGetConnStatDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnConvsGetDynamicDelegate__DelegateSignature(bool GetConvRes); // DelegateFunction LimNativeWidget.LimChatManager.OnConvsGetDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnConvRead(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSetConvReadCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnConvRead // (Final|Native|Protected|HasOutParms) // @ game+0x949c10
	void OnConvListGet(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvsGetCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnConvListGet // (Final|Native|Protected|HasOutParms) // @ game+0x9499d0
	void OnConvHandleDynamicDelegate__DelegateSignature(bool Result, struct FLimNativeConvHandleCallBackData& Data); // DelegateFunction LimNativeWidget.LimChatManager.OnConvHandleDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	void OnConvHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvHandleCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnConvHandle // (Final|Native|Protected|HasOutParms) // @ game+0x949820
	void OnConvChatLevelConfig(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetConvChatLevelConfigCallBack& RetData); // Function LimNativeWidget.LimChatManager.OnConvChatLevelConfig // (Final|Native|Protected|HasOutParms) // @ game+0x949650
	void OnConfigInfoHandleDynamicDelegate__DelegateSignature(bool Result, int32_t val); // DelegateFunction LimNativeWidget.LimChatManager.OnConfigInfoHandleDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnConfigGetChatLevlDynamicDelegate__DelegateSignature(bool Result); // DelegateFunction LimNativeWidget.LimChatManager.OnConfigGetChatLevlDynamicDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void Logout(); // Function LimNativeWidget.LimChatManager.Logout // (Final|Native|Public|BlueprintCallable) // @ game+0x949630
	void Login(struct FString InAppId, struct FString InAppUserID, struct FString InToken, struct FString InRoleID, struct FString InExtra); // Function LimNativeWidget.LimChatManager.Login // (Final|Native|Public|BlueprintCallable) // @ game+0x949430
	void InitChatManager(struct FLimNativeInitConfig InitConfig, struct FString InEnvId, struct FString InGMEUserID); // Function LimNativeWidget.LimChatManager.InitChatManager // (Final|Native|Public|BlueprintCallable) // @ game+0x9490d0
	void GetUserListState(struct TArray<struct FString>& InUserIDList); // Function LimNativeWidget.LimChatManager.GetUserListState // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x949000
	void GetUserListInfo(struct TArray<struct FString> InUserIDList); // Function LimNativeWidget.LimChatManager.GetUserListInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x948e90
	void GetUserInfo(struct FString InUserId); // Function LimNativeWidget.LimChatManager.GetUserInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x948df0
	void GetMiscConfigInfo(); // Function LimNativeWidget.LimChatManager.GetMiscConfigInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x948dd0
	void GetMessageInRange(struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString FromMsgId, struct FString ToMsgId); // Function LimNativeWidget.LimChatManager.GetMessageInRange // (Final|Native|Public) // @ game+0x948c40
	void GetMessage(struct FChatListConvData& TargetConv); // Function LimNativeWidget.LimChatManager.GetMessage // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x948b90
	struct FString GetLimSlssvr(); // Function LimNativeWidget.LimChatManager.GetLimSlssvr // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x948b10
	struct FString GetLimSDKRegion(); // Function LimNativeWidget.LimChatManager.GetLimSDKRegion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x948a90
	int32_t GetLimGameID(); // Function LimNativeWidget.LimChatManager.GetLimGameID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x948a60
	struct ULimChatManager* GetInstance(); // Function LimNativeWidget.LimChatManager.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x948a30
	void GetFriendList(); // Function LimNativeWidget.LimChatManager.GetFriendList // (Final|Native|Public|BlueprintCallable) // @ game+0x948a10
	int32_t GetFarlightDomain(); // Function LimNativeWidget.LimChatManager.GetFarlightDomain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9489e0
	void GetConvMessage(struct FString ConvID, enum class ELimNativeConvType ConvType, struct FString FromMsgId, struct FString ToMsgId); // Function LimNativeWidget.LimChatManager.GetConvMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x9487a0
	void GetConvList(); // Function LimNativeWidget.LimChatManager.GetConvList // (Final|Native|Public|BlueprintCallable) // @ game+0x948780
	void GetConvChatLevelConfig(); // Function LimNativeWidget.LimChatManager.GetConvChatLevelConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x948760
	void GetConnState(); // Function LimNativeWidget.LimChatManager.GetConnState // (Final|Native|Public|BlueprintCallable) // @ game+0x948740
	void DiscardConv(struct FString ConvID, enum class ELimNativeConvType ConvType); // Function LimNativeWidget.LimChatManager.DiscardConv // (Final|Native|Public|BlueprintCallable) // @ game+0x948610
	void DestroyInstance(); // Function LimNativeWidget.LimChatManager.DestroyInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9485f0
	bool CheckTargetIsContainIn(struct FChatListConvData& InConvData); // Function LimNativeWidget.LimChatManager.CheckTargetIsContainIn // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x948530
};

// Class LimNativeWidget.LimNativeWidgetSettings
// Size: 0x188 (Inherited: 0x38)
struct ULimNativeWidgetSettings : UDeveloperSettings {
	struct FString rDownloadPath; // 0x38(0x10)
	int32_t FileIOThreadIntervalMs; // 0x48(0x04)
	float CachedDiskFileExpiredDuration; // 0x4c(0x04)
	float CachedResponseExpiredDuration; // 0x50(0x04)
	int32_t CachedResponseMaxCount; // 0x54(0x04)
	struct FSoftObjectPath LocalizationTable; // 0x58(0x18)
	struct FString EnvId; // 0x70(0x10)
	struct FString GME_AppId; // 0x80(0x10)
	struct FString GME_PrivateKey; // 0x90(0x10)
	struct FString GME_Test_AppId; // 0xa0(0x10)
	struct FString GME_Test_PrivateKey; // 0xb0(0x10)
	bool bTestGmeEnv; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float GME_EventTick; // 0xc4(0x04)
	int32_t MaxRecordingTime; // 0xc8(0x04)
	bool bShowLimSdkLog; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct FString Lim_SDKRegion; // 0xd0(0x10)
	int32_t Lim_GameID; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FString Lim_Slssvr; // 0xe8(0x10)
	int32_t Use_Farlight_Domain; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString Nertc_AppKey; // 0x100(0x10)
	struct FString Nertc_AppToken; // 0x110(0x10)
	struct FString Nertc_Test_AppKey; // 0x120(0x10)
	struct FString Nertc_Test_AppToken; // 0x130(0x10)
	struct FString Agora_AppKey; // 0x140(0x10)
	struct FString Agora_AppToken; // 0x150(0x10)
	struct FString Agora_Test_AppKey; // 0x160(0x10)
	struct FString Agora_Test_AppToken; // 0x170(0x10)
	bool bEnvOversea; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)

	struct ULimNativeWidgetSettings* GetInstance(); // Function LimNativeWidget.LimNativeWidgetSettings.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x94db60
};

// Class LimNativeWidget.NertcManager
// Size: 0xe0 (Inherited: 0x28)
struct UNertcManager : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FMulticastInlineDelegate OnPermissionResult; // 0x38(0x10)
	struct FMulticastInlineDelegate OnEnterRoom; // 0x48(0x10)
	struct FMulticastInlineDelegate OnExitRoom; // 0x58(0x10)
	struct FMulticastInlineDelegate OnConnectionChanged; // 0x68(0x10)
	struct FMulticastInlineDelegate OnNertcUserInfoUpdate; // 0x78(0x10)
	struct FMulticastInlineDelegate OnNertcLocalInfoUpdate; // 0x88(0x10)
	struct FMulticastInlineDelegate OnUserRoomStateChange; // 0x98(0x10)
	struct FMulticastInlineDelegate OnAudioStateChanged; // 0xa8(0x10)
	struct TArray<int32_t> MuteUIDList; // 0xb8(0x10)
	char pad_C8[0x18]; // 0xc8(0x18)

	void UpdateSelfPosition(struct FVector& InSelfPosition, struct FRotator& InSelfRotator); // Function LimNativeWidget.NertcManager.UpdateSelfPosition // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x94e8c0
	void UpdateAudioRecvRange(int32_t InRange); // Function LimNativeWidget.NertcManager.UpdateAudioRecvRange // (Final|Native|Public|BlueprintCallable) // @ game+0x94e830
	void UnRegisterLuaEvent(); // Function LimNativeWidget.NertcManager.UnRegisterLuaEvent // (Event|Public|BlueprintEvent) // @ game+0x260de00
	void Uninit(); // Function LimNativeWidget.NertcManager.Uninit // (Final|Native|Public|BlueprintCallable) // @ game+0x94e810
	void SwitchRoom(struct FString RoomID, struct FString AppToken, int32_t Uid, int32_t TeamID, int32_t AudioDistance); // Function LimNativeWidget.NertcManager.SwitchRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x94e660
	void SetSubscribeAudioOnlyBy(struct TArray<int32_t>& OpenIDList); // Function LimNativeWidget.NertcManager.SetSubscribeAudioOnlyBy // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x94e5b0
	void SetSubscribeAudioBlocklist(struct TArray<int32_t>& OpenIDList); // Function LimNativeWidget.NertcManager.SetSubscribeAudioBlocklist // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x94e500
	void SetSubscribeAudioAllowlist(struct TArray<int32_t>& OpenIDList); // Function LimNativeWidget.NertcManager.SetSubscribeAudioAllowlist // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x94e450
	void SetRangeAudioTeamID(int32_t TeamID); // Function LimNativeWidget.NertcManager.SetRangeAudioTeamID // (Final|Native|Public|BlueprintCallable) // @ game+0x94e3c0
	void SetRangeAudioMode(enum class EChatGMERangeAudioMode InAudioMode); // Function LimNativeWidget.NertcManager.SetRangeAudioMode // (Final|Native|Public|BlueprintCallable) // @ game+0x94e340
	void SetClientRole(bool bBroadCast); // Function LimNativeWidget.NertcManager.SetClientRole // (Final|Native|Public|BlueprintCallable) // @ game+0x94e2b0
	void SetAudioSessionRestriction(); // Function LimNativeWidget.NertcManager.SetAudioSessionRestriction // (Final|Native|Public|BlueprintCallable) // @ game+0x8ee0f0
	void SetAudioSendAndRecvRules(enum class EChatGMEAudioRouteSendType InSendType, struct TArray<int32_t>& InSendOpenIDList, enum class EChatGMEAudioRouteRecvType InRecvType, struct TArray<int32_t>& InRecvOpenIDList); // Function LimNativeWidget.NertcManager.SetAudioSendAndRecvRules // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x94e110
	void SelectSpeak(struct FString InDeviceID); // Function LimNativeWidget.NertcManager.SelectSpeak // (Final|Native|Public|BlueprintCallable) // @ game+0x94e070
	void SelectMic(struct FString InDeviceID); // Function LimNativeWidget.NertcManager.SelectMic // (Final|Native|Public|BlueprintCallable) // @ game+0x94dfd0
	void OnUserRoomStateChange__DelegateSignature(bool EnterRoom, int32_t Uid); // DelegateFunction LimNativeWidget.NertcManager.OnUserRoomStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnUserInfoUpdateDelegate__DelegateSignature(struct FNertcUserUpdateData UserData); // DelegateFunction LimNativeWidget.NertcManager.OnUserInfoUpdateDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnNertcConnectionChange__DelegateSignature(int32_t State, int32_t reason); // DelegateFunction LimNativeWidget.NertcManager.OnNertcConnectionChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnLocalUserVolumeChanged__DelegateSignature(int32_t Volume, bool bVad); // DelegateFunction LimNativeWidget.NertcManager.OnLocalUserVolumeChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnExitRoomDelegate__DelegateSignature(int32_t Result, int64_t reason); // DelegateFunction LimNativeWidget.NertcManager.OnExitRoomDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnEnterRoomDelegate__DelegateSignature(int64_t RoomID, int32_t Uid, int32_t Result, int64_t Elapsed); // DelegateFunction LimNativeWidget.NertcManager.OnEnterRoomDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnAudioDeviceStateChanged__DelegateSignature(bool bChanged); // DelegateFunction LimNativeWidget.NertcManager.OnAudioDeviceStateChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnAndroidPermissionResult__DelegateSignature(bool bSuccess); // DelegateFunction LimNativeWidget.NertcManager.OnAndroidPermissionResult__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void MuteLocalStream(bool bMute); // Function LimNativeWidget.NertcManager.MuteLocalStream // (Final|Native|Public|BlueprintCallable) // @ game+0x94df40
	void MediaMute(int32_t Uid, bool bMute); // Function LimNativeWidget.NertcManager.MediaMute // (Final|Native|Public|BlueprintCallable) // @ game+0x94de70
	bool IsRoomEntered(); // Function LimNativeWidget.NertcManager.IsRoomEntered // (Final|Native|Public|BlueprintCallable) // @ game+0x94de40
	void InnerEnterRoom(struct FString RoomID, struct FString AppToken, int32_t Uid); // Function LimNativeWidget.NertcManager.InnerEnterRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x94dd00
	void InnerEnableMic(bool InEnable); // Function LimNativeWidget.NertcManager.InnerEnableMic // (Final|Native|Public|BlueprintCallable) // @ game+0x94d710
	void Init(struct FString Appkey); // Function LimNativeWidget.NertcManager.Init // (Final|Native|Public|BlueprintCallable) // @ game+0x94dc60
	struct TArray<struct FChatGMEDataDeviceInfo> GetSpeakerList(); // Function LimNativeWidget.NertcManager.GetSpeakerList // (Final|Native|Public|BlueprintCallable) // @ game+0x94dc10
	struct TArray<struct FChatGMEDataDeviceInfo> GetMicList(); // Function LimNativeWidget.NertcManager.GetMicList // (Final|Native|Public|BlueprintCallable) // @ game+0x94dbc0
	struct UNertcManager* GetInstance(); // Function LimNativeWidget.NertcManager.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x94db90
	int32_t GameSetSpeakerVolume(int32_t Volume); // Function LimNativeWidget.NertcManager.GameSetSpeakerVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x94dac0
	int32_t GameSetMicVolume(int32_t MicVolume); // Function LimNativeWidget.NertcManager.GameSetMicVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x94da20
	void ExitRoom(); // Function LimNativeWidget.NertcManager.ExitRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x94da00
	void EnterRoom(struct FString RoomID, struct FString AppToken, int32_t Uid); // Function LimNativeWidget.NertcManager.EnterRoom // (Final|Native|Public|BlueprintCallable) // @ game+0x94d8c0
	void EnableSpeaker(bool InEnable); // Function LimNativeWidget.NertcManager.EnableSpeaker // (Final|Native|Public|BlueprintCallable) // @ game+0x94d830
	void EnableRangeVoice(bool bEnbale); // Function LimNativeWidget.NertcManager.EnableRangeVoice // (Final|Native|Public|BlueprintCallable) // @ game+0x94d7a0
	void EnableMic(bool InEnable); // Function LimNativeWidget.NertcManager.EnableMic // (Final|Native|Public|BlueprintCallable) // @ game+0x94d710
	void EnabelAudioIndication(bool InEnable, int32_t millions, bool bEnbaleLocal); // Function LimNativeWidget.NertcManager.EnabelAudioIndication // (Final|Native|Public|BlueprintCallable) // @ game+0x94d600
	void DestroyInstance(); // Function LimNativeWidget.NertcManager.DestroyInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x94d5e0
};

