#pragma once
#include "CoreMinimal.h"
#include "EQueueDirections.generated.h"

UENUM(BlueprintType)
enum class EQueueDirections : uint8 {
    QD_Forward,
    QD_Left,
    QD_Right,
};

