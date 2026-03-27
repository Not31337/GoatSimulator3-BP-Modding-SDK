#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGGearAbility_GrassHair.generated.h"

UCLASS(Blueprintable)
class GOATMULTIVERSE_API UGGGearAbility_GrassHair : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HairCutRumble;
    
    UGGGearAbility_GrassHair();

};

