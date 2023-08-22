// Class UMG.Visual
// Size: 0x28 (Inherited: 0x28)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x138 (Inherited: 0x28)
struct UWidget : UVisual {
	struct UPanelSlot* Slot; // 0x28(0x08)
	struct FDelegate bIsEnabledDelegate; // 0x30(0x10)
	struct FText ToolTipText; // 0x40(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x58(0x10)
	struct UWidget* ToolTipWidget; // 0x68(0x08)
	struct FDelegate ToolTipWidgetDelegate; // 0x70(0x10)
	struct FDelegate VisibilityDelegate; // 0x80(0x10)
	struct FWidgetTransform RenderTransform; // 0x90(0x1c)
	struct FVector2D RenderTransformPivot; // 0xac(0x08)
	char bIsVariable : 1; // 0xb4(0x01)
	char bCreatedByConstructionScript : 1; // 0xb4(0x01)
	char bIsEnabled : 1; // 0xb4(0x01)
	char bOverride_Cursor : 1; // 0xb4(0x01)
	char pad_B4_4 : 4; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xb8(0x08)
	char bIsVolatile : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	enum class EMouseCursor Cursor; // 0xc1(0x01)
	enum class EWidgetClipping Clipping; // 0xc2(0x01)
	enum class ESlateVisibility Visibility; // 0xc3(0x01)
	float RenderOpacity; // 0xc4(0x04)
	enum class ESlateDetailMode DetailMode; // 0xc8(0x01)
	bool bSelectedDetailModeOnly; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	int32_t WidthDivisor; // 0xcc(0x04)
	int32_t HeightDivisor; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UWidgetNavigation* Navigation; // 0xd8(0x08)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xe0(0x01)
	char pad_E1[0x47]; // 0xe1(0x47)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x128(0x10)

	void SetWidthHeightDivisors(int32_t InWidthDivisor, int32_t InHeightDivisor); // Function UMG.Widget.SetWidthHeightDivisors // (Final|Native|Public|BlueprintCallable) // @ game+0x34eba50
	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility // (Native|Public|BlueprintCallable) // @ game+0x34eb9d0
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x34eb7a0
	void SetToolTipText(struct FText& InToolTipText); // Function UMG.Widget.SetToolTipText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34eb6d0
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip // (Final|Native|Public|BlueprintCallable) // @ game+0x34eb640
	void SetSelectedDetailModeOnly(bool InSelectedDetailModeOnly); // Function UMG.Widget.SetSelectedDetailModeOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x34eb520
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34eb4a0
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34eb420
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x34eb3a0
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform // (Final|Native|Public|BlueprintCallable) // @ game+0x34eb2c0
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34eb240
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34eb1c0
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x34eb140
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit // (Final|Native|Public|BlueprintCallable) // @ game+0x34eafe0
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary // (Final|Native|Public|BlueprintCallable) // @ game+0x34eaef0
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom // (Final|Native|Public|BlueprintCallable) // @ game+0x34eae00
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase // (Final|Native|Public|BlueprintCallable) // @ game+0x34ead30
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule // (Final|Native|Public|BlueprintCallable) // @ game+0x34eac20
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x34eac00
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled // (Native|Public|BlueprintCallable) // @ game+0x34eab70
	void SetFocus(); // Function UMG.Widget.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x34eaad0
	void SetDetailMode(enum class ESlateDetailMode InDetailMode); // Function UMG.Widget.SetDetailMode // (Final|Native|Public|BlueprintCallable) // @ game+0x34ea9c0
	void SetCursor(enum class EMouseCursor InCursor); // Function UMG.Widget.SetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0x34ea940
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping // (Final|Native|Public|BlueprintCallable) // @ game+0x34ea8c0
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules // (Final|Native|Public|BlueprintCallable) // @ game+0x34ea7f0
	void ResetCursor(); // Function UMG.Widget.ResetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0x34ea7d0
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // (Native|Public|BlueprintCallable) // @ game+0x7cfe90
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x260de00
	bool IsVisible(); // Function UMG.Widget.IsVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea7a0
	bool IsHovered(); // Function UMG.Widget.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x30b65b0
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // (Final|Native|Public|BlueprintCallable) // @ game+0x34ea780
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea6e0
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea640
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea570
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea540
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea510
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea4e0
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea4b0
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea480
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea360
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea300
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea2d0
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea2a0
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea260
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea230
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea200
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // (Public|Delegate|HasDefaults) // @ game+0x260de00
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea1d0
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea1a0
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea130
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea100
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea0c0
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile // (Final|Native|Public|BlueprintCallable) // @ game+0x34ea030
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // (Final|Native|Public|BlueprintCallable) // @ game+0x34ea010
};

// Class UMG.UserWidget
// Size: 0x260 (Inherited: 0x138)
struct UUserWidget : UWidget {
	char pad_138[0x8]; // 0x138(0x08)
	struct FLinearColor ColorAndOpacity; // 0x140(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x150(0x10)
	struct FSlateColor ForegroundColor; // 0x160(0x28)
	struct FDelegate ForegroundColorDelegate; // 0x188(0x10)
	struct FMargin Padding; // 0x198(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1a8(0x10)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1b8(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x1c8(0x10)
	struct UWidgetTree* WidgetTree; // 0x1d8(0x08)
	int32_t Priority; // 0x1e0(0x04)
	char bSupportsKeyboardFocus : 1; // 0x1e4(0x01)
	char bIsFocusable : 1; // 0x1e4(0x01)
	char bStopAction : 1; // 0x1e4(0x01)
	char bHasScriptImplementedTick : 1; // 0x1e4(0x01)
	char bHasScriptImplementedPaint : 1; // 0x1e4(0x01)
	char pad_1E4_5 : 3; // 0x1e4(0x01)
	char pad_1E5[0xb]; // 0x1e5(0x0b)
	enum class EWidgetTickFrequency TickFrequency; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct UInputComponent* InputComponent; // 0x1f8(0x08)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x200(0x10)
	char pad_210[0x50]; // 0x210(0x50)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0x34e8090
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x34e7fb0
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x34e7ed0
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x34e7e40
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x34e7db0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction // (Final|Native|Protected|BlueprintCallable) // @ game+0x34e7ce0
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // (Final|Native|Protected|BlueprintCallable) // @ game+0x34e7cc0
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0x34e7ca0
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x34e7c10
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // (Final|Native|Public|BlueprintCallable) // @ game+0x34e7bf0
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e78f0
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e7820
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e7790
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e7700
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e7630
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority // (Final|Native|Protected|BlueprintCallable) // @ game+0x34e73d0
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking // (Final|Native|Protected|BlueprintCallable) // @ game+0x34e7340
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e71d0
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e7050
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e6f30
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e6ea0
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e6e20
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e6d90
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e6d70
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0x34e6d50
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e6cc0
	void PlayEnterAnim(); // Function UMG.UserWidget.PlayEnterAnim // (Event|Public|BlueprintEvent) // @ game+0x260de00
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e6aa0
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e6980
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e6860
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e6690
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e65f0
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchStarted // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchMoved // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Function UMG.UserWidget.OnTouchGesture // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchEnded // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown // (Event|Public|BlueprintEvent) // @ game+0x260de00
	void OnPaint(struct FPaintContext& Context); // Function UMG.UserWidget.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x260de00
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UMG.UserWidget.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x260de00
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x2149830
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x34e6560
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged // (Event|Public|BlueprintEvent) // @ game+0x260de00
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction // (Final|Native|Protected|BlueprintCallable) // @ game+0x34e63d0
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34e63a0
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x34e6300
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34e60e0
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable // (BlueprintCosmetic|Event|Public|BlueprintEvent|Const) // @ game+0x260de00
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34e62d0
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e6230
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34e6190
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34e6140
	struct AHUD* GetOwningHUD(); // Function UMG.UserWidget.GetOwningHUD // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34e6110
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34e60e0
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34e6040
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34e6000
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34e5fc0
	void DoPlayEnterAnim(bool InPlayFlag); // Function UMG.UserWidget.DoPlayEnterAnim // (Final|Native|Public|BlueprintCallable) // @ game+0x34e5f10
	void Destruct(); // Function UMG.UserWidget.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	void Construct(); // Function UMG.UserWidget.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x260de00
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0x34e5ed0
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x34e5df0
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x34e5d10
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x34e5b90
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e5b00
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x34e5a60
};

