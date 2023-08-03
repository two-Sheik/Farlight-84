// Class LunarMariaArea.LM_AreaData_Base
// Size: 0x40 (Inherited: 0x30)
struct ULM_AreaData_Base : UDataAsset {
	int32_t ComponentSizeQuads; // 0x30(0x04)
	int32_t SubsectionSizeQuads; // 0x34(0x04)
	int32_t ComponentNumSubsections; // 0x38(0x04)
	bool bIsBitArea; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class LunarMariaArea.LM_AreaData
// Size: 0x1b0 (Inherited: 0x40)
struct ULM_AreaData : ULM_AreaData_Base {
	bool bDataTableDirty; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct ULandscapeInfo* LandscapeInfo; // 0x48(0x08)
	bool IsProcessArea; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TMap<struct FName, struct FAreaLayerData> LayerTextures; // 0x58(0x50)
	struct TMap<struct FName, struct FAreaGroupSet> GroupSettings; // 0xa8(0x50)
	struct TMap<struct FName, struct FLinearColor> DecalDisplayColorSettings; // 0xf8(0x50)
	struct UScriptStruct* AreaAttributeStruct; // 0x148(0x08)
	struct UDataTable* FinalAreaAttributeDataTable; // 0x150(0x08)
	char pad_158[0x58]; // 0x158(0x58)
};

