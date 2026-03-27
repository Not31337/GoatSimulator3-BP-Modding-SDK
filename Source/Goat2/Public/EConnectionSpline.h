#pragma once
#include "CoreMinimal.h"
#include "EConnectionSpline.generated.h"

UENUM(BlueprintType)
enum class EConnectionSpline : uint8 {
    CS_SingleLaneSpline,
    CS_RightLaneSpline,
    CS_LeftLaneSpline,
};