// Class UMG.Slider
// Size: 0x598 (Inherited: 0x138)
struct USlider : UWidget {
	float Value; // 0x138(0x04)
	struct FDelegate ValueDelegate; // 0x13c(0x10)
	float MinValue; // 0x14c(0x04)
	float MaxValue; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FSliderStyle WidgetStyle; // 0x158(0x3a0)
	enum class EOrientation Orientation; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	struct FLinearColor SliderBarColor; // 0x4fc(0x10)
	struct FLinearColor SliderHandleColor; // 0x50c(0x10)
	struct FVector2D SliderHandleOffset; // 0x51c(0x08)
	bool CommitTouchStartValue; // 0x524(0x01)
	bool IndentHandle; // 0x525(0x01)
	bool Locked; // 0x526(0x01)
	bool MouseUsesStep; // 0x527(0x01)
	bool RequiresControllerLock; // 0x528(0x01)
	char pad_529[0x3]; // 0x529(0x03)
	float StepSize; // 0x52c(0x04)
	bool IsFocusable; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x538(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x548(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x558(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x568(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x578(0x10)
	char pad_588[0x10]; // 0x588(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x34e10e0
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x34e0d40
	void SetSliderHandleOffset(struct FVector2D InValue); // Function UMG.Slider.SetSliderHandleOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e0cc0
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e0c30
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e0ba0
	void SetNormalBarImage(struct FSlateBrush& InImage); // Function UMG.Slider.SetNormalBarImage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34e0760
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x34e0660
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x34e03d0
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x34e0230
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x34e0120
	void SetHoveredBarImage(struct FSlateBrush& InImage); // Function UMG.Slider.SetHoveredBarImage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34dff80
	void SetBarThickness(float InValue); // Function UMG.Slider.SetBarThickness // (Final|Native|Public|BlueprintCallable) // @ game+0x34dfb80
	float GetValue(); // Function UMG.Slider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34df850
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34df660
};

// Class UMG.PanelWidget
// Size: 0x150 (Inherited: 0x138)
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt // (Final|Native|Public|BlueprintCallable) // @ game+0x34d6c50
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild // (Final|Native|Public|BlueprintCallable) // @ game+0x34d6bb0
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d6a20
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb9fdd0
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d66d0
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d6630
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d6590
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d6510
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren // (Native|Public|BlueprintCallable) // @ game+0x34d6440
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild // (Final|Native|Public|BlueprintCallable) // @ game+0x34d6300
};

// Class UMG.WidgetSwitcher
// Size: 0x168 (Inherited: 0x150)
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x150(0x04)
	char pad_154[0x14]; // 0x154(0x14)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0xbaaad0
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget // (Native|Public|BlueprintCallable) // @ game+0xbaa9b0
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbaa540
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f4d50
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f4a80
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f4a50
};

// Class UMG.ContentWidget
// Size: 0x150 (Inherited: 0x150)
struct UContentWidget : UPanelWidget {

	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent // (Final|Native|Public|BlueprintCallable) // @ game+0x34cdce0
	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd550
	struct UWidget* GetContent(); // Function UMG.ContentWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd520
};

// Class UMG.Border
// Size: 0x2b0 (Inherited: 0x150)
struct UBorder : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x150(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x151(0x01)
	char bShowEffectWhenDisabled : 1; // 0x152(0x01)
	char pad_152_1 : 7; // 0x152(0x01)
	char pad_153[0x1]; // 0x153(0x01)
	struct FLinearColor ContentColorAndOpacity; // 0x154(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x164(0x10)
	struct FMargin Padding; // 0x174(0x10)
	char pad_184[0x4]; // 0x184(0x04)
	struct FSlateBrush Background; // 0x188(0x98)
	struct FDelegate BackgroundDelegate; // 0x220(0x10)
	struct FLinearColor BrushColor; // 0x230(0x10)
	struct FDelegate BrushColorDelegate; // 0x240(0x10)
	struct FVector2D DesiredSizeScale; // 0x250(0x08)
	bool bFlipForRightToLeftFlowDirection; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x25c(0x10)
	struct FDelegate OnMouseButtonUpEvent; // 0x26c(0x10)
	struct FDelegate OnMouseMoveEvent; // 0x27c(0x10)
	struct FDelegate OnMouseDoubleClickEvent; // 0x28c(0x10)
	char pad_29C[0x14]; // 0x29c(0x14)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34cab60
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34ca3d0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34c9cd0
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34c9b50
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34c9ac0
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x34c9820
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x34c9820
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x34c9790
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34c9700
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Border.SetBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34c9570
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x34c8e40
};

// Class UMG.DynamicEntryBoxBase
// Size: 0x1f8 (Inherited: 0x138)
struct UDynamicEntryBoxBase : UWidget {
	enum class EDynamicBoxType EntryBoxType; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	struct FVector2D EntrySpacing; // 0x13c(0x08)
	char pad_144[0x4]; // 0x144(0x04)
	struct TArray<struct FVector2D> SpacingPattern; // 0x148(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x158(0x08)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x160(0x01)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	int32_t MaxElementSize; // 0x164(0x04)
	char pad_168[0x10]; // 0x168(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x178(0x80)

	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x34cdd80
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd5f0
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd490
};

// Class UMG.Button
// Size: 0x498 (Inherited: 0x150)
struct UButton : UContentWidget {
	struct USlateWidgetStyleAsset* Style; // 0x150(0x08)
	struct FButtonStyle WidgetStyle; // 0x158(0x2b8)
	struct FLinearColor ColorAndOpacity; // 0x410(0x10)
	struct FLinearColor BackgroundColor; // 0x420(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x430(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x431(0x01)
	enum class EButtonPressMethod PressMethod; // 0x432(0x01)
	bool IsFocusable; // 0x433(0x01)
	char pad_434[0x4]; // 0x434(0x04)
	struct FMulticastInlineDelegate OnClicked; // 0x438(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x448(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x458(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x468(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x478(0x10)
	char pad_488[0x10]; // 0x488(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x34ca960
	void SetStyle(struct FButtonStyle& InStyle); // Function UMG.Button.SetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34ca880
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x34ca680
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34c9a30
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x34c9930
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34c9380
	bool IsPressed(); // Function UMG.Button.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c90f0
};

// Class UMG.TextLayoutWidget
// Size: 0x160 (Inherited: 0x138)
struct UTextLayoutWidget : UWidget {
	struct FShapedTextOptions ShapedTextOptions; // 0x138(0x03)
	enum class ETextJustify Justification; // 0x13b(0x01)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x13c(0x01)
	char AutoWrapText : 1; // 0x13d(0x01)
	char pad_13D_1 : 7; // 0x13d(0x01)
	char pad_13E[0x2]; // 0x13e(0x02)
	float WrapTextAt; // 0x140(0x04)
	struct FMargin Margin; // 0x144(0x10)
	float LineHeightPercentage; // 0x154(0x04)
	char AlwaysKeepJustification : 1; // 0x158(0x01)
	char pad_158_1 : 7; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)

	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification // (Native|Public|BlueprintCallable) // @ game+0x34e01b0
};

// Class UMG.TextBlock
// Size: 0x2f8 (Inherited: 0x160)
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x160(0x18)
	struct FDelegate TextDelegate; // 0x178(0x10)
	struct FSlateColor ColorAndOpacity; // 0x188(0x28)
	struct FDelegate ColorAndOpacityDelegate; // 0x1b0(0x10)
	struct FSlateFontInfo Font; // 0x1c0(0x60)
	struct FSlateBrush StrikeBrush; // 0x220(0x98)
	struct FVector2D ShadowOffset; // 0x2b8(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x2c0(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x2d0(0x10)
	float MinDesiredWidth; // 0x2e0(0x04)
	bool bWrapWithInvalidationPanel; // 0x2e4(0x01)
	bool bAutoWrapText; // 0x2e5(0x01)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x2e6(0x01)
	bool bSimpleTextMode; // 0x2e7(0x01)
	char pad_2E8[0x10]; // 0x2e8(0x10)

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.TextBlock.SetTextTransformPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0x34e1060
	void SetText(struct FText InText); // Function UMG.TextBlock.SetText // (Native|Public|BlueprintCallable) // @ game+0x34e0f70
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush // (Final|Native|Public|BlueprintCallable) // @ game+0x34e0dc0
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e0aa0
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e0a10
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x34e0990
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x34e04d0
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont // (Final|Native|Public|BlueprintCallable) // @ game+0x34dfd70
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x34dfc00
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0x34dfaf0
	struct FText GetText(); // Function UMG.TextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34df710
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x34df510
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x34df4e0
};

// Class UMG.ScrollBox
// Size: 0x980 (Inherited: 0x150)
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x150(0x268)
	struct FScrollBarStyle WidgetBarStyle; // 0x3b8(0x560)
	struct USlateWidgetStyleAsset* Style; // 0x918(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x920(0x08)
	enum class EOrientation Orientation; // 0x928(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x929(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x92a(0x01)
	char pad_92B[0x1]; // 0x92b(0x01)
	struct FVector2D ScrollbarThickness; // 0x92c(0x08)
	struct FMargin ScrollbarPadding; // 0x934(0x10)
	bool AlwaysShowScrollbar; // 0x944(0x01)
	bool AlwaysShowScrollbarTrack; // 0x945(0x01)
	bool AllowOverscroll; // 0x946(0x01)
	bool bAnimateWheelScrolling; // 0x947(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0x948(0x01)
	char pad_949[0x3]; // 0x949(0x03)
	float NavigationScrollPadding; // 0x94c(0x04)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x950(0x01)
	bool bAllowRightClickDragScrolling; // 0x951(0x01)
	char pad_952[0x2]; // 0x952(0x02)
	float WheelScrollMultiplier; // 0x954(0x04)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x958(0x10)
	char pad_968[0x18]; // 0x968(0x18)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x34dcc90
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc500
	void SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollBarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc480
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x34dc620
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34dc580
	void SetOrientation(enum class EOrientation NewOrientation); // Function UMG.ScrollBox.SetOrientation // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc250
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel // (Final|Native|Public|BlueprintCallable) // @ game+0x34db6e0
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x34db5c0
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar // (Final|Native|Public|BlueprintCallable) // @ game+0x34db530
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll // (Final|Native|Public|BlueprintCallable) // @ game+0x34db4a0
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0x34db340
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // (Final|Native|Public|BlueprintCallable) // @ game+0x34db320
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x34db300
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34daaa0
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34da9d0
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34da9a0
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x34da3c0
};

