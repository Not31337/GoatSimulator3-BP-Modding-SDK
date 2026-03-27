#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGGearAbility_CuckooClock.generated.h"

UCLASS(Blueprintable)
class GOATMULTIVERSE_API UGGGearAbility_CuckooClock : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActivatedRumble;
    
public:
    UGGGearAbility_CuckooClock();

};

