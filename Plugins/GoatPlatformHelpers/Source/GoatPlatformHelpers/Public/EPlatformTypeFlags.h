#pragma once
#include "CoreMinimal.h"
#include "EPlatformTypeFlags.generated.h"

UENUM(BlueprintType)
enum class EPlatformTypeFlags : uint8 {
    None,
    Desktop,
    Console,
    Mobile = 4,
};

