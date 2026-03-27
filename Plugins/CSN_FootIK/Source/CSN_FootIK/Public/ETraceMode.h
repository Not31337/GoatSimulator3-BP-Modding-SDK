#pragma once
#include "CoreMinimal.h"
#include "ETraceMode.generated.h"

UENUM(BlueprintType)
enum class ETraceMode : uint8 {
    LineTrace,
    SphereTrace,
};

