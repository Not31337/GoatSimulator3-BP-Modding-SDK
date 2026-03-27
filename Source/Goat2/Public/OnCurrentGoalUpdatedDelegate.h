#pragma once
#include "CoreMinimal.h"
#include "OnCurrentGoalUpdatedDelegate.generated.h"

class AGGCastleStretchGoal;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentGoalUpdated, AGGCastleStretchGoal*, UpdatedGoal);

