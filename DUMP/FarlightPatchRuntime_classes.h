// Class FarlightPatchRuntime.PakHelper
// Size: 0x28 (Inherited: 0x28)
struct UPakHelper : UObject {

	bool ReloadIniFile(struct FString StrippedConfigFileName, struct FString FilePath); // Function FarlightPatchRuntime.PakHelper.ReloadIniFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cc080
	void ReloadGameUserSettings(); // Function FarlightPatchRuntime.PakHelper.ReloadGameUserSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cc060
	void ReloadDeviceProfiles(); // Function FarlightPatchRuntime.PakHelper.ReloadDeviceProfiles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cc040
	void ReloadCVarSettingsFromIni(); // Function FarlightPatchRuntime.PakHelper.ReloadCVarSettingsFromIni // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cc020
	void OpenShaderPatchLibrary(struct FString ShaderPatchLibraryName, struct FString LibraryDir, bool& bShaderPatchLibUnique); // Function FarlightPatchRuntime.PakHelper.OpenShaderPatchLibrary // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16cbef0
	bool MountPak(struct FString InPakFilename, int32_t PakOrder); // Function FarlightPatchRuntime.PakHelper.MountPak // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cbe10
	struct FString GetStrippedConfigFileName(struct FString IniName); // Function FarlightPatchRuntime.PakHelper.GetStrippedConfigFileName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cbd10
	struct FString GetProjectName(); // Function FarlightPatchRuntime.PakHelper.GetProjectName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cbc90
	struct UPakWriter* CreatePakWriter(struct FString InFilename, struct FString InMountPoint); // Function FarlightPatchRuntime.PakHelper.CreatePakWriter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cba70
	struct UPakReader* CreatePakReader(struct FString InFilename, bool bLoadIndex); // Function FarlightPatchRuntime.PakHelper.CreatePakReader // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cb990
};

// Class FarlightPatchRuntime.PakReader
// Size: 0x50 (Inherited: 0x28)
struct UPakReader : UObject {
	char pad_28[0x28]; // 0x28(0x28)

	int64_t GetTotalSize(); // Function FarlightPatchRuntime.PakReader.GetTotalSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16cbdf0
	struct TArray<struct FPakEntryInfo> GetPakIndex(); // Function FarlightPatchRuntime.PakReader.GetPakIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16cbb70
	void Close(); // Function FarlightPatchRuntime.PakReader.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x16cb970
};

// Class FarlightPatchRuntime.PakWriter
// Size: 0xc0 (Inherited: 0x28)
struct UPakWriter : UObject {
	char pad_28[0x98]; // 0x28(0x98)
};

