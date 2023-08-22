// Class CustomMeshComponent.CustomMeshComponent
// Size: 0x590 (Inherited: 0x580)
struct UCustomMeshComponent : UMeshComponent {
	char pad_580[0x10]; // 0x580(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x17b4920
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles // (Final|Native|Public|BlueprintCallable) // @ game+0x17b4900
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x17b4850
};

