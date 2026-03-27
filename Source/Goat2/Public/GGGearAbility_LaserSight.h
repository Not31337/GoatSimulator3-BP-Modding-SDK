#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "GGGearAbility_LaserSight.generated.h"

class AActor;
class AGGCharacter;
class AGGVehicle;
class UGGGoatGear_Static_LaserSight;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_LaserSight : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysActorForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalForce;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Static_LaserSight* LaserSightGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastLaunchedActor;
    
public:
    UGGGearAbility_LaserSight();

    UFUNCTION(BlueprintCallable)
    void CharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
};

