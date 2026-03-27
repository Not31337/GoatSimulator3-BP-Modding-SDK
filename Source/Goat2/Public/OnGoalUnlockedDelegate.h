#pragma once
#include "CoreMinimal.h"
#include "OnGoalUnlockedDelegate.generated.h"

class AGGCastleStretchGoal;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGoalUnlocked, AGGCastleStretchGoal*, UnlockedGoal);

