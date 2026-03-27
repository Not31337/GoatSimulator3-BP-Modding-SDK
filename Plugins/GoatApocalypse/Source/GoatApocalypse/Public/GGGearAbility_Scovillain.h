#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGGearAbility_Scovillain.generated.h"

class UGGGoatGear_AltGoat_Scovillain;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_Scovillain : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RumbleTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_AltGoat_Scovillain* Scovillain;
    
public:
    UGGGearAbility_Scovillain();

};

