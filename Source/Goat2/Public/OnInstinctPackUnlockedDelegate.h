#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnInstinctPackUnlockedDelegate.generated.h"

class UGGInstinctPackDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInstinctPackUnlocked, UGGInstinctPackDataAsset*, DataAsset, FGameplayTag, Context);

