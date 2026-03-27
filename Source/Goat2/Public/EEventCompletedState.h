#pragma once
#include "CoreMinimal.h"
#include "EEventCompletedState.generated.h"

UENUM(BlueprintType)
enum class EEventCompletedState : uint8 {
    Error,
    Incompleted,
    CompletedPreviously,
    CompletedBeforeJoining,
    CompletedRemotely,
    CompletedThisSession,
};

