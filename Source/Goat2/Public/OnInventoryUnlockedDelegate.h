#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnInventoryUnlockedDelegate.generated.h"

class AGGPlayerController;
class UDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInventoryUnlocked, UDataAsset*, Asset, FGameplayTag, Context, AGGPlayerController*, OptionalPC);

