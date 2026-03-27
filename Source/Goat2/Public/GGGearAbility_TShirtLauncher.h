#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_TShirtLauncher.generated.h"

class AGGPhysicsProjectile;
class AGGTShirt;
class UGGGoatGear_Static_TShirtLauncher;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_TShirtLauncher : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsProjectile> TShirtClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProjectileSpawnerSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Static_TShirtLauncher* TShirtComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGTShirt* TShirt;
    
public:
    UGGGearAbility_TShirtLauncher();

};

