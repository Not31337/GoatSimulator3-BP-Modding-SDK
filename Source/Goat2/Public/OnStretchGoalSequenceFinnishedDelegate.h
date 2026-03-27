#pragma once
#include "CoreMinimal.h"
#include "OnStretchGoalSequenceFinnishedDelegate.generated.h"

class AGGCastleStretchGoal;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStretchGoalSequenceFinnished, AGGCastleStretchGoal*, StretchGoal);

