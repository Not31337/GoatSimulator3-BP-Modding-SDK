#pragma once
#include "CoreMinimal.h"
#include "EStateChangeSource.h"
#include "EStretchGoalStates.h"
#include "OnStretchGoalChangedStateDelegate.generated.h"

class AGGCastleStretchGoal;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStretchGoalChangedState, AGGCastleStretchGoal*, StretchGoal, EStretchGoalStates, State, EStateChangeSource, Source);

