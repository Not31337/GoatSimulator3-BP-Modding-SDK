#pragma once
#include "CoreMinimal.h"
#include "ELevelVisibilityTarget.generated.h"

UENUM(BlueprintType)
enum class ELevelVisibilityTarget : uint8 {
    LVT_None,
    LVT_Rift,
    LVT_Main,
};

