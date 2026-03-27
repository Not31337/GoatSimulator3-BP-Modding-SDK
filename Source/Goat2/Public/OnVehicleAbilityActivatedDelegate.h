#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnVehicleAbilityActivatedDelegate.generated.h"

class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVehicleAbilityActivated, AGGVehicle*, Vehicle, FGameplayTagContainer, AbilityTags);

