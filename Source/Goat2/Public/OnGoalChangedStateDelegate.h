#pragma once
#include "CoreMinimal.h"
#include "EStateChangeSource.h"
#include "EStretchGoalStates.h"
#include "OnGoalChangedStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoalChangedState, EStretchGoalStates, NewState, EStateChangeSource, ChangeSource);

