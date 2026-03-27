#pragma once
#include "CoreMinimal.h"
#include "OnInteractWithEggDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractWithEgg, bool, bEnteredEgg);

