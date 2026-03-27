#pragma once
#include "CoreMinimal.h"
#include "EVisualizerState.generated.h"

UENUM(BlueprintType)
enum class EVisualizerState : uint8 {
    VS_Normal,
    VS_Valid,
    VS_Invalid,
};

