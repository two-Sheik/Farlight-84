// Class WebBrowserWidget.WebBrowser
// Size: 0x190 (Inherited: 0x138)
struct UWebBrowser : UWidget {
	struct FMulticastInlineDelegate OnUrlChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnBeforePopup; // 0x148(0x10)
	struct FMulticastInlineDelegate OnBeforeNavigation; // 0x158(0x10)
	struct FString InitialURL; // 0x168(0x10)
	bool bSupportsTransparency; // 0x178(0x01)
	char pad_179[0x17]; // 0x179(0x17)

	void StopLoad(); // Function WebBrowserWidget.WebBrowser.StopLoad // (Final|Native|Public|BlueprintCallable) // @ game+0xbb1130
	void Reload(); // Function WebBrowserWidget.WebBrowser.Reload // (Final|Native|Public|BlueprintCallable) // @ game+0xbb1110
	void OnUrlChanged__DelegateSignature(struct FText& Text); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x25d95f0
	void OnBeforePopup__DelegateSignature(struct FString URL, struct FString Frame); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x25d95f0
	void OnBeforeNavigation__DelegateSignature(struct FString URL); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforeNavigation__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x25d95f0
	void LoadURL(struct FString NewURL); // Function WebBrowserWidget.WebBrowser.LoadURL // (Final|Native|Public|BlueprintCallable) // @ game+0xbb1020
	void LoadString(struct FString Contents, struct FString DummyURL); // Function WebBrowserWidget.WebBrowser.LoadString // (Final|Native|Public|BlueprintCallable) // @ game+0xbb0ea0
	struct FString GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbb0e20
	struct FText GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbb0d80
	void ExecuteJavascript(struct FString ScriptText); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // (Final|Native|Public|BlueprintCallable) // @ game+0xbb0ce0
	void CloseSelf(); // Function WebBrowserWidget.WebBrowser.CloseSelf // (Final|Native|Public|BlueprintCallable) // @ game+0xbb0cc0
	void BindUObject(struct FString Name, struct UObject* Object, bool bIsPermanent); // Function WebBrowserWidget.WebBrowser.BindUObject // (Final|Native|Public|BlueprintCallable) // @ game+0xbb0b90
};

// Class WebBrowserWidget.WebBrowserAssetManager
// Size: 0x78 (Inherited: 0x28)
struct UWebBrowserAssetManager : UObject {
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x28(0x28)
	char pad_50[0x28]; // 0x50(0x28)
};

