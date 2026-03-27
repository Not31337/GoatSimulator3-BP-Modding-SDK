#pragma once
#include "CoreMinimal.h"
#include "ECheckpointVisibilityType.generated.h"

UENUM(BlueprintType)
enum class ECheckpointVisibilityType : uint8 {
    AllNotCrossed,
    OnlyNext,
};

