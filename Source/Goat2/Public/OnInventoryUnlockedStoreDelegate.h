#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnInventoryUnlockedStoreDelegate.generated.h"

class AGGPlayerController;
class UDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInventoryUnlockedStore, UDataAsset*, Asset, FGameplayTag, Context, AGGPlayerController*, OptionalPC);

