// Class UnLua.UnLuaInterface
// Size: 0x28 (Inherited: 0x28)
struct UUnLuaInterface : UInterface {

	struct FString GetModuleName(); // Function UnLua.UnLuaInterface.GetModuleName // (Native|Event|Public|BlueprintEvent|Const) // @ game+0xb2d2c0
};

// Class UnLua.UnLuaManager
// Size: 0x518 (Inherited: 0x28)
struct UUnLuaManager : UObject {
	char pad_28[0x4f0]; // 0x28(0x4f0)

	void TriggerAnimNotify(); // Function UnLua.UnLuaManager.TriggerAnimNotify // (Event|Public|BlueprintEvent) // @ game+0x260de00
	void OnLatentActionCompleted(int32_t LinkID); // Function UnLua.UnLuaManager.OnLatentActionCompleted // (Final|Native|Public) // @ game+0xb2d460
	void OnActorDestroyed(struct AActor* Actor); // Function UnLua.UnLuaManager.OnActorDestroyed // (Final|Native|Public) // @ game+0xb2d3d0
	void InputVectorAxis(struct FVector& AxisValue); // Function UnLua.UnLuaManager.InputVectorAxis // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x260de00
	void InputTouch(enum class ETouchIndex FingerIndex, struct FVector& Location); // Function UnLua.UnLuaManager.InputTouch // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x260de00
	void InputGesture(float Value); // Function UnLua.UnLuaManager.InputGesture // (Event|Public|BlueprintEvent) // @ game+0x260de00
	void InputAxis(float AxisValue); // Function UnLua.UnLuaManager.InputAxis // (Event|Public|BlueprintEvent) // @ game+0x260de00
	void InputAction(struct FKey Key); // Function UnLua.UnLuaManager.InputAction // (Event|Public|BlueprintEvent) // @ game+0x260de00
};

// Class UnLua.UnLuaPerformanceTestProxy
// Size: 0x288 (Inherited: 0x228)
struct AUnLuaPerformanceTestProxy : AActor {
	char pad_228[0x8]; // 0x228(0x08)
	int32_t MeshID; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct FString MeshName; // 0x238(0x10)
	struct FVector COM; // 0x248(0x0c)
	char pad_254[0x4]; // 0x254(0x04)
	struct TArray<int32_t> Indices; // 0x258(0x10)
	struct TArray<struct FVector> Positions; // 0x268(0x10)
	struct TArray<struct FVector> PredictedPositions; // 0x278(0x10)

	void UpdatePositions(struct TArray<struct FVector>& NewPositions); // Function UnLua.UnLuaPerformanceTestProxy.UpdatePositions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb2ced0
	struct FString UpdateMeshName(struct FString NewName); // Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshName // (Final|Native|Public|BlueprintCallable) // @ game+0xb2d710
	int32_t UpdateMeshID(int32_t NewID); // Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshID // (Final|Native|Public|BlueprintCallable) // @ game+0xb2d670
	void UpdateIndices(struct TArray<int32_t>& NewIndices); // Function UnLua.UnLuaPerformanceTestProxy.UpdateIndices // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xb2ced0
	void Simulate(float DeltaTime); // Function UnLua.UnLuaPerformanceTestProxy.Simulate // (Final|Native|Public|BlueprintCallable) // @ game+0xb2d5f0
	bool Raycast(struct FVector& Origin, struct FVector& Direction); // Function UnLua.UnLuaPerformanceTestProxy.Raycast // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xb2d4f0
	void NOP(); // Function UnLua.UnLuaPerformanceTestProxy.NOP // (Final|Native|Public|BlueprintCallable) // @ game+0x8ee0f0
	struct TArray<struct FVector> GetPredictedPositions(); // Function UnLua.UnLuaPerformanceTestProxy.GetPredictedPositions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb2d340
	void GetPositions(struct TArray<struct FVector>& OutPositions); // Function UnLua.UnLuaPerformanceTestProxy.GetPositions // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xb2ced0
	struct FString GetMeshName(); // Function UnLua.UnLuaPerformanceTestProxy.GetMeshName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb2d230
	bool GetMeshInfo(int32_t& OutMeshID, struct FString& OutMeshName, struct FVector& OutCOM, struct TArray<int32_t>& OutIndices, struct TArray<struct FVector>& OutPositions, struct TArray<struct FVector>& OutPredictedPositions); // Function UnLua.UnLuaPerformanceTestProxy.GetMeshInfo // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xb2cfb0
	int32_t GetMeshID(); // Function UnLua.UnLuaPerformanceTestProxy.GetMeshID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xb2cf80
	void GetIndices(struct TArray<int32_t>& OutIndices); // Function UnLua.UnLuaPerformanceTestProxy.GetIndices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xb2ced0
	struct FVector GetCOM(); // Function UnLua.UnLuaPerformanceTestProxy.GetCOM // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xb2ce90
};

