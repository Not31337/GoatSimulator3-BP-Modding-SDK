#pragma once
#include "CoreMinimal.h"
#include "EGGFenceSpacing.generated.h"

UENUM(BlueprintType)
enum class EGGFenceSpacing : uint8 {
    StretchMesh,
    NoStretchAndNoSpacing,
    SpaceEvenly,
    FillSpline,
};

