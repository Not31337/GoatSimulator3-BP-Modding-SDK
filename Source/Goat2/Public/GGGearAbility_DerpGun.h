#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_DerpGun.generated.h"

class AGGPhysicsProjectile;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_DerpGun : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsProjectile> DerpGunBulletClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProjectileSpawnerSocket;
    
    UGGGearAbility_DerpGun();

};

