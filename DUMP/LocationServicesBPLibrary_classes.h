// Class LocationServicesBPLibrary.LocationServices
// Size: 0x28 (Inherited: 0x28)
struct ULocationServices : UBlueprintFunctionLibrary {

	bool StopLocationServices(); // Function LocationServicesBPLibrary.LocationServices.StopLocationServices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17b6210
	bool StartLocationServices(); // Function LocationServicesBPLibrary.LocationServices.StartLocationServices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17b61e0
	bool IsLocationAccuracyAvailable(enum class ELocationAccuracy Accuracy); // Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17b6160
	bool InitLocationServices(enum class ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter); // Function LocationServicesBPLibrary.LocationServices.InitLocationServices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17b6050
	struct ULocationServicesImpl* GetLocationServicesImpl(); // Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17b6030
	struct FLocationServicesData GetLastKnownLocation(); // Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17b5ff0
	bool AreLocationServicesEnabled(); // Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17b5fc0
};

// Class LocationServicesBPLibrary.LocationServicesImpl
// Size: 0x38 (Inherited: 0x28)
struct ULocationServicesImpl : UObject {
	struct FMulticastInlineDelegate OnLocationChanged; // 0x28(0x10)
};

