#pragma once
#include "CoreMinimal.h"
#include "OnFirstInstinctPackUnlockedDelegate.generated.h"

class UGGInstinctPackDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFirstInstinctPackUnlocked, UGGInstinctPackDataAsset*, Pack);

