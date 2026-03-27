#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGNPCEvent.h"
#include "Templates/SubclassOf.h"
#include "GGNPCEvent_Firetruck.generated.h"

class AGGNPC;
class AGGNPC_Humanoid;
class AGGVehicle;
class AGGVehicle_Car_Firetruck;

UCLASS(Blueprintable)
class GOAT2_API AGGNPCEvent_Firetruck : public AGGNPCEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSplineDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineAdjustDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleHeightSpawnAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGVehicle> FiretruckClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGNPC> FirefighterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceEjectWhenStuckFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LargeFireLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedSirenTimeWhileStuck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC_Humanoid* FirefighterNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC_Humanoid* FirefighterNPCPassenger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle_Car_Firetruck* FiretruckVehicle;
    
public:
    AGGNPCEvent_Firetruck(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnReachedPathTargetLocation(AGGVehicle* Vehicle, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void FirefighterExit();
    
};

