// Class FarlightPatchRuntime.PakHelper
// Size: 0x28 (Inherited: 0x28)
struct UPakHelper : UObject {

	bool ReloadIniFile(struct FString StrippedConfigFileName, struct FString FilePath); // Function FarlightPatchRuntime.PakHelper.ReloadIniFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cb190
	void ReloadGameUserSettings(); // Function FarlightPatchRuntime.PakHelper.ReloadGameUserSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cb170
	void ReloadDeviceProfiles(); // Function FarlightPatchRuntime.PakHelper.ReloadDeviceProfiles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cb150
	void ReloadCVarSettingsFromIni(); // Function FarlightPatchRuntime.PakHelper.ReloadCVarSettingsFromIni // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cb130
	void OpenShaderPatchLibrary(struct FString ShaderPatchLibraryName, struct FString LibraryDir, bool& bShaderPatchLibUnique); // Function FarlightPatchRuntime.PakHelper.OpenShaderPatchLibrary // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16cb000
	bool MountPak(struct FString InPakFilename, int32_t PakOrder); // Function FarlightPatchRuntime.PakHelper.MountPak // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16caf20
	struct FString GetStrippedConfigFileName(struct FString IniName); // Function FarlightPatchRuntime.PakHelper.GetStrippedConfigFileName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cae20
	struct FString GetProjectName(); // Function FarlightPatchRuntime.PakHelper.GetProjectName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cada0
	struct UPakWriter* CreatePakWriter(struct FString InFilename, struct FString InMountPoint); // Function FarlightPatchRuntime.PakHelper.CreatePakWriter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cab80
	struct UPakReader* CreatePakReader(struct FString InFilename, bool bLoadIndex); // Function FarlightPatchRuntime.PakHelper.CreatePakReader // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16caaa0
};

// Class FarlightPatchRuntime.PakReader
// Size: 0x50 (Inherited: 0x28)
struct UPakReader : UObject {
	char pad_28[0x28]; // 0x28(0x28)

	int64_t GetTotalSize(); // Function FarlightPatchRuntime.PakReader.GetTotalSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16caf00
	struct TArray<struct FPakEntryInfo> GetPakIndex(); // Function FarlightPatchRuntime.PakReader.GetPakIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16cac80
	void Close(); // Function FarlightPatchRuntime.PakReader.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x16caa80
};

// Class FarlightPatchRuntime.PakWriter
// Size: 0xc0 (Inherited: 0x28)
struct UPakWriter : UObject {
	char pad_28[0x98]; // 0x28(0x98)
};

