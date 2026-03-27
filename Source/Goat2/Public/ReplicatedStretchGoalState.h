#pragma once
#include "CoreMinimal.h"
#include "EStretchGoalStates.h"
#include "ReplicatedStretchGoalState.generated.h"

class AGGCastleStretchGoal;

USTRUCT(BlueprintType)
struct FReplicatedStretchGoalState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCastleStretchGoal* StretchGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStretchGoalStates State;
    
    GOAT2_API FReplicatedStretchGoalState();
};

