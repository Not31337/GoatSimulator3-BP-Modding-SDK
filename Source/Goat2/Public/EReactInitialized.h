#pragma once
#include "CoreMinimal.h"
#include "EReactInitialized.generated.h"

UENUM(BlueprintType)
enum class EReactInitialized : uint8 {
    RI_No,
    RI_BaseOnly,
    RI_BaseAndSub,
};