// Class UMG.Image
// Size: 0x250 (Inherited: 0x138)
struct UImage : UWidget {
	struct FSlateBrush Brush; // 0x138(0x98)
	struct FDelegate BrushDelegate; // 0x1d0(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1e0(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x1f0(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x204(0x10)
	char pad_214[0x3c]; // 0x214(0x3c)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2900
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34d2170
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1ff0
	void SetBrushSize(struct FVector2D DesiredSize); // Function UMG.Image.SetBrushSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34d1f70
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1ee0
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic // (Native|Public|BlueprintCallable) // @ game+0x214a190
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture // (Native|Public|BlueprintCallable) // @ game+0x2149ff0
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture // (Native|Public|BlueprintCallable) // @ game+0x2149d50
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial // (Native|Public|BlueprintCallable) // @ game+0x2149b30
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial // (Native|Public|BlueprintCallable) // @ game+0xbaa9b0
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface // (Native|Public|BlueprintCallable) // @ game+0x21498c0
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset // (Native|Public|BlueprintCallable) // @ game+0x21497a0
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Image.SetBrush // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2149460
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x34d15f0
};

// Class UMG.ListViewBase
// Size: 0x7c8 (Inherited: 0x138)
struct UListViewBase : UWidget {
	struct UUserWidget* EntryWidgetClass; // 0x138(0x08)
	float WheelScrollMultiplier; // 0x140(0x04)
	bool bEnableScrollAnimation; // 0x144(0x01)
	bool bEnableFixedLineOffset; // 0x145(0x01)
	bool bClampScroll; // 0x146(0x01)
	bool bDisableScroll; // 0x147(0x01)
	float FixedLineScrollOffset; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x150(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x160(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x170(0x80)
	struct FScrollBarStyle WidgetBarStyle; // 0x1f0(0x560)
	enum class ESlateVisibility ScrollBarVisibility; // 0x750(0x01)
	char pad_751[0x3]; // 0x751(0x03)
	struct FVector2D ScrollbarThickness; // 0x754(0x08)
	struct FMargin ScrollbarPadding; // 0x75c(0x10)
	bool AlwaysShowScrollbar; // 0x76c(0x01)
	bool AlwaysShowScrollbarTrack; // 0x76d(0x01)
	char pad_76E[0x5a]; // 0x76e(0x5a)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x34d3200
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2bc0
	void SetScrollBarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollBarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2d70
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ListViewBase.SetScrollbarThickness // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x34d2ce0
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ListViewBase.SetScrollbarPadding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34d2c40
	void SetEnableScrollAnimation(bool bNewEnableScrollAnimation); // Function UMG.ListViewBase.SetEnableScrollAnimation // (Final|Native|Protected|BlueprintCallable) // @ game+0x34d23b0
	void SetDisableScroll(bool bInDisableScroll); // Function UMG.ListViewBase.SetDisableScroll // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2320
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ListViewBase.SetAlwaysShowScrollbar // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1e50
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1d10
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1cf0
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1c40
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1b90
	float GetScrollOffset(); // Function UMG.ListViewBase.GetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1930
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d1560
	bool GetDisableScroll(); // Function UMG.ListViewBase.GetDisableScroll // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1530
};

// Class UMG.ListView
// Size: 0x950 (Inherited: 0x7c8)
struct UListView : UListViewBase {
	char pad_7C8[0xc0]; // 0x7c8(0xc0)
	enum class EOrientation Orientation; // 0x888(0x01)
	enum class ESelectionMode SelectionMode; // 0x889(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x88a(0x01)
	bool bClearSelectionOnClick; // 0x88b(0x01)
	bool bIsFocusable; // 0x88c(0x01)
	char pad_88D[0x3]; // 0x88d(0x03)
	float EntrySpacing; // 0x890(0x04)
	bool bReturnFocusToSelection; // 0x894(0x01)
	char pad_895[0x3]; // 0x895(0x03)
	float ListItemStartPosOffset; // 0x898(0x04)
	char pad_89C[0x4]; // 0x89c(0x04)
	struct TArray<struct UObject*> ListItems; // 0x8a0(0x10)
	char pad_8B0[0x10]; // 0x8b0(0x10)
	bool EnableDelayAdd; // 0x8c0(0x01)
	char pad_8C1[0x3]; // 0x8c1(0x03)
	float DelayAddInterval; // 0x8c4(0x04)
	int32_t NumInPanel; // 0x8c8(0x04)
	char pad_8CC[0x4]; // 0x8cc(0x04)
	struct TArray<struct UObject*> DelayAddedListItems; // 0x8d0(0x10)
	bool DelayAddAnimFlag; // 0x8e0(0x01)
	char pad_8E1[0x7]; // 0x8e1(0x07)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x8e8(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x8f8(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x908(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x918(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x928(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x938(0x10)
	char pad_948[0x8]; // 0x948(0x08)

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2f70
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2df0
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1c60
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1bb0
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1b00
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d1ad0
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d1860
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d1830
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d16f0
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d1620
	struct TArray<struct UObject*> GetDelayAddedListItems(); // Function UMG.ListView.GetDelayAddedListItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d1500
	void ClearListItems(); // Function UMG.ListView.ClearListItems // (Final|Native|Public|BlueprintCallable) // @ game+0x34d14b0
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem // (Final|Native|Private|BlueprintCallable) // @ game+0x34d1420
	void BP_SetListItems(struct TArray<struct UObject*>& InListItems); // Function UMG.ListView.BP_SetListItems // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x34d1370
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection // (Final|Native|Private|BlueprintCallable) // @ game+0x34d12a0
	void BP_SetDelayAddListItems(struct TArray<struct UObject*>& InListItems); // Function UMG.ListView.BP_SetDelayAddListItems // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x34d11f0
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0x34d1160
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem // (Final|Native|Private|BlueprintCallable) // @ game+0x34d10d0
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d1030
	bool BP_GetSelectedItems(struct TArray<struct UObject*>& Items); // Function UMG.ListView.BP_GetSelectedItems // (Final|Native|Private|HasOutParms|BlueprintCallable|Const) // @ game+0x34d0f70
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d0f40
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d0f10
	void BP_DoDelayAddTick(float DeltaTime); // Function UMG.ListView.BP_DoDelayAddTick // (Final|Native|Private|BlueprintCallable) // @ game+0x34d0e90
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection // (Final|Native|Private|BlueprintCallable) // @ game+0x34d0e70
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0x34d0e50
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem // (Final|Native|Public|BlueprintCallable) // @ game+0x34d0dc0
};

// Class UMG.PanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; // 0x28(0x08)
	struct UWidget* Content; // 0x30(0x08)
};

// Class UMG.RichTextBlock
// Size: 0x720 (Inherited: 0x160)
struct URichTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x160(0x18)
	struct UDataTable* TextStyleSet; // 0x178(0x08)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x180(0x10)
	bool bOverrideDefaultStyle; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x198(0x2a8)
	float MinDesiredWidth; // 0x440(0x04)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	struct FTextBlockStyle DefaultTextStyle; // 0x448(0x2a8)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x6f0(0x10)
	char pad_700[0x20]; // 0x700(0x20)

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.RichTextBlock.SetTextTransformPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0x34dca90
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet // (Final|Native|Public|BlueprintCallable) // @ game+0x34dca00
	void SetText(struct FText& InText); // Function UMG.RichTextBlock.SetText // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x21beba0
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc150
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34dbc10
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34dba80
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34dba00
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34db970
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont // (Final|Native|Public|BlueprintCallable) // @ game+0x34db850
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x34db760
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0x34db650
	struct FText GetText(); // Function UMG.RichTextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34daa00
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x34da780
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides // (Final|Native|Public) // @ game+0x34da2a0
};

// Class UMG.TileView
// Size: 0x970 (Inherited: 0x950)
struct UTileView : UListView {
	float EntryHeight; // 0x950(0x04)
	float EntryWidth; // 0x954(0x04)
	enum class EListItemAlignment TileAlignment; // 0x958(0x01)
	bool bWrapHorizontalNavigation; // 0x959(0x01)
	char pad_95A[0x16]; // 0x95a(0x16)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x34e7150
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x34e70d0
};

// Class UMG.TreeView
// Size: 0x9a8 (Inherited: 0x950)
struct UTreeView : UListView {
	char pad_950[0x10]; // 0x950(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0x960(0x10)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x970(0x10)
	char pad_980[0x28]; // 0x980(0x28)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion // (Final|Native|Public|BlueprintCallable) // @ game+0x34e7460
	void ExpandAll(); // Function UMG.TreeView.ExpandAll // (Final|Native|Public|BlueprintCallable) // @ game+0x34e5fa0
	void CollapseAll(); // Function UMG.TreeView.CollapseAll // (Final|Native|Public|BlueprintCallable) // @ game+0x34e5ef0
};

// Class UMG.Overlay
// Size: 0x160 (Inherited: 0x150)
struct UOverlay : UPanelWidget {
	char pad_150[0x10]; // 0x150(0x10)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // (Final|Native|Public|BlueprintCallable) // @ game+0x34d63a0
};

// Class UMG.OverlaySlot
// Size: 0x58 (Inherited: 0x38)
struct UOverlaySlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34d78f0
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34d7300
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34d70d0
};

