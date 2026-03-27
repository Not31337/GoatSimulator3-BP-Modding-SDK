#pragma once
#include "CoreMinimal.h"
#include "OnMiniGameUnlockedDelegate.generated.h"

class UGGPlayerGameDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMiniGameUnlocked, UGGPlayerGameDataAsset*, UnlockedGame);

