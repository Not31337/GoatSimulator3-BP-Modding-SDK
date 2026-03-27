#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GGVehicle.h"
#include "GGVehicle_FlyingCarpet.generated.h"

class AActor;
class APawn;
class UBoxComponent;
class UGGFlyingCarpetSettings_DataAsset;
class UGGVehicleTargetRotationControlConfig_DataAsset;
class UGGVehicleTorqueControlConfig_DataAsset;
class UPhysicsThrusterComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGVehicle_FlyingCarpet : public AGGVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGFlyingCarpetSettings_DataAsset* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGVehicleTargetRotationControlConfig_DataAsset* TargetRotationControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGVehicleTorqueControlConfig_DataAsset* TorqueControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ActivateHoveringProximity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> OverlappingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsThrusterComponent*> Thrusters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredActorsForGroundTrace;
    
    AGGVehicle_FlyingCarpet(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ProximityBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
};

