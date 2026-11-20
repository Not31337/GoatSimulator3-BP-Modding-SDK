#pragma once
#include "CoreMinimal.h"
#include "EGGSplineMeshPlacement.generated.h"

UENUM(BlueprintType)
enum class EGGSplineMeshPlacement : uint8 {
    PointToPoint,
    EvenlySpaced,
};