// Class UMG.SizeBox
// Size: 0x188 (Inherited: 0x150)
struct USizeBox : UContentWidget {
	char pad_150[0x10]; // 0x150(0x10)
	float WidthOverride; // 0x160(0x04)
	float HeightOverride; // 0x164(0x04)
	float MinDesiredWidth; // 0x168(0x04)
	float MinDesiredHeight; // 0x16c(0x04)
	float MaxDesiredWidth; // 0x170(0x04)
	float MaxDesiredHeight; // 0x174(0x04)
	float MinAspectRatio; // 0x178(0x04)
	float MaxAspectRatio; // 0x17c(0x04)
	char bOverride_WidthOverride : 1; // 0x180(0x01)
	char bOverride_HeightOverride : 1; // 0x180(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x180(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x180(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x180(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x180(0x01)
	char bOverride_MinAspectRatio : 1; // 0x180(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x34dcd10
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc1d0
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc0d0
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc050
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x34dbfd0
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x34dbf50
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x34dbed0
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x34dbcc0
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x34da3a0
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x34da380
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x34da360
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x34da340
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x34da320
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x34da300
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x34da2e0
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x34da2c0
};

// Class UMG.NamedSlot
// Size: 0x160 (Inherited: 0x150)
struct UNamedSlot : UContentWidget {
	char pad_150[0x10]; // 0x150(0x10)
};

// Class UMG.CanvasPanel
// Size: 0x168 (Inherited: 0x150)
struct UCanvasPanel : UPanelWidget {
	int32_t ReservedLayerSpace; // 0x150(0x04)
	char pad_154[0x14]; // 0x154(0x14)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // (Final|Native|Public|BlueprintCallable) // @ game+0x34c8bd0
};

// Class UMG.RichTextBlockDecorator
// Size: 0x28 (Inherited: 0x28)
struct URichTextBlockDecorator : UObject {
};

// Class UMG.CheckBox
// Size: 0x830 (Inherited: 0x150)
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	struct FDelegate CheckedStateDelegate; // 0x154(0x10)
	char pad_164[0x4]; // 0x164(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x168(0x610)
	struct USlateWidgetStyleAsset* Style; // 0x778(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x780(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x788(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x790(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x798(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x7a0(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x7a8(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x7b0(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x7b8(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x7c0(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x7c8(0x01)
	char pad_7C9[0x3]; // 0x7c9(0x03)
	struct FMargin Padding; // 0x7cc(0x10)
	char pad_7DC[0x4]; // 0x7dc(0x04)
	struct FSlateColor BorderBackgroundColor; // 0x7e0(0x28)
	enum class EButtonClickMethod ClickMethod; // 0x808(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x809(0x01)
	enum class EButtonPressMethod PressMethod; // 0x80a(0x01)
	bool IsFocusable; // 0x80b(0x01)
	char pad_80C[0x4]; // 0x80c(0x04)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x810(0x10)
	char pad_820[0x10]; // 0x820(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.CheckBox.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x34ca9e0
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.CheckBox.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x34ca700
	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x34c9dd0
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.CheckBox.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x34c99b0
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x34c98b0
	bool IsPressed(); // Function UMG.CheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c9120
	bool IsChecked(); // Function UMG.CheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c90c0
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c8e10
};

// Class UMG.DragDropOperation
// Size: 0x88 (Inherited: 0x28)
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x28(0x10)
	struct UObject* Payload; // 0x38(0x08)
	struct UWidget* DefaultDragVisual; // 0x40(0x08)
	enum class EDragPivot Pivot; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector2D Offset; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct FMulticastInlineDelegate OnDrop; // 0x58(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x68(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x78(0x10)

	void Drop(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Drop // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x34cd2b0
	void Dragged(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Dragged // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x34cd180
	void DragCancelled(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.DragCancelled // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x34cd050
};

// Class UMG.WidgetComponent
// Size: 0x6a0 (Inherited: 0x580)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0x578(0x01)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x579(0x01)
	struct UUserWidget* WidgetClass; // 0x580(0x08)
	struct FIntPoint DrawSize; // 0x588(0x08)
	bool bManuallyRedraw; // 0x590(0x01)
	bool bRedrawRequested; // 0x591(0x01)
	float RedrawTime; // 0x594(0x04)
	char pad_598[0x8]; // 0x598(0x08)
	struct FIntPoint CurrentDrawSize; // 0x5a0(0x08)
	bool bDrawAtDesiredSize; // 0x5a8(0x01)
	char pad_5A9[0x3]; // 0x5a9(0x03)
	struct FVector2D Pivot; // 0x5ac(0x08)
	bool bReceiveHardwareInput; // 0x5b4(0x01)
	bool bWindowFocusable; // 0x5b5(0x01)
	enum class EWindowVisibility WindowVisibility; // 0x5b6(0x01)
	bool bApplyGammaCorrection; // 0x5b7(0x01)
	struct ULocalPlayer* OwnerPlayer; // 0x5b8(0x08)
	struct FLinearColor BackgroundColor; // 0x5c0(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x5d0(0x10)
	float OpacityFromTexture; // 0x5e0(0x04)
	enum class EWidgetBlendMode BlendMode; // 0x5e4(0x01)
	bool bIsTwoSided; // 0x5e5(0x01)
	bool TickWhenOffscreen; // 0x5e6(0x01)
	char pad_5E7[0x1]; // 0x5e7(0x01)
	struct UUserWidget* Widget; // 0x5e8(0x08)
	char pad_5F0[0x20]; // 0x5f0(0x20)
	struct UBodySetup* BodySetup; // 0x610(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0x618(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x620(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0x628(0x08)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x630(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0x638(0x08)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x640(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x648(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x650(0x08)
	bool bAddedToScreen; // 0x658(0x01)
	bool bEditTimeUsable; // 0x659(0x01)
	char pad_65A[0x2]; // 0x65a(0x02)
	struct FName SharedLayerName; // 0x65c(0x08)
	int32_t LayerZOrder; // 0x664(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0x668(0x01)
	char pad_669[0x3]; // 0x669(0x03)
	float CylinderArcAngle; // 0x66c(0x04)
	char pad_670[0x30]; // 0x670(0x30)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x34f2c80
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable // (Final|Native|Public|BlueprintCallable) // @ game+0x34f2940
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace // (Final|Native|Public|BlueprintCallable) // @ game+0x34f28c0
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget // (Native|Public|BlueprintCallable) // @ game+0x34f2830
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided // (Final|Native|Public|BlueprintCallable) // @ game+0x34f27a0
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34f2710
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable) // @ game+0x34f2680
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime // (Final|Native|Public|BlueprintCallable) // @ game+0x34f2600
	void SetPivot(struct FVector2D& InPivot); // Function UMG.WidgetComponent.SetPivot // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x34f2570
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x34f24e0
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw // (Final|Native|Public|BlueprintCallable) // @ game+0x34f2320
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode // (Final|Native|Public|BlueprintCallable) // @ game+0x34f1c30
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34f1b90
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable) // @ game+0x34f1b00
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x34f1a80
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34f16c0
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw // (Native|Public|BlueprintCallable) // @ game+0x155a810
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0ec0
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0ea0
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0e80
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0e20
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0e00
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0de0
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0c30
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0c10
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0be0
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0bb0
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0b80
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0b60
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0590
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f03c0
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f03a0
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0350
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f0310
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x50 (Inherited: 0x30)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x34c8c70
};

// Class UMG.BackgroundBlur
// Size: 0x228 (Inherited: 0x150)
struct UBackgroundBlur : UContentWidget {
	struct FMargin Padding; // 0x150(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x160(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x161(0x01)
	bool bBlurOnce; // 0x162(0x01)
	bool bBlurState; // 0x163(0x01)
	bool bApplyAlphaToBlur; // 0x164(0x01)
	char pad_165[0x3]; // 0x165(0x03)
	float BlurStrength; // 0x168(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	int32_t BlurRadius; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FSlateBrush LowQualityFallbackBrush; // 0x178(0x98)
	char pad_210[0x18]; // 0x210(0x18)

	void StopOnFirstBlur(); // Function UMG.BackgroundBlur.StopOnFirstBlur // (Final|Native|Public|BlueprintCallable) // @ game+0x34cacf0
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34caa60
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34ca2b0
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34c9f00
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34c9bd0
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength // (Native|Public|BlueprintCallable) // @ game+0x227e2c0
	void SetBlurState(bool BlurState, bool RefreshCount); // Function UMG.BackgroundBlur.SetBlurState // (Final|Native|Public|BlueprintCallable) // @ game+0x34c94a0
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x34c9410
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // (Final|Native|Public|BlueprintCallable) // @ game+0x34c9260
};

// Class UMG.BackgroundBlurSlot
// Size: 0x60 (Inherited: 0x38)
struct UBackgroundBlurSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34caae0
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34ca340
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34c9c50
};

// Class UMG.PropertyBinding
// Size: 0x60 (Inherited: 0x28)
struct UPropertyBinding : UObject {
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x28(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x30(0x28)
	struct FName DestinationProperty; // 0x58(0x08)
};

// Class UMG.BoolBinding
// Size: 0x60 (Inherited: 0x60)
struct UBoolBinding : UPropertyBinding {

	bool GetValue(); // Function UMG.BoolBinding.GetValue // (Final|Native|Public|Const) // @ game+0x34c8f80
};

// Class UMG.BorderSlot
// Size: 0x60 (Inherited: 0x38)
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34cabe0
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34ca460
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34c9d50
};

// Class UMG.BrushBinding
// Size: 0x68 (Inherited: 0x60)
struct UBrushBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue // (Final|Native|Public|Const) // @ game+0x34c8fb0
};

