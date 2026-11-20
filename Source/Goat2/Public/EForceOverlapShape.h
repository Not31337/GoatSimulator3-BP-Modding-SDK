#pragma once
#include "CoreMinimal.h"
#include "EForceOverlapShape.generated.h"

UENUM(BlueprintType)
enum class EForceOverlapShape : uint8 {
    Sphere,
    Cone,
    Box,
};

