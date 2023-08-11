// Class HotPatcherRuntime.FlibAssetManageHelper
// Size: 0x28 (Inherited: 0x28)
struct UFlibAssetManageHelper : UBlueprintFunctionLibrary {

	bool SaveStringToFile(struct FString InFile, struct FString inString); // Function HotPatcherRuntime.FlibAssetManageHelper.SaveStringToFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16edf90
	struct FString PackagePathToFilename(struct FString InPackagePath); // Function HotPatcherRuntime.FlibAssetManageHelper.PackagePathToFilename // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16edeb0
	bool ModuleIsEnabled(struct FString InModuleName); // Function HotPatcherRuntime.FlibAssetManageHelper.ModuleIsEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16ede10
	struct FString LongPackageNameToPackagePath(struct FString InLongPackageName); // Function HotPatcherRuntime.FlibAssetManageHelper.LongPackageNameToPackagePath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16edd30
	bool LoadFileToString(struct FString InFile, struct FString& OutString); // Function HotPatcherRuntime.FlibAssetManageHelper.LoadFileToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16edc30
	bool GetSpecifyAssetDetail(struct FString InLongPackageName, struct FAssetDetail& OutAssetDetail); // Function HotPatcherRuntime.FlibAssetManageHelper.GetSpecifyAssetDetail // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x16edb40
	bool GetRedirectorList(struct TArray<struct FString>& InFilterPackagePaths, struct TArray<struct FAssetDetail>& OutRedirector); // Function HotPatcherRuntime.FlibAssetManageHelper.GetRedirectorList // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x16eda00
	bool GetPluginModuleAbsDir(struct FString InPluginModuleName, struct FString& OutPath); // Function HotPatcherRuntime.FlibAssetManageHelper.GetPluginModuleAbsDir // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16ed900
	bool GetModuleNameByRelativePath(struct FString InRelativePath, struct FString& OutModuleName); // Function HotPatcherRuntime.FlibAssetManageHelper.GetModuleNameByRelativePath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16ed800
	bool GetEnableModuleAbsDir(struct FString InModuleName, struct FString& OutPath); // Function HotPatcherRuntime.FlibAssetManageHelper.GetEnableModuleAbsDir // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16ed700
	bool GetAssetReferenceEx(struct FAssetDetail& InAsset, struct TArray<enum class EAssetRegistryDependencyTypeEx>& SearchAssetDepTypes, struct TArray<struct FAssetDetail>& OutRefAsset); // Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetReferenceEx // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x16ed580
	bool GetAssetPackageGUID(struct FString InPackagePath, struct FName& OutGUID); // Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetPackageGUID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16ed490
	void GetAllEnabledModuleName(struct TMap<struct FString, struct FString>& OutModules); // Function HotPatcherRuntime.FlibAssetManageHelper.GetAllEnabledModuleName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16ed390
	bool FindFilesRecursive(struct FString InStartDir, struct TArray<struct FString>& OutFileList, bool InRecursive); // Function HotPatcherRuntime.FlibAssetManageHelper.FindFilesRecursive // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16ed210
	void FilterNoRefAssetsWithIgnoreFilter(struct TArray<struct FAssetDetail>& InAssetsDetail, struct TArray<struct FString>& InIgnoreFilters, struct TArray<struct FAssetDetail>& OutHasRefAssetsDetail, struct TArray<struct FAssetDetail>& OutDontHasRefAssetsDetail); // Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssetsWithIgnoreFilter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x16ed020
	void FilterNoRefAssets(struct TArray<struct FAssetDetail>& InAssetsDetail, struct TArray<struct FAssetDetail>& OutHasRefAssetsDetail, struct TArray<struct FAssetDetail>& OutDontHasRefAssetsDetail); // Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssets // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x16ecea0
	bool FilenameToPackagePath(struct FString InAbsPath, struct FString& OutPackagePath); // Function HotPatcherRuntime.FlibAssetManageHelper.FilenameToPackagePath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16ecda0
	bool ExportCookPakCommandToFile(struct TArray<struct FString>& InCommand, struct FString InFile); // Function HotPatcherRuntime.FlibAssetManageHelper.ExportCookPakCommandToFile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16ecc70
	bool ConvRelativeDirToAbsDir(struct FString InRelativePath, struct FString& OutAbsPath); // Function HotPatcherRuntime.FlibAssetManageHelper.ConvRelativeDirToAbsDir // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16ecb70
	bool ConvLongPackageNameToCookedPath(struct FString InProjectAbsDir, struct FString InPlatformName, struct FString InLongPackageName, struct TArray<struct FString>& OutCookedAssetPath, struct TArray<struct FString>& OutCookedAssetRelativePath); // Function HotPatcherRuntime.FlibAssetManageHelper.ConvLongPackageNameToCookedPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16ec910
	bool CombineAssetsDetailAsFAssetDepenInfo(struct TArray<struct FAssetDetail>& InAssetsDetailList, struct FAssetDependenciesInfo& OutAssetInfo); // Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetsDetailAsFAssetDepenInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x16ec780
	struct FAssetDependenciesInfo CombineAssetDependencies(struct FAssetDependenciesInfo& A, struct FAssetDependenciesInfo& B); // Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetDependencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x16ec540
};