// Class UMG.ButtonSlot
// Size: 0x60 (Inherited: 0x38)
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x20bdc20
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34ca4f0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x20bd8b0
};

// Class UMG.CanvasPanelSlot
// Size: 0x78 (Inherited: 0x38)
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; // 0x38(0x2c)
	bool bAutoSize; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	int32_t ZOrder; // 0x68(0x04)
	char pad_6C[0xc]; // 0x6c(0x0c)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder // (Final|Native|Public|BlueprintCallable) // @ game+0x34cac60
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34ca800
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34ca600
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets // (Final|Native|Public|BlueprintCallable) // @ game+0x34ca220
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum // (Final|Native|Public|HasDefaults) // @ game+0x34ca110
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum // (Final|Native|Public|HasDefaults) // @ game+0x34ca090
	void SetLayout(struct FAnchorData& InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34c9e60
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize // (Final|Native|Public|BlueprintCallable) // @ game+0x34c92f0
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors // (Final|Native|Public|BlueprintCallable) // @ game+0x34c91d0
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34c9150
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c9090
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c8f40
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c8f00
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c8ec0
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c8e70
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c8de0
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c8da0
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c8d60
};

// Class UMG.CheckedStateBinding
// Size: 0x68 (Inherited: 0x60)
struct UCheckedStateBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue // (Final|Native|Public|Const) // @ game+0x34c9060
};

// Class UMG.CircularThrobber
// Size: 0x200 (Inherited: 0x138)
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x138(0x04)
	float Period; // 0x13c(0x04)
	float Radius; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct USlateBrushAsset* PieceImage; // 0x148(0x08)
	struct FSlateBrush Image; // 0x150(0x98)
	bool bEnableRadius; // 0x1e8(0x01)
	char pad_1E9[0x17]; // 0x1e9(0x17)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x34ca780
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod // (Final|Native|Public|BlueprintCallable) // @ game+0x34ca580
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0x34ca190
};

// Class UMG.ColorBinding
// Size: 0x68 (Inherited: 0x60)
struct UColorBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue // (Final|Native|Public|Const) // @ game+0x34cd7e0
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue // (Final|Native|Public|HasDefaults|Const) // @ game+0x34cd5b0
};

// Class UMG.ComboBox
// Size: 0x170 (Inherited: 0x138)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x138(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x148(0x10)
	bool bIsFocusable; // 0x158(0x01)
	char pad_159[0x17]; // 0x159(0x17)
};

// Class UMG.ComboBoxString
// Size: 0xf78 (Inherited: 0x138)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x138(0x10)
	struct FString SelectedOption; // 0x148(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x158(0x450)
	struct FTableRowStyle ItemStyle; // 0x5a8(0x8a8)
	struct FMargin ContentPadding; // 0xe50(0x10)
	float MaxListHeight; // 0xe60(0x04)
	bool HasDownArrow; // 0xe64(0x01)
	bool EnableGamepadNavigationMode; // 0xe65(0x01)
	char pad_E66[0x2]; // 0xe66(0x02)
	struct FSlateFontInfo Font; // 0xe68(0x60)
	struct FSlateColor ForegroundColor; // 0xec8(0x28)
	bool bIsFocusable; // 0xef0(0x01)
	char pad_EF1[0x3]; // 0xef1(0x03)
	struct FDelegate OnGenerateWidgetEvent; // 0xef4(0x10)
	char pad_F04[0x4]; // 0xf04(0x04)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xf08(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0xf18(0x10)
	char pad_F28[0x50]; // 0xf28(0x50)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x34ce670
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x34ce5e0
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption // (Final|Native|Public|BlueprintCallable) // @ game+0x34cdad0
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x34cda20
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd9f0
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd760
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd730
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd700
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd620
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd3e0
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x34cd030
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x34cd010
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption // (Final|Native|Public|BlueprintCallable) // @ game+0x34cce80
};

// Class UMG.DynamicEntryBox
// Size: 0x200 (Inherited: 0x1f8)
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	struct UUserWidget* EntryWidgetClass; // 0x1f8(0x08)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x34cdb80
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry // (Final|Native|Public|BlueprintCallable) // @ game+0x34cda40
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass // (Final|Native|Private|BlueprintCallable) // @ game+0x34ccf50
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry // (Final|Native|Private|BlueprintCallable) // @ game+0x34ccf20
};

// Class UMG.EditableText
// Size: 0x4d0 (Inherited: 0x138)
struct UEditableText : UWidget {
	struct FText Text; // 0x138(0x18)
	struct FDelegate TextDelegate; // 0x150(0x10)
	struct FText HintText; // 0x160(0x18)
	struct FDelegate HintTextDelegate; // 0x178(0x10)
	struct FEditableTextStyle WidgetStyle; // 0x188(0x258)
	struct USlateWidgetStyleAsset* Style; // 0x3e0(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3e8(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3f0(0x08)
	struct USlateBrushAsset* CaretImage; // 0x3f8(0x08)
	struct FSlateFontInfo Font; // 0x400(0x60)
	struct FSlateColor ColorAndOpacity; // 0x460(0x28)
	bool IsReadOnly; // 0x488(0x01)
	bool IsPassword; // 0x489(0x01)
	char pad_48A[0x2]; // 0x48a(0x02)
	float MinimumDesiredWidth; // 0x48c(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x490(0x01)
	bool SelectAllTextWhenFocused; // 0x491(0x01)
	bool RevertTextOnEscape; // 0x492(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x493(0x01)
	bool SelectAllTextOnCommit; // 0x494(0x01)
	bool AllowContextMenu; // 0x495(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x496(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x497(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x498(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x499(0x01)
	enum class ETextJustify Justification; // 0x49a(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x49b(0x03)
	char pad_49E[0x2]; // 0x49e(0x02)
	struct FMulticastInlineDelegate OnTextChanged; // 0x4a0(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4b0(0x10)
	char pad_4C0[0x10]; // 0x4c0(0x10)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x34ce760
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableText.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0x34ce410
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x34ce2f0
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0x34ce1d0
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x34cdef0
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	struct FText GetText(); // Function UMG.EditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd850
};

// Class UMG.EditableTextBox
// Size: 0xb48 (Inherited: 0x138)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x138(0x18)
	struct FDelegate TextDelegate; // 0x150(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x160(0x8d0)
	struct USlateWidgetStyleAsset* Style; // 0xa30(0x08)
	struct FText HintText; // 0xa38(0x18)
	struct FDelegate HintTextDelegate; // 0xa50(0x10)
	struct FSlateFontInfo Font; // 0xa60(0x60)
	struct FLinearColor ForegroundColor; // 0xac0(0x10)
	struct FLinearColor BackgroundColor; // 0xad0(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xae0(0x10)
	bool IsReadOnly; // 0xaf0(0x01)
	bool IsPassword; // 0xaf1(0x01)
	char pad_AF2[0x2]; // 0xaf2(0x02)
	float MinimumDesiredWidth; // 0xaf4(0x04)
	struct FMargin Padding; // 0xaf8(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xb08(0x01)
	bool SelectAllTextWhenFocused; // 0xb09(0x01)
	bool RevertTextOnEscape; // 0xb0a(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xb0b(0x01)
	bool SelectAllTextOnCommit; // 0xb0c(0x01)
	bool AllowContextMenu; // 0xb0d(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0xb0e(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xb0f(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xb10(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xb11(0x01)
	enum class ETextJustify Justification; // 0xb12(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0xb13(0x03)
	char pad_B16[0x2]; // 0xb16(0x02)
	struct FMulticastInlineDelegate OnTextChanged; // 0xb18(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xb28(0x10)
	char pad_B38[0x10]; // 0xb38(0x10)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x34ce840
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0x34ce490
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x34ce380
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0x34ce260
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x34cdfd0
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0x34cde10
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	bool HasError(); // Function UMG.EditableTextBox.HasError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd9c0
	struct FText GetText(); // Function UMG.EditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd8f0
	void ClearError(); // Function UMG.EditableTextBox.ClearError // (Final|Native|Public|BlueprintCallable) // @ game+0x34ccff0
};

// Class UMG.ExpandableArea
// Size: 0x398 (Inherited: 0x138)
struct UExpandableArea : UWidget {
	char pad_138[0x8]; // 0x138(0x08)
	struct FExpandableAreaStyle Style; // 0x140(0x140)
	struct FSlateBrush BorderBrush; // 0x280(0x98)
	struct FSlateColor BorderColor; // 0x318(0x28)
	bool bIsExpanded; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	float MaxHeight; // 0x344(0x04)
	struct FMargin HeaderPadding; // 0x348(0x10)
	struct FMargin AreaPadding; // 0x358(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x368(0x10)
	struct UWidget* HeaderContent; // 0x378(0x08)
	struct UWidget* BodyContent; // 0x380(0x08)
	char pad_388[0x10]; // 0x388(0x10)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated // (Final|Native|Public|BlueprintCallable) // @ game+0x34ce140
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded // (Final|Native|Public|BlueprintCallable) // @ game+0x34ce0b0
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34cd580
};

// Class UMG.FloatBinding
// Size: 0x60 (Inherited: 0x60)
struct UFloatBinding : UPropertyBinding {

	float GetValue(); // Function UMG.FloatBinding.GetValue // (Final|Native|Public|Const) // @ game+0x34cd990
};

