#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ActiveVehicleAreaContainer.h"
#include "EPoolReason.h"
#include "ERoadVehicleType.h"
#include "EVehicleSpawnPool.h"
#include "RoadPathQueryResult.h"
#include "SpawnLocationCooldown.h"
#include "Templates/SubclassOf.h"
#include "VehicleAreaSpawners.h"
#include "WeightedElement_VehicleClass.h"
#include "GGVehicleManager.generated.h"

class AGGRoadPathSpline;
class AGGVehicle;
class UDataTable;
class UGGNPCManager;
class UGGNPCManagerConfigAsset;
class UGGRoadSplineComponent;
class UGGVehicleManager;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGVehicleManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VehiclePoolLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VanillaVehicleMetadataLookupTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DLCVehicleMetadataLookupTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> AdditionalMetaDataDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManageInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceRelevantFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_VehicleClass> DefaultVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationCooldownDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationCooldownRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityConsideredFast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrivingFastMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartSkippingAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIdleVehiclesPerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxImportantIdleVehiclesPerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDrivenVehiclesPerUpdate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNPCManagerConfigAsset* CurrentConfigAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGVehicle*> IrrelevantVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnLocationCooldown> SpawnLocationCooldowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGVehicle*> AllVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGVehicle*> ActiveVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGVehicle*> SplineSpawnedVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGVehicle*> PooledVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveVehicleAreaContainer> ActiveVehicleAreaContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGRoadPathSpline*> RegisteredRoads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGRoadPathSpline*> ActiveRoads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleAreaSpawners> AreaSpawners;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_VehicleClass> DrivenVehicleSpawnPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_VehicleClass> ParkedVehicleSpawnPool;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNPCManager* NPCManager;
    
public:
    UGGVehicleManager();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveVehicleFromSpawnPool(EVehicleSpawnPool RemoveFrom, TSoftClassPtr<AGGVehicle> VehicleClass);
    
    UFUNCTION(BlueprintCallable)
    void PoolVehicle(AGGVehicle* Vehicle, EPoolReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVehiclesDisabled() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGGVehicleManager* GetVehicleManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGVehicle*> GetSplineSpawnedVehicles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGVehicle*> GetPooledVehicles() const;
    
    UFUNCTION(BlueprintCallable)
    AGGVehicle* GetPooledVehicle(TSubclassOf<AGGVehicle> VehicleClass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGRoadSplineComponent* GetClosestSpline_K2(const FVector& TestLocation, FVector& ClosestPointOnSpline, int32& NextPoint, bool bSkipSplinesWithEndNearest, const TArray<UGGRoadSplineComponent*>& IgnoredSplines, ERoadVehicleType RoadVehicleType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRoadPathQueryResult GetClosestRoadPath_K2(const FVector& TestLocation, bool bSkipSplinesWithEndNearest, const TArray<UGGRoadSplineComponent*>& IgnoredSplines, const TArray<AGGRoadPathSpline*>& IgnoredRoads, ERoadVehicleType RoadVehicleType) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGVehicle*> GetAllVehicles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGVehicle*> GetActiveVehicles() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddVehicleToSpawnPool(EVehicleSpawnPool AddTo, TSoftClassPtr<AGGVehicle> VehicleClass, int32 Weight);
    
};

