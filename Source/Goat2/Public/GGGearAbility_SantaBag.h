#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_SantaBag.generated.h"

class AGGPhysicsProjectile;
class UGGAlternativeGoatDataAsset;
class USceneComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_SantaBag : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsProjectile> GiftProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalLaunchAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UGGAlternativeGoatDataAsset>, float> AltGoatAngleOffsets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BagGear;
    
public:
    UGGGearAbility_SantaBag();

};