// Class UMG.GridPanel
// Size: 0x180 (Inherited: 0x150)
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; // 0x150(0x10)
	struct TArray<float> RowFill; // 0x160(0x10)
	char pad_170[0x10]; // 0x170(0x10)

	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill // (Final|Native|Public|BlueprintCallable) // @ game+0x34ce510
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill // (Final|Native|Public|BlueprintCallable) // @ game+0x34cdc10
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid // (Final|Native|Public|BlueprintCallable) // @ game+0x34ccd70
};

// Class UMG.GridSlot
// Size: 0x70 (Inherited: 0x38)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t Row; // 0x4c(0x04)
	int32_t RowSpan; // 0x50(0x04)
	int32_t Column; // 0x54(0x04)
	int32_t ColumnSpan; // 0x58(0x04)
	int32_t Layer; // 0x5c(0x04)
	struct FVector2D Nudge; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34d3100
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2b30
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2aa0
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2980
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34d2880
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2710
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2530
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2290
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2200
};

// Class UMG.HorizontalBox
// Size: 0x160 (Inherited: 0x150)
struct UHorizontalBox : UPanelWidget {
	char pad_150[0x10]; // 0x150(0x10)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox // (Final|Native|Public|BlueprintCallable) // @ game+0x34d0d20
};

// Class UMG.HorizontalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UHorizontalBoxSlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34d3180
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2ff0
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2a10
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34d25b0
};

// Class UMG.InputKeySelector
// Size: 0x7b0 (Inherited: 0x138)
struct UInputKeySelector : UWidget {
	struct FButtonStyle WidgetStyle; // 0x138(0x2b8)
	struct FTextBlockStyle TextStyle; // 0x3f0(0x2a8)
	struct FInputChord SelectedKey; // 0x698(0x20)
	struct FSlateFontInfo Font; // 0x6b8(0x60)
	struct FMargin Margin; // 0x718(0x10)
	struct FLinearColor ColorAndOpacity; // 0x728(0x10)
	struct FText KeySelectionText; // 0x738(0x18)
	struct FText NoKeySpecifiedText; // 0x750(0x18)
	bool bAllowModifierKeys; // 0x768(0x01)
	bool bAllowGamepadKeys; // 0x769(0x01)
	char pad_76A[0x6]; // 0x76a(0x06)
	struct TArray<struct FKey> EscapeKeys; // 0x770(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x780(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x790(0x10)
	char pad_7A0[0x10]; // 0x7a0(0x10)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x34d3080
	void SetSelectedKey(struct FInputChord& InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34d2e80
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText // (Final|Native|Public|BlueprintCallable) // @ game+0x34d27a0
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText // (Final|Native|Public|BlueprintCallable) // @ game+0x34d2630
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // Function UMG.InputKeySelector.SetEscapeKeys // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34d2440
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1dc0
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys // (Final|Native|Public|BlueprintCallable) // @ game+0x34d1d30
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d16c0
};

// Class UMG.Int32Binding
// Size: 0x60 (Inherited: 0x60)
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue(); // Function UMG.Int32Binding.GetValue // (Final|Native|Public|Const) // @ game+0x34d1960
};

// Class UMG.InvalidationBox
// Size: 0x168 (Inherited: 0x150)
struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x150(0x01)
	bool CacheRelativeTransforms; // 0x151(0x01)
	char pad_152[0x16]; // 0x152(0x16)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache // (Final|Native|Public|BlueprintCallable) // @ game+0x34d20e0
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // (Final|Native|Public|BlueprintCallable) // @ game+0x8ee0f0
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d14d0
};

// Class UMG.UserListEntry
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntry : UInterface {

	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x260de00
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG.UserListEntry.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x260de00
	void BP_OnEntryReleased(); // Function UMG.UserListEntry.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x260de00
};

// Class UMG.UserListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary {

	bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34d1a30
	bool IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemExpanded // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34d1990
	struct UListViewBase* GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.GetOwningListView // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34d1890
};

// Class UMG.UserObjectListEntry
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntry : UUserListEntry {

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x260de00
};

// Class UMG.UserObjectListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary {

	struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34d1790
};

// Class UMG.ListViewDesignerPreviewItem
// Size: 0x28 (Inherited: 0x28)
struct UListViewDesignerPreviewItem : UObject {
};

// Class UMG.MenuAnchor
// Size: 0x190 (Inherited: 0x150)
struct UMenuAnchor : UContentWidget {
	struct UUserWidget* MenuClass; // 0x150(0x08)
	struct FDelegate OnGetMenuContentEvent; // 0x158(0x10)
	enum class EMenuPlacement Placement; // 0x168(0x01)
	bool bFitInWindow; // 0x169(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x16a(0x01)
	bool UseApplicationMenuStack; // 0x16b(0x01)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x170(0x10)
	char pad_180[0x10]; // 0x180(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen // (Final|Native|Public|BlueprintCallable) // @ game+0x34d7a50
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d7a20
	void SetPlacement(enum class EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement // (Final|Native|Public|BlueprintCallable) // @ game+0x34d7410
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open // (Final|Native|Public|BlueprintCallable) // @ game+0x34d6b20
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d6af0
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d6ac0
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d6870
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow // (Final|Native|Public|BlueprintCallable) // @ game+0x34d6480
	void Close(); // Function UMG.MenuAnchor.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x34d6460
};

// Class UMG.MouseCursorBinding
// Size: 0x60 (Inherited: 0x60)
struct UMouseCursorBinding : UPropertyBinding {

	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue // (Final|Native|Public|Const) // @ game+0x34d69f0
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x550 (Inherited: 0xe0)
struct UMovieScene2DTransformSection : UMovieSceneSection {
	struct FMovieScene2DTransformMask TransformMask; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0xe8(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x228(0xa0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2c8(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x408(0x140)
	char pad_548[0x8]; // 0x548(0x08)
};

// Class UMG.MovieScene2DTransformTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginSection
// Size: 0x360 (Inherited: 0xe0)
struct UMovieSceneMarginSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel TopCurve; // 0xe0(0xa0)
	struct FMovieSceneFloatChannel LeftCurve; // 0x180(0xa0)
	struct FMovieSceneFloatChannel RightCurve; // 0x220(0xa0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2c0(0xa0)
};

// Class UMG.MovieSceneMarginTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0x80 (Inherited: 0x68)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x68(0x10)
	struct FName TrackName; // 0x78(0x08)
};

// Class UMG.MultiLineEditableText
// Size: 0x4e8 (Inherited: 0x160)
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; // 0x160(0x18)
	struct FText HintText; // 0x178(0x18)
	struct FDelegate HintTextDelegate; // 0x190(0x10)
	struct FTextBlockStyle WidgetStyle; // 0x1a0(0x2a8)
	bool bIsReadOnly; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct FSlateFontInfo Font; // 0x450(0x60)
	bool SelectAllTextWhenFocused; // 0x4b0(0x01)
	bool ClearTextSelectionOnFocusLoss; // 0x4b1(0x01)
	bool RevertTextOnEscape; // 0x4b2(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x4b3(0x01)
	bool AllowContextMenu; // 0x4b4(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x4b5(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4b6(0x01)
	char pad_4B7[0x1]; // 0x4b7(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0x4b8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4c8(0x10)
	char pad_4D8[0x10]; // 0x4d8(0x10)

	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34d7970
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x34d75f0
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x34d71e0
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x34d6f10
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d68b0
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d6730
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xde8 (Inherited: 0x160)
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; // 0x160(0x18)
	struct FText HintText; // 0x178(0x18)
	struct FDelegate HintTextDelegate; // 0x190(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x1a0(0x8d0)
	struct FTextBlockStyle TextStyle; // 0xa70(0x2a8)
	bool bIsReadOnly; // 0xd18(0x01)
	bool AllowContextMenu; // 0xd19(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xd1a(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xd1b(0x01)
	char pad_D1C[0x4]; // 0xd1c(0x04)
	struct USlateWidgetStyleAsset* Style; // 0xd20(0x08)
	struct FSlateFontInfo Font; // 0xd28(0x60)
	struct FLinearColor ForegroundColor; // 0xd88(0x10)
	struct FLinearColor BackgroundColor; // 0xd98(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xda8(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0xdb8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xdc8(0x10)
	char pad_DD8[0x10]; // 0xdd8(0x10)

	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34d77b0
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x34d76d0
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x34d7270
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x34d6ff0
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0x34d6da0
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x260de00
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d6950
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d67d0
};

// Class UMG.NamedSlotInterface
// Size: 0x28 (Inherited: 0x28)
struct UNamedSlotInterface : UInterface {
};

// Class UMG.NativeWidgetHost
// Size: 0x148 (Inherited: 0x138)
struct UNativeWidgetHost : UWidget {
	char pad_138[0x10]; // 0x138(0x10)
};

// Class UMG.ProgressBar
// Size: 0x378 (Inherited: 0x138)
struct UProgressBar : UWidget {
	struct FProgressBarStyle WidgetStyle; // 0x138(0x1d0)
	struct USlateWidgetStyleAsset* Style; // 0x308(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x310(0x08)
	struct USlateBrushAsset* FillImage; // 0x318(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x320(0x08)
	float Percent; // 0x328(0x04)
	enum class EProgressBarFillType BarFillType; // 0x32c(0x01)
	bool bIsMarquee; // 0x32d(0x01)
	char pad_32E[0x2]; // 0x32e(0x02)
	struct FVector2D BorderPadding; // 0x330(0x08)
	struct FDelegate PercentDelegate; // 0x338(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x348(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x358(0x10)
	char pad_368[0x10]; // 0x368(0x10)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent // (Final|Native|Public|BlueprintCallable) // @ game+0x34d7390
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee // (Final|Native|Public|BlueprintCallable) // @ game+0x34d7150
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34d6e80
};

// Class UMG.RetainerBox
// Size: 0x180 (Inherited: 0x150)
struct URetainerBox : UContentWidget {
	bool bRetainRender; // 0x150(0x01)
	bool RenderOnInvalidation; // 0x151(0x01)
	bool RenderOnPhase; // 0x152(0x01)
	char pad_153[0x1]; // 0x153(0x01)
	int32_t Phase; // 0x154(0x04)
	int32_t PhaseCount; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x160(0x08)
	struct FName TextureParameter; // 0x168(0x08)
	char pad_170[0x10]; // 0x170(0x10)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x34d7860
	void SetRetainRendering(bool bInRetainRendering); // Function UMG.RetainerBox.SetRetainRendering // (Final|Native|Public|BlueprintCallable) // @ game+0x34d7560
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase // (Final|Native|Public|BlueprintCallable) // @ game+0x34d7490
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x34d6d10
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // (Final|Native|Public|BlueprintCallable) // @ game+0x34d6cf0
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34d6700
};

// Class UMG.RichTextBlockImageDecorator
// Size: 0x30 (Inherited: 0x28)
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	struct UDataTable* ImageSet; // 0x28(0x08)
};

// Class UMG.SafeZone
// Size: 0x168 (Inherited: 0x150)
struct USafeZone : UContentWidget {
	bool PadLeft; // 0x150(0x01)
	bool PadRight; // 0x151(0x01)
	bool PadTop; // 0x152(0x01)
	bool PadBottom; // 0x153(0x01)
	char pad_154[0x14]; // 0x154(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc6b0
};

// Class UMG.SafeZoneSlot
// Size: 0x60 (Inherited: 0x38)
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FMargin SafeAreaScale; // 0x3c(0x10)
	enum class EHorizontalAlignment HAlign; // 0x4c(0x01)
	enum class EVerticalAlignment VAlign; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FMargin Padding; // 0x50(0x10)
};

