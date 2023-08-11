// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x30a60a0
	void SetWorldToMetersScale(struct UObject* WorldContext, float NewScale); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a5fc0
	void SetTrackingOrigin(enum class EHMDTrackingOrigin Origin); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a5ed0
	void SetSpectatorScreenTexture(struct UTexture* InTexture); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a5dc0
	void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x30a5bb0
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a5b40
	void SetClippingPlanes(float Near, float Far); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a5690
	void ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector options); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a5540
	bool IsSpectatorScreenModeControllable(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a54f0
	bool IsInLowPersistenceMode(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a51a0
	bool IsHeadMountedDisplayEnabled(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a5170
	bool IsHeadMountedDisplayConnected(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a5140
	bool IsDeviceTracking(struct FXRDeviceId& XRDeviceId); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x30a50a0
	bool HasValidTrackingPosition(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a5050
	float GetWorldToMetersScale(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a4fc0
	void GetVRFocusState(bool& bUseFocus, bool& bHasFocus); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x30a4ee0
	struct FTransform GetTrackingToWorldTransform(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x30a4e20
	void GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x30a4a40
	enum class EHMDTrackingOrigin GetTrackingOrigin(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a4a00
	float GetScreenPercentage(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a49d0
	void GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x30a4760
	float GetPixelDensity(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a4730
	void GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x30a4580
	int32_t GetNumOfTrackingSensors(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a4550
	enum class EHMDWornState GetHMDWornState(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a43d0
	struct FName GetHMDDeviceName(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a4390
	void GetDeviceWorldPose(struct UObject* WorldContext, struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& Position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x30a4160
	void GetDevicePose(struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& Position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x30a3f70
	struct TArray<struct FXRDeviceId> EnumerateTrackedDevices(struct FName SystemId, enum class EXRTrackedDeviceType DeviceType); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a3e20
	void EnableLowPersistenceMode(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a3b00
	bool EnableHMD(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a3a70
	void CalibrateExternalTrackingToHMD(struct FTransform& ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x30a36e0
};

// Class HeadMountedDisplay.MotionControllerComponent
// Size: 0x600 (Inherited: 0x540)
struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x540(0x04)
	enum class EControllerHand Hand; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	struct FName MotionSource; // 0x548(0x08)
	char bDisableLowLatencyUpdate : 1; // 0x550(0x01)
	char pad_550_1 : 7; // 0x550(0x01)
	char pad_551[0x3]; // 0x551(0x03)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x554(0x01)
	bool bDisplayDeviceModel; // 0x555(0x01)
	char pad_556[0x2]; // 0x556(0x02)
	struct FName DisplayModelSource; // 0x558(0x08)
	struct UStaticMesh* CustomDisplayMesh; // 0x560(0x08)
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x568(0x10)
	char pad_578[0x68]; // 0x578(0x68)
	struct UPrimitiveComponent* DisplayComponent; // 0x5e0(0x08)
	char pad_5E8[0x18]; // 0x5e8(0x18)

	void SetTrackingSource(enum class EControllerHand NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource // (Final|Native|Public|BlueprintCallable) // @ game+0x30a5f40
	void SetTrackingMotionSource(struct FName NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource // (Final|Native|Public|BlueprintCallable) // @ game+0x30a5e40
	void SetShowDeviceModel(bool bShowControllerModel); // Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel // (Final|Native|Public|BlueprintCallable) // @ game+0x30a5ab0
	void SetDisplayModelSource(struct FName NewDisplayModelSource); // Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource // (Final|Native|Public|BlueprintCallable) // @ game+0x30a57e0
	void SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh); // Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x30a5750
	void SetAssociatedPlayerIndex(int32_t NewPlayer); // Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x30a5600
	void OnMotionControllerUpdated(); // Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated // (Event|Protected|BlueprintEvent) // @ game+0x25d95f0
	bool IsTracked(); // Function HeadMountedDisplay.MotionControllerComponent.IsTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x30a5520
	enum class EControllerHand GetTrackingSource(); // Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x30a4df0
	float GetParameterValue(struct FName InName, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x30a4650
	struct FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x30a4400
};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary {

	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a5870
	bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a5420
	bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a5350
	bool IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a52c0
	bool IsMotionTrackedDeviceCountManagementNecessary(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a5290
	bool IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a51c0
	int32_t GetMotionTrackingEnabledControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a4520
	int32_t GetMaximumMotionTrackedControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x30a44f0
	struct FName GetActiveTrackingSystemName(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a3f30
	struct TArray<struct FName> EnumerateMotionSources(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a3da0
	bool EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a3cd0
	bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a3c00
	bool EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a3b70
	void DisableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a39b0
	void DisableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a38f0
	void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a3870
	void DisableMotionTrackingOfAllControllers(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a3850
	void DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a37d0
};

// Class HeadMountedDisplay.VRNotificationsComponent
// Size: 0x140 (Inherited: 0xb0)
struct UVRNotificationsComponent : UActorComponent {
	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xb0(0x10)
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xc0(0x10)
	struct FMulticastInlineDelegate HMDRecenteredDelegate; // 0xd0(0x10)
	struct FMulticastInlineDelegate HMDLostDelegate; // 0xe0(0x10)
	struct FMulticastInlineDelegate HMDReconnectedDelegate; // 0xf0(0x10)
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x100(0x10)
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x110(0x10)
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x120(0x10)
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x130(0x10)
};

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXRAssetFunctionLibrary : UBlueprintFunctionLibrary {

	struct UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x30a34a0
	struct UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x30a2e30
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Size: 0x60 (Inherited: 0x30)
struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnModelLoaded; // 0x30(0x10)
	struct FMulticastInlineDelegate OnLoadFailure; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct UPrimitiveComponent* SpawnedComponent; // 0x58(0x08)

	struct UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x30a3200
	struct UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, struct UPrimitiveComponent*& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x30a2c00
};

// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXRLoadingScreenFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a6080
	void SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x30a58f0
	void HideLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a5080
	void ClearLoadingScreenSplashes(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30a37b0
	void AddLoadingScreenSplash(struct UTexture* Texture, struct FVector Translation, struct FRotator Rotation, struct FVector2D Size, struct FRotator DeltaRotation, bool bClearBeforeAdd); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x30a3000
};

