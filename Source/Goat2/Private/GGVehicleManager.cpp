#include "GGVehicleManager.h"
#include "Templates/SubclassOf.h"

UGGVehicleManager::UGGVehicleManager() {
    this->VanillaVehicleMetadataLookupTable = NULL;
    this->DLCVehicleMetadataLookupTables.AddDefaulted(2);
    this->ManageInterval = 1.50f;
    this->ForceRelevantFor = 4.00f;
    this->LocationCooldownDelay = 10.00f;
    this->LocationCooldownRadius = 2000.00f;
    this->InitialVelocity = 800.00f;
    this->VelocityConsideredFast = 1000.00f;
    this->DrivingFastMultiplier = 2.50f;
    this->StartSkippingAfter = 0;
    this->HighVelocityThreshold = 1500.00f;
    this->HighVelocityMultiplier = 3.00f;
    this->MaxIdleVehiclesPerUpdate = 3;
    this->MaxImportantIdleVehiclesPerUpdate = 3;
    this->MaxDrivenVehiclesPerUpdate = 1;
    this->CurrentConfigAsset = NULL;
    this->NPCManager = NULL;
}

void UGGVehicleManager::RemoveVehicleFromSpawnPool(EVehicleSpawnPool RemoveFrom, TSoftClassPtr<AGGVehicle> VehicleClass) {
}

void UGGVehicleManager::PoolVehicle(AGGVehicle* Vehicle, EPoolReason Reason) {
}

bool UGGVehicleManager::GetVehiclesDisabled() const {
    return false;
}

UGGVehicleManager* UGGVehicleManager::GetVehicleManager(const UObject* WorldContextObject) {
    return NULL;
}

TArray<AGGVehicle*> UGGVehicleManager::GetSplineSpawnedVehicles() const {
    return TArray<AGGVehicle*>();
}

TArray<AGGVehicle*> UGGVehicleManager::GetPooledVehicles() const {
    return TArray<AGGVehicle*>();
}

AGGVehicle* UGGVehicleManager::GetPooledVehicle(TSubclassOf<AGGVehicle> VehicleClass) {
    return NULL;
}

UGGRoadSplineComponent* UGGVehicleManager::GetClosestSpline_K2(const FVector& TestLocation, FVector& ClosestPointOnSpline, int32& NextPoint, bool bSkipSplinesWithEndNearest, const TArray<UGGRoadSplineComponent*>& IgnoredSplines, ERoadVehicleType RoadVehicleType) const {
    return NULL;
}

FRoadPathQueryResult UGGVehicleManager::GetClosestRoadPath_K2(const FVector& TestLocation, bool bSkipSplinesWithEndNearest, const TArray<UGGRoadSplineComponent*>& IgnoredSplines, const TArray<AGGRoadPathSpline*>& IgnoredRoads, ERoadVehicleType RoadVehicleType) const {
    return FRoadPathQueryResult{};
}

TArray<AGGVehicle*> UGGVehicleManager::GetAllVehicles() const {
    return TArray<AGGVehicle*>();
}

TArray<AGGVehicle*> UGGVehicleManager::GetActiveVehicles() const {
    return TArray<AGGVehicle*>();
}

void UGGVehicleManager::AddVehicleToSpawnPool(EVehicleSpawnPool AddTo, TSoftClassPtr<AGGVehicle> VehicleClass, int32 Weight) {
}