// Class UMG.ScaleBox
// Size: 0x170 (Inherited: 0x150)
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; // 0x150(0x01)
	enum class EStretchDirection StretchDirection; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	float UserSpecifiedScale; // 0x154(0x04)
	bool IgnoreInheritedScale; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	float IgnoreSlightScaleModificationPercent; // 0x15c(0x04)
	char pad_160[0x10]; // 0x160(0x10)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale // (Final|Native|Public|BlueprintCallable) // @ game+0x34dcb10
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc980
	void SetStretch(enum class EStretch InStretch); // Function UMG.ScaleBox.SetStretch // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc900
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale // (Final|Native|Public|BlueprintCallable) // @ game+0x34dbe40
};

// Class UMG.ScaleBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UScaleBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x20bdc20
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc2d0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x20bd8b0
};

// Class UMG.ScrollBar
// Size: 0x6d0 (Inherited: 0x138)
struct UScrollBar : UWidget {
	struct FScrollBarStyle WidgetStyle; // 0x138(0x560)
	struct USlateWidgetStyleAsset* Style; // 0x698(0x08)
	bool bAlwaysShowScrollbar; // 0x6a0(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x6a1(0x01)
	enum class EOrientation Orientation; // 0x6a2(0x01)
	char pad_6A3[0x1]; // 0x6a3(0x01)
	struct FVector2D Thickness; // 0x6a4(0x08)
	struct FMargin Padding; // 0x6ac(0x10)
	char pad_6BC[0x14]; // 0x6bc(0x14)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc830
};

// Class UMG.ScrollBoxSlot
// Size: 0x58 (Inherited: 0x38)
struct UScrollBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0xe]; // 0x4a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34dcb90
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc360
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34dbd40
};

// Class UMG.SizeBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34dcc10
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34dc3f0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34dbdc0
};

// Class UMG.SlateBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	void WidgetGlobalPostionToSubWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenUIPosition, struct FVector2D& OutLocalUIPostion); // Function UMG.SlateBlueprintLibrary.WidgetGlobalPostionToSubWidgetLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x34dd190
	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34dd090
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteVector); // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34dcf90
	float TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34dce90
	float TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34dcd90
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x34db120
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x34dafc0
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.ScreenToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x34daec0
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34dacd0
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34dabd0
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34daad0
	struct FVector2D GetLocalTopLeft(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34da8e0
	struct FVector2D GetLocalSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34da820
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34da6c0
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B); // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34da3e0
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34da140
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34da040
};

// Class UMG.SlateVectorArtData
// Size: 0x60 (Inherited: 0x28)
struct USlateVectorArtData : UObject {
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x28(0x10)
	struct TArray<uint32_t> IndexData; // 0x38(0x10)
	struct UMaterialInterface* Material; // 0x48(0x08)
	struct FVector2D ExtentMin; // 0x50(0x08)
	struct FVector2D ExtentMax; // 0x58(0x08)
};

// Class UMG.SlateAccessibleWidgetData
// Size: 0x80 (Inherited: 0x28)
struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x28(0x01)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x29(0x01)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct FText AccessibleText; // 0x30(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x48(0x10)
	struct FText AccessibleSummaryText; // 0x58(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x70(0x10)
};

// Class UMG.Spacer
// Size: 0x150 (Inherited: 0x138)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x138(0x08)
	char pad_140[0x10]; // 0x140(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e0b20
};

// Class UMG.SpinBox
// Size: 0x5a8 (Inherited: 0x138)
struct USpinBox : UWidget {
	float Value; // 0x138(0x04)
	struct FDelegate ValueDelegate; // 0x13c(0x10)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FSpinBoxStyle WidgetStyle; // 0x150(0x338)
	struct USlateWidgetStyleAsset* Style; // 0x488(0x08)
	int32_t MinFractionalDigits; // 0x490(0x04)
	int32_t MaxFractionalDigits; // 0x494(0x04)
	bool bAlwaysUsesDeltaSnap; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	float Delta; // 0x49c(0x04)
	float SliderExponent; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FSlateFontInfo Font; // 0x4a8(0x60)
	enum class ETextJustify Justification; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	float MinDesiredWidth; // 0x50c(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x510(0x01)
	bool SelectAllTextOnCommit; // 0x511(0x01)
	char pad_512[0x6]; // 0x512(0x06)
	struct FSlateColor ForegroundColor; // 0x518(0x28)
	struct FMulticastInlineDelegate OnValueChanged; // 0x540(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x550(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x560(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x570(0x10)
	char bOverride_MinValue : 1; // 0x580(0x01)
	char bOverride_MaxValue : 1; // 0x580(0x01)
	char bOverride_MinSliderValue : 1; // 0x580(0x01)
	char bOverride_MaxSliderValue : 1; // 0x580(0x01)
	char pad_580_4 : 4; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	float MinValue; // 0x584(0x04)
	float MaxValue; // 0x588(0x04)
	float MinSliderValue; // 0x58c(0x04)
	float MaxSliderValue; // 0x590(0x04)
	char pad_594[0x14]; // 0x594(0x14)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x34e1160
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x34e06e0
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x34e05e0
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0x34e0550
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x34e0450
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x34e0350
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0x34e02c0
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor // (Final|Native|Public|BlueprintCallable) // @ game+0x34dfe90
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta // (Final|Native|Public|BlueprintCallable) // @ game+0x34dfcf0
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable) // @ game+0x34df8b0
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x260de00
	float GetValue(); // Function UMG.SpinBox.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34df880
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34df630
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34df600
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34df5d0
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34df5a0
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34df570
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34df540
	float GetDelta(); // Function UMG.SpinBox.GetDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34df4b0
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34df480
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x34df460
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x34df440
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x34df420
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x34df400
};

// Class UMG.TextBinding
// Size: 0x68 (Inherited: 0x60)
struct UTextBinding : UPropertyBinding {
	char pad_60[0x8]; // 0x60(0x08)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue // (Final|Native|Public|Const) // @ game+0x34df7b0
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue // (Final|Native|Public|Const) // @ game+0x34df690
};

// Class UMG.Throbber
// Size: 0x1f0 (Inherited: 0x138)
struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x138(0x04)
	bool bAnimateHorizontally; // 0x13c(0x01)
	bool bAnimateVertically; // 0x13d(0x01)
	bool bAnimateOpacity; // 0x13e(0x01)
	char pad_13F[0x1]; // 0x13f(0x01)
	struct USlateBrushAsset* PieceImage; // 0x140(0x08)
	struct FSlateBrush Image; // 0x148(0x98)
	char pad_1E0[0x10]; // 0x1e0(0x10)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0x34e0900
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically // (Final|Native|Public|BlueprintCallable) // @ game+0x34dfa60
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x34df9d0
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally // (Final|Native|Public|BlueprintCallable) // @ game+0x34df940
};

// Class UMG.UMGSequencePlayer
// Size: 0x7a8 (Inherited: 0x28)
struct UUMGSequencePlayer : UObject {
	char pad_28[0x3e0]; // 0x28(0x3e0)
	struct UWidgetAnimation* Animation; // 0x408(0x08)
	char pad_410[0x398]; // 0x410(0x398)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag // (Final|Native|Public|BlueprintCallable) // @ game+0x34e7ae0
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34e6170
};

