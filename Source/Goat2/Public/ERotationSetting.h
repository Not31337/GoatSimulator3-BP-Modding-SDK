#pragma once
#include "CoreMinimal.h"
#include "ERotationSetting.generated.h"

UENUM(BlueprintType)
enum class ERotationSetting : uint8 {
    RS_WaypointRotation,
    RS_RandomRotation,
    RS_NoRotationChange,
};

