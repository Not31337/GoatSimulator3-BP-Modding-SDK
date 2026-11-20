#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnGearAbilityTutorialCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGearAbilityTutorialCompleted, FGameplayTagContainer, AbilityTags);