// Class HotPatcherRuntime.FlibPakHelper
// Size: 0x28 (Inherited: 0x28)
struct UFlibPakHelper : UBlueprintFunctionLibrary {

	bool UnMountPak(struct FString PakPath); // Function HotPatcherRuntime.FlibPakHelper.UnMountPak // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f41d0
	bool ScanPlatformDirectory(struct FString InRelativePath, bool bIncludeFile, bool bIncludeDir, bool bRecursively, struct TArray<struct FString>& OutResault); // Function HotPatcherRuntime.FlibPakHelper.ScanPlatformDirectory // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16f3fd0
	struct TArray<struct FString> ScanExtenPakFiles(); // Function HotPatcherRuntime.FlibPakHelper.ScanExtenPakFiles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f3f50
	bool ScanExtenFilesInDirectory(struct FString InRelativePath, struct FString InExtenPostfix, bool InRecursively, struct TArray<struct FString>& OutFiles); // Function HotPatcherRuntime.FlibPakHelper.ScanExtenFilesInDirectory // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16f3d90
	struct TArray<struct FString> ScanAllVersionDescribleFiles(); // Function HotPatcherRuntime.FlibPakHelper.ScanAllVersionDescribleFiles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f3d10
	void ReloadShaderbytecode(); // Function HotPatcherRuntime.FlibPakHelper.ReloadShaderbytecode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f3c70
	bool OpenPSO(struct FString Name); // Function HotPatcherRuntime.FlibPakHelper.OpenPSO // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f39a0
	bool MountPak(struct FString PakPath, int32_t PakOrder, struct FString InMountPoint); // Function HotPatcherRuntime.FlibPakHelper.MountPak // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f3b30
	bool LoadShaderbytecode(struct FString LibraryName, struct FString LibraryDir); // Function HotPatcherRuntime.FlibPakHelper.LoadShaderbytecode // (Final|Exec|Native|Static|Public|BlueprintCallable) // @ game+0x16f3a40
	bool LoadAssetRegistry(struct FString LibraryName, struct FString LibraryDir); // Function HotPatcherRuntime.FlibPakHelper.LoadAssetRegistry // (Final|Exec|Native|Static|Public|BlueprintCallable) // @ game+0x16f38b0
	int32_t GetPakOrderByPakPath(struct FString PakFile); // Function HotPatcherRuntime.FlibPakHelper.GetPakOrderByPakPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f34e0
	struct TArray<struct FString> GetAllMountedPaks(); // Function HotPatcherRuntime.FlibPakHelper.GetAllMountedPaks // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f28f0
	void ExecMountPak(struct FString InPakPath, int32_t InPakOrder, struct FString InMountPoint); // Function HotPatcherRuntime.FlibPakHelper.ExecMountPak // (Final|Exec|Native|Static|Public) // @ game+0x16f2530
	bool CreateFileByBytes(struct FString InFile, struct TArray<char>& InBytes, int32_t InWriteFlag); // Function HotPatcherRuntime.FlibPakHelper.CreateFileByBytes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16f17b0
	void CloseShaderbytecode(struct FString LibraryName); // Function HotPatcherRuntime.FlibPakHelper.CloseShaderbytecode // (Final|Exec|Native|Static|Public|BlueprintCallable) // @ game+0x16f1720
};

// Class HotPatcherRuntime.FlibPatchParserHelper
// Size: 0x28 (Inherited: 0x28)
struct UFlibPatchParserHelper : UBlueprintFunctionLibrary {

