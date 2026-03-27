#pragma once
#include "CoreMinimal.h"
#include "EGGDialogueInteractResponse.generated.h"

UENUM(BlueprintType)
enum class EGGDialogueInteractResponse : uint8 {
    Started,
    AdvancedToNextLine,
    Canceled,
    Ended,
    Error,
    WaitingForServer,
};

