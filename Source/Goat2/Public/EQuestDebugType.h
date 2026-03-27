#pragma once
#include "CoreMinimal.h"
#include "EQuestDebugType.generated.h"

UENUM(BlueprintType)
enum class EQuestDebugType : uint8 {
    Event,
    Warning,
    Error,
};

