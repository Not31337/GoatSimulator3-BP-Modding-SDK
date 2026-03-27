#pragma once
#include "CoreMinimal.h"
#include "ELoadingScreenType.generated.h"

UENUM(BlueprintType)
enum class ELoadingScreenType : uint8 {
    LST_None,
    LST_LevelStart,
    LST_TargetLocation,
    LST_Duration,
};

