#pragma once
#include "CoreMinimal.h"
#include "OnEnterExitKidneyStoneDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnterExitKidneyStone, bool, bEnteredKidneyStone);

