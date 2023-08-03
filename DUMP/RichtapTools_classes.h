// Class RichtapTools.RichtapController
// Size: 0x90 (Inherited: 0x28)
struct URichtapController : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct TMap<struct FString, struct URichtapClip*> HeDataMap; // 0x40(0x50)

	void SetRichtapEnable(bool On); // Function RichtapTools.RichtapController.SetRichtapEnable // (Final|Native|Public) // @ game+0xb30350
	void SetEnableRichtap(bool bIsEnableRichtap); // Function RichtapTools.RichtapController.SetEnableRichtap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb302d0
};

