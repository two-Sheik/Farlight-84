// Class MeshDescription.MeshDescription
// Size: 0x28 (Inherited: 0x28)
struct UMeshDescription : UObject {
};

// Class MeshDescription.MeshDescriptionBase
// Size: 0x390 (Inherited: 0x28)
struct UMeshDescriptionBase : UObject {
	char pad_28[0x368]; // 0x28(0x368)

	void SetVertexPosition(struct FVertexID VertexID, struct FVector& Position); // Function MeshDescription.MeshDescriptionBase.SetVertexPosition // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x35939c0
	void SetPolygonVertexInstance(struct FPolygonID PolygonID, int32_t PerimeterIndex, struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x35938a0
	void SetPolygonPolygonGroup(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x35937d0
	void ReversePolygonFacing(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing // (Final|Native|Public|BlueprintCallable) // @ game+0x3593750
	void ReserveNewVertices(int32_t NumberOfNewVertices); // Function MeshDescription.MeshDescriptionBase.ReserveNewVertices // (Final|Native|Public|BlueprintCallable) // @ game+0x35936c0
	void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances); // Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances // (Final|Native|Public|BlueprintCallable) // @ game+0x3593480
	void ReserveNewTriangles(int32_t NumberOfNewTriangles); // Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles // (Final|Native|Public|BlueprintCallable) // @ game+0x3593630
	void ReserveNewPolygons(int32_t NumberOfNewPolygons); // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons // (Final|Native|Public|BlueprintCallable) // @ game+0x35935a0
	void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups); // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups // (Final|Native|Public|BlueprintCallable) // @ game+0x3593510
	void ReserveNewEdges(int32_t NumberOfNewEdges); // Function MeshDescription.MeshDescriptionBase.ReserveNewEdges // (Final|Native|Public|BlueprintCallable) // @ game+0x3593480
	bool IsVertexValid(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.IsVertexValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35933f0
	bool IsVertexOrphaned(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3593360
	bool IsVertexInstanceValid(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35932d0
	bool IsTriangleValid(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.IsTriangleValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3593240
	bool IsTrianglePartOfNgon(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35931b0
	bool IsPolygonValid(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.IsPolygonValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3593120
	bool IsPolygonGroupValid(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3593090
	bool IsEmpty(); // Function MeshDescription.MeshDescriptionBase.IsEmpty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3593060
	bool IsEdgeValid(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.IsEdgeValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592fd0
	bool IsEdgeInternalToPolygon(struct FEdgeID EdgeID, struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592ef0
	bool IsEdgeInternal(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.IsEdgeInternal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592e60
	void GetVertexVertexInstances(struct FVertexID VertexID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592d70
	struct FVector GetVertexPosition(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592cd0
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592bf0
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592b50
	struct FEdgeID GetVertexInstancePairEdge(struct FVertexInstanceID VertexInstanceID0, struct FVertexInstanceID VertexInstanceID1); // Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592a70
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(struct FTriangleID TriangleID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592990
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(struct FPolygonID PolygonID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35928b0
	void GetVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x35927c0
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x35926d0
	void GetVertexConnectedTriangles(struct FVertexID VertexID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x35925e0
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x35924f0
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592400
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592310
	void GetTriangleVertices(struct FTriangleID TriangleID, struct TArray<struct FVertexID>& OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592220
	void GetTriangleVertexInstances(struct FTriangleID TriangleID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592130
	struct FVertexInstanceID GetTriangleVertexInstance(struct FTriangleID TriangleID, int32_t Index); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3592050
	struct FPolygonGroupID GetTrianglePolygonGroup(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591fb0
	struct FPolygonID GetTrianglePolygon(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591f10
	void GetTriangleEdges(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591e20
	void GetTriangleAdjacentTriangles(struct FTriangleID TriangleID, struct TArray<struct FTriangleID>& OutTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591d30
	void GetPolygonVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591c40
	void GetPolygonVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591b50
	void GetPolygonTriangles(struct FPolygonID PolygonID, struct TArray<struct FTriangleID>& OutTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591a60
	struct FPolygonGroupID GetPolygonPolygonGroup(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35919c0
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x35918d0
	void GetPolygonInternalEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x35917e0
	void GetPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FPolygonID>& OutPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x35916f0
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591600
	int32_t GetNumVertexVertexInstances(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591570
	int32_t GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35914e0
	int32_t GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591450
	int32_t GetNumVertexConnectedTriangles(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35913c0
	int32_t GetNumVertexConnectedPolygons(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591330
	int32_t GetNumVertexConnectedEdges(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35912a0
	int32_t GetNumPolygonVertices(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591210
	int32_t GetNumPolygonTriangles(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591180
	int32_t GetNumPolygonInternalEdges(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35910f0
	int32_t GetNumPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3591060
	int32_t GetNumEdgeConnectedTriangles(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3590fd0
	int32_t GetNumEdgeConnectedPolygons(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3590f40
	void GetEdgeVertices(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3590e50
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t VertexNumber); // Function MeshDescription.MeshDescriptionBase.GetEdgeVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3590d70
	void GetEdgeConnectedTriangles(struct FEdgeID EdgeID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3590c80
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3590b90
	void Empty(); // Function MeshDescription.MeshDescriptionBase.Empty // (Final|Native|Public|BlueprintCallable) // @ game+0x3590b70
	void DeleteVertexInstance(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FVertexID>& OrphanedVertices); // Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3590a80
	void DeleteVertex(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.DeleteVertex // (Final|Native|Public|BlueprintCallable) // @ game+0x3590a00
	void DeleteTriangle(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr); // Function MeshDescription.MeshDescriptionBase.DeleteTriangle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3590840
	void DeletePolygonGroup(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x35907c0
	void DeletePolygon(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroups); // Function MeshDescription.MeshDescriptionBase.DeletePolygon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3590600
	void DeleteEdge(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OrphanedVertices); // Function MeshDescription.MeshDescriptionBase.DeleteEdge // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3590510
	void CreateVertexWithID(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x3590490
	void CreateVertexInstanceWithID(struct FVertexInstanceID VertexInstanceID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x35903c0
	struct FVertexInstanceID CreateVertexInstance(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x3590320
	struct FVertexID CreateVertex(); // Function MeshDescription.MeshDescriptionBase.CreateVertex // (Final|Native|Public|BlueprintCallable) // @ game+0x35902e0
	void CreateTriangleWithID(struct FTriangleID TriangleID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3590130
	struct FTriangleID CreateTriangle(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreateTriangle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x358ffc0
	void CreatePolygonWithID(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x358fe10
	void CreatePolygonGroupWithID(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x358fd90
	struct FPolygonGroupID CreatePolygonGroup(); // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x358fd50
	struct FPolygonID CreatePolygon(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreatePolygon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x358fbe0
	void CreateEdgeWithID(struct FEdgeID EdgeID, struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x358fac0
	struct FEdgeID CreateEdge(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.CreateEdge // (Final|Native|Public|BlueprintCallable) // @ game+0x358f9e0
	void ComputePolygonTriangulation(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation // (Final|Native|Public|BlueprintCallable) // @ game+0x358f960
};