// Class UMG.UniformGridPanel
// Size: 0x178 (Inherited: 0x150)
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; // 0x150(0x10)
	float MinDesiredSlotWidth; // 0x160(0x04)
	float MinDesiredSlotHeight; // 0x164(0x04)
	char pad_168[0x10]; // 0x168(0x10)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34e7a50
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x34e75b0
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x34e7530
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid // (Final|Native|Public|BlueprintCallable) // @ game+0x34e5950
};

// Class UMG.UniformGridSlot
// Size: 0x50 (Inherited: 0x38)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x38(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32_t Row; // 0x3c(0x04)
	int32_t Column; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34e7b70
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0x34e79c0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34e72c0
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0x34e6fc0
};

// Class UMG.VerticalBox
// Size: 0x160 (Inherited: 0x150)
struct UVerticalBox : UPanelWidget {
	char pad_150[0x10]; // 0x150(0x10)

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox // (Final|Native|Public|BlueprintCallable) // @ game+0x34e9db0
};

// Class UMG.VerticalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UVerticalBoxSlot : UPanelSlot {
	struct FSlateChildSize Size; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34eb830
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x34eb5b0
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34eb0b0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34eaaf0
};

// Class UMG.Viewport
// Size: 0x178 (Inherited: 0x150)
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; // 0x150(0x10)
	char pad_160[0x18]; // 0x160(0x18)

	struct AActor* Spawn(struct AActor* ActorClass); // Function UMG.Viewport.Spawn // (Final|Native|Public|BlueprintCallable) // @ game+0x34ebb20
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34eb940
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34eb8b0
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea410
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea450
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea3d0
};

// Class UMG.VisibilityBinding
// Size: 0x60 (Inherited: 0x60)
struct UVisibilityBinding : UPropertyBinding {

	enum class ESlateVisibility GetValue(); // Function UMG.VisibilityBinding.GetValue // (Final|Native|Public|Const) // @ game+0x34ea3a0
};

// Class UMG.WidgetAnimation
// Size: 0x380 (Inherited: 0x348)
struct UWidgetAnimation : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x350(0x10)
	bool bLegacyFinishOnStop; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct FString DisplayLabel; // 0x368(0x10)
	enum class ESlateDetailMode DetailMode; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x34ebdc0
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x34ebce0
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x34ebc50
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x34ebbc0
	void SetDetailMode(enum class ESlateDetailMode InDetailMode); // Function UMG.WidgetAnimation.SetDetailMode // (Final|Native|Public|BlueprintCallable) // @ game+0x34eaa40
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea330
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ea170
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x34e9f30
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x34e9e50
};

// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28(0x10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x48 (Inherited: 0x28)
struct UWidgetAnimationPlayCallbackProxy : UObject {
	struct FMulticastInlineDelegate Finished; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x34eea20
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x34ee800
};

// Class UMG.WidgetBinding
// Size: 0x60 (Inherited: 0x60)
struct UWidgetBinding : UPropertyBinding {

	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue // (Final|Native|Public|Const) // @ game+0x34f0e50
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x368 (Inherited: 0x328)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x328(0x08)
	char bClassRequiresNativeTick : 1; // 0x330(0x01)
	char pad_330_1 : 7; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x338(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x348(0x10)
	struct TArray<struct FName> NamedSlots; // 0x358(0x10)
};

// Class UMG.WidgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FEventReply UnlockMouse(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34f2d70
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f2d00
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x34f2ae0
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x34f2a50
	void SetWindowTitleBarCloseButtonActive(bool bActive); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x34f29d0
	struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34ee2a0
	struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34f23b0
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x34f2220
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x34f2120
	void SetInputMode_GameOnly(struct APlayerController* PlayerController); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x34f20a0
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x34f1f50
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x34f1df0
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x34f1cb0
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x34f1c10
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x34f1920
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x34f1750
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x34f1750
	void RestorePreviousWindowTitleBarState(); // Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x34f16a0
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34f15b0
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34ee540
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature // (Public|Delegate) // @ game+0x260de00
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f1500
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f1360
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f11c0
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f10b0
	struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34f0f80
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f0f50
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f0ee0
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding); // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x34f0c60
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34f09e0
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34f0890
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34f07b0
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34f0690
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34f05b0
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34f0400
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f0370
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34f0180
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34efff0
	struct UObject* GetBrushResource(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34efe60
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UInterface* Interface, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x34efcf0
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UUserWidget* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x34efb80
	struct FEventReply EndDragDrop(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34efa90
	void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x34ef810
	void DrawText(struct FPaintContext& Context, struct FString inString, struct FVector2D Position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x34ef680
	void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLines // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x34ef4a0
	void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLine // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x34ef290
	void DrawBox(struct FPaintContext& Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x34ef0d0
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x34ef0b0
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x34eee60
	struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34eec80
	struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x34ee770
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x34ee670
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34ee540
	struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34ee410
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34ee2a0
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x34ee280
};

// Class UMG.WidgetInteractionComponent
// Size: 0x510 (Inherited: 0x320)
struct UWidgetInteractionComponent : USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x318(0x10)
	char pad_330[0x8]; // 0x330(0x08)
	int32_t VirtualUserIndex; // 0x338(0x04)
	float PointerIndex; // 0x33c(0x04)
	enum class ECollisionChannel TraceChannel; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	float InteractionDistance; // 0x344(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x348(0x01)
	bool bEnableHitTesting; // 0x349(0x01)
	bool bShowDebug; // 0x34a(0x01)
	char pad_34B[0x1]; // 0x34b(0x01)
	struct FLinearColor DebugColor; // 0x34c(0x10)
	char pad_35C[0x7c]; // 0x35c(0x7c)
	struct FHitResult CustomHitResult; // 0x3d8(0x88)
	struct FVector2D LocalHitLocation; // 0x460(0x08)
	struct FVector2D LastLocalHitLocation; // 0x468(0x08)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x470(0x08)
	struct FHitResult LastHitResult; // 0x478(0x88)
	bool bIsHoveredWidgetInteractable; // 0x500(0x01)
	bool bIsHoveredWidgetFocusable; // 0x501(0x01)
	bool bIsHoveredWidgetHitTestVisible; // 0x502(0x01)
	char pad_503[0xd]; // 0x503(0x0d)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x34f5b70
	void SetCustomHitResult(struct FHitResult& HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34f5980
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar // (Native|Public|BlueprintCallable) // @ game+0x34f5830
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel // (Native|Public|BlueprintCallable) // @ game+0x34f57a0
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey // (Native|Public|BlueprintCallable) // @ game+0x34f5630
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey // (Native|Public|BlueprintCallable) // @ game+0x34f5530
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey // (Native|Public|BlueprintCallable) // @ game+0x34f52d0
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey // (Native|Public|BlueprintCallable) // @ game+0x34f5190
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey // (Native|Public|BlueprintCallable) // @ game+0x34f5090
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f5060
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f5030
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f5000
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f4ae0
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f4ab0
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34f4a10
};

// Class UMG.WidgetLayoutLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f6980
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f68f0
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f6860
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f67d0
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f6740
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f66b0
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f6620
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f6590
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f6500
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f6470
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f63e0
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f6350
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f62c0
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x34f5720
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34f53c0
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x34f4f50
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34f4ec0
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34f4e30
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x34f4d80
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x34f4c30
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x34f4ba0
	struct FVector2D GetMousePositionOnPlatform(); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x34f4b60
};

// Class UMG.WidgetNavigation
// Size: 0x100 (Inherited: 0x28)
struct UWidgetNavigation : UObject {
	struct FWidgetNavigationData Up; // 0x28(0x24)
	struct FWidgetNavigationData Down; // 0x4c(0x24)
	struct FWidgetNavigationData Left; // 0x70(0x24)
	struct FWidgetNavigationData Right; // 0x94(0x24)
	struct FWidgetNavigationData Next; // 0xb8(0x24)
	struct FWidgetNavigationData Previous; // 0xdc(0x24)
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x58 (Inherited: 0x38)
struct UWidgetSwitcherSlot : UPanelSlot {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34f60c0
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34f5e80
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34f5c00
};

// Class UMG.WidgetTree
// Size: 0x30 (Inherited: 0x28)
struct UWidgetTree : UObject {
	struct UWidget* RootWidget; // 0x28(0x08)
};

// Class UMG.WindowTitleBarArea
// Size: 0x170 (Inherited: 0x150)
struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x150(0x01)
	bool bDoubleClickTogglesFullscreen; // 0x151(0x01)
	char pad_152[0x1e]; // 0x152(0x1e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34f6140
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34f5f10
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34f5c80
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x60 (Inherited: 0x38)
struct UWindowTitleBarAreaSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34f61c0
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34f5fa0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34f5d00
};

// Class UMG.WrapBox
// Size: 0x170 (Inherited: 0x150)
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x150(0x08)
	float WrapWidth; // 0x158(0x04)
	bool bExplicitWrapWidth; // 0x15c(0x01)
	char pad_15D[0x13]; // 0x15d(0x13)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34f5e00
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox // (Final|Native|Public|BlueprintCallable) // @ game+0x34f4970
};

// Class UMG.WrapBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	bool bFillEmptySpace; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float FillSpanWhenLessThan; // 0x4c(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34f6240
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x34f6030
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x34f5d80
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan // (Final|Native|Public|BlueprintCallable) // @ game+0x34f5af0
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace // (Final|Native|Public|BlueprintCallable) // @ game+0x34f5a60
};

