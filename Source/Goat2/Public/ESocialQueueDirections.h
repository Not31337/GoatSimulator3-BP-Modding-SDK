#pragma once
#include "CoreMinimal.h"
#include "ESocialQueueDirections.generated.h"

UENUM(BlueprintType)
enum class ESocialQueueDirections : uint8 {
    SQD_Forward,
    SQD_Left,
    SQD_Right,
};

