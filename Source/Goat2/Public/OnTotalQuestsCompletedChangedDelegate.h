#pragma once
#include "CoreMinimal.h"
#include "OnTotalQuestsCompletedChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTotalQuestsCompletedChanged, int32, NewTotalCompletedQuests);

