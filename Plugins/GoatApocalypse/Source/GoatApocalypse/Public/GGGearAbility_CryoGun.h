#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGGearAbility_CryoGun.generated.h"

class UGGGoatGear_Static_CryoGun;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_CryoGun : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RumbleTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Static_CryoGun* CryoGun;
    
public:
    UGGGearAbility_CryoGun();

};