	void ReloadShaderbytecode(); // Function HotPatcherRuntime.FlibPatchParserHelper.ReloadShaderbytecode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f3c70
	bool LoadShaderbytecode(struct FString LibraryName, struct FString LibraryDir); // Function HotPatcherRuntime.FlibPatchParserHelper.LoadShaderbytecode // (Final|Exec|Native|Static|Public|BlueprintCallable) // @ game+0x16f3a40
	struct FString HashStringWithSHA1(struct FString inString); // Function HotPatcherRuntime.FlibPatchParserHelper.HashStringWithSHA1 // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f3740
	struct FString GetProjectName(); // Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16cbc90
	struct TArray<struct FString> GetProjectIniFiles(struct FString InProjectDir, struct FString InPlatformName); // Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectIniFiles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f3600
	struct FString GetProjectFilePath(); // Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectFilePath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f3580
	bool GetPakFileInfo(struct FString InFile, struct FPakFileInfo& OutFileInfo); // Function HotPatcherRuntime.FlibPatchParserHelper.GetPakFileInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16f33c0
	struct TArray<struct FString> GetIniConfigs(struct FString InSearchDir, struct FString InPlatformName); // Function HotPatcherRuntime.FlibPatchParserHelper.GetIniConfigs // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f3280
	struct TArray<struct FString> GetEngineConfigs(struct FString InPlatformName); // Function HotPatcherRuntime.FlibPatchParserHelper.GetEngineConfigs // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f31a0
	struct TArray<struct FString> GetEnabledPluginConfigs(struct FString InPlatformName); // Function HotPatcherRuntime.FlibPatchParserHelper.GetEnabledPluginConfigs // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f30c0
	bool GetCookedShaderBytecodeFiles(struct FString InProjectAbsDir, struct FString InProjectName, struct FString InPlatformName, bool InGalobalBytecode, bool InProjectBytecode, struct TArray<struct FString>& OutFiles); // Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedShaderBytecodeFiles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16f2e60
	struct TArray<struct FString> GetCookedGlobalShaderCacheFiles(struct FString InProjectDir, struct FString InPlatformName); // Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedGlobalShaderCacheFiles // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f2d20
	bool GetCookedAssetRegistryFiles(struct FString InProjectAbsDir, struct FString InProjectName, struct FString InPlatformName, struct FString& OutFiles); // Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedAssetRegistryFiles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16f2b70
	struct TArray<struct FString> GetAvailableMaps(struct FString GameName, bool IncludeEngineMaps, bool IncludePluginMaps, bool Sorted); // Function HotPatcherRuntime.FlibPatchParserHelper.GetAvailableMaps // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f2970
	struct FPlatformExternFiles GetAllExFilesByPlatform(struct FPlatformExternAssets& InPlatformConf, bool InGeneratedHash); // Function HotPatcherRuntime.FlibPatchParserHelper.GetAllExFilesByPlatform // (Final|Native|Static|Public|HasOutParms) // @ game+0x16f26d0
	bool DiffVersionAssets(struct FAssetDependenciesInfo& InNewVersion, struct FAssetDependenciesInfo& InBaseVersion, struct FAssetDependenciesInfo& OutAddAsset, struct FAssetDependenciesInfo& OutModifyAsset, struct FAssetDependenciesInfo& OutDeleteAsset); // Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAssets // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x16f1f40
	bool DiffVersionAllPlatformExFiles(struct FHotPatcherVersion& InBaseVersion, struct FHotPatcherVersion& InNewVersion, struct TMap<enum class ETargetPlatform, struct FPatchVersionExternDiff>& OutDiff); // Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAllPlatformExFiles // (Final|Native|Static|Public|HasOutParms) // @ game+0x16f1900
	void CloseShaderbytecode(struct FString LibraryName); // Function HotPatcherRuntime.FlibPatchParserHelper.CloseShaderbytecode // (Final|Exec|Native|Static|Public|BlueprintCallable) // @ game+0x16f1720
};

// Class HotPatcherRuntime.FlibShaderPipelineCacheHelper
// Size: 0x28 (Inherited: 0x28)
struct UFlibShaderPipelineCacheHelper : UBlueprintFunctionLibrary {

	bool SavePipelineFileCache(enum class EPSOSaveMode Mode); // Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.SavePipelineFileCache // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f3c90
	bool LoadShaderPipelineCache(struct FString Name); // Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.LoadShaderPipelineCache // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f39a0
	bool IsEnabledUsePSO(); // Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledUsePSO // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f3880
	bool IsEnabledSaveBoundPSOLog(); // Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledSaveBoundPSOLog // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f3850
	bool IsEnabledLogPSO(); // Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledLogPSO // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f3820
	bool EnableShaderPipelineCache(bool bEnable); // Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableShaderPipelineCache // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f24a0
	bool EnableSaveBoundPSOLog(bool bEnable); // Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableSaveBoundPSOLog // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f2410
	bool EnableLogPSO(bool bEnable); // Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableLogPSO // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x16f2380
};

// Class HotPatcherRuntime.MountListener
// Size: 0x98 (Inherited: 0x28)
struct UMountListener : UObject {
	struct FMulticastInlineDelegate OnMountPakDelegate; // 0x28(0x10)
	struct FMulticastInlineDelegate OnUnMountPakDelegate; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)

	void Init(); // Function HotPatcherRuntime.MountListener.Init // (Final|Native|Public|BlueprintCallable) // @ game+0x16f61b0
};

// Class HotPatcherRuntime.ScopedSlowTaskContext
// Size: 0x30 (Inherited: 0x28)
struct UScopedSlowTaskContext : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

