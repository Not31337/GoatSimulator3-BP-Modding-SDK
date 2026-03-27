#pragma once
#include "CoreMinimal.h"
#include "EGGPerformanceImpact.generated.h"

UENUM(BlueprintType)
enum class EGGPerformanceImpact : uint8 {
    None,
    Low,
    Medium,
    High,
};

