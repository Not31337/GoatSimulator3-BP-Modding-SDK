#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnGearAbilityActivatedDelegate.generated.h"

class AGGGoat;
class UGGGearAbility;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGearAbilityActivated, AGGGoat*, Goat, FGameplayTagContainer, AbilityTags, UGGGearAbility*, AbilityInstance);

