#pragma once
#include "CoreMinimal.h"
#include "EGGDialogueLineContinueMode.generated.h"

UENUM(BlueprintType)
enum class EGGDialogueLineContinueMode : uint8 {
    AfterSoundFinished,
    AfterMontageFinished,
    AfterDuration,
    PlayerInteraction,
    FactExists,
    FactIsTrue,
    FactSatisfyEquation,
};

