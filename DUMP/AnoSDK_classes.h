// Class AnoSDK.AnoSDK
// Size: 0x88 (Inherited: 0x28)
struct UAnoSDK : UObject {
	struct FMulticastInlineDelegate OnAnoRecvAntiData; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct FMulticastInlineDelegate OnAnoSentDataToSvr; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct FMulticastInlineDelegate OnAnoSentCoreData; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
	struct FMulticastInlineDelegate OnAnoSentCoreTimeData; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)

	void OnAnoSentAntiData__DelegateSignature(struct FAnoSDKAntiData AntiData); // DelegateFunction AnoSDK.AnoSDK.OnAnoSentAntiData__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x25d85b0
	void OnAnoRecvAntiData__DelegateSignature(int32_t Type, struct FString AntiData); // DelegateFunction AnoSDK.AnoSDK.OnAnoRecvAntiData__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x25d85b0
	struct UAnoSDK* GetInstance(); // Function AnoSDK.AnoSDK.GetInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16b41b0
	void DestoryInstance(); // Function AnoSDK.AnoSDK.DestoryInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16b4190
	void AnoUESDKSetUserInfo(enum class ETssSDKEntryId EntryId, struct FString OpenId); // Function AnoSDK.AnoSDK.AnoUESDKSetUserInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16b4070
	void AnoUESDKSetCSChannelDomain(struct FString DomainName); // Function AnoSDK.AnoSDK.AnoUESDKSetCSChannelDomain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9cf270
	void AnoUESDKSetChannelIP(struct FString IP); // Function AnoSDK.AnoSDK.AnoUESDKSetChannelIP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9cf270
	void AnoUESDKSendSDKCoreData(); // Function AnoSDK.AnoSDK.AnoUESDKSendSDKCoreData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d1bb0
	void AnoUESDKSendDataToSvr(); // Function AnoSDK.AnoSDK.AnoUESDKSendDataToSvr // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d1bb0
	void AnoUESDKSendCoreTimeData(); // Function AnoSDK.AnoSDK.AnoUESDKSendCoreTimeData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16b4050
	void AnoUESDKReportThreadShutDown(); // Function AnoSDK.AnoSDK.AnoUESDKReportThreadShutDown // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x997950
	void AnoUESDKReportThreadInit(); // Function AnoSDK.AnoSDK.AnoUESDKReportThreadInit // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x997950
	void AnoUESDKRegistInfoListener(); // Function AnoSDK.AnoSDK.AnoUESDKRegistInfoListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d1bb0
	void AnoUESDKOnResume(); // Function AnoSDK.AnoSDK.AnoUESDKOnResume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d1bb0
	void AnoUESDKOnRecvSignature(struct FString Name, struct FString Buf, int32_t Len, int32_t Crc); // Function AnoSDK.AnoSDK.AnoUESDKOnRecvSignature // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16b3ee0
	void AnoUESDKOnRecvData(struct FString Data); // Function AnoSDK.AnoSDK.AnoUESDKOnRecvData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9cf270
	void AnoUESDKOnPause(); // Function AnoSDK.AnoSDK.AnoUESDKOnPause // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9d1bb0
	void AnoUESDKIoctl(int32_t Request, struct FString Cmd); // Function AnoSDK.AnoSDK.AnoUESDKIoctl // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16b3dc0
	void AnoUESDKInit(int32_t GameID, struct FString Appkey); // Function AnoSDK.AnoSDK.AnoUESDKInit // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16b3cf0
};

// Class AnoSDK.AnoSDKSettings
// Size: 0x40 (Inherited: 0x38)
struct UAnoSDKSettings : UDeveloperSettings {
	bool bEnableAnoSDK; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

