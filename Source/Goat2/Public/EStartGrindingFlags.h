#pragma once
#include "CoreMinimal.h"
#include "EStartGrindingFlags.generated.h"

UENUM(BlueprintType)
enum class EStartGrindingFlags : uint8 {
    None,
    ForceGrind,
    AllowWhileGrinding,
};

