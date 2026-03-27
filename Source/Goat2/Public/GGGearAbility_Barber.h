#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Barber.generated.h"

class AGGPhysicsProjectile;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_Barber : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsProjectile> BlowdryerProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProjectileSpawnerSocket;
    
public:
    UGGGearAbility_Barber();

};

