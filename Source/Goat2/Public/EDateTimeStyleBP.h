#pragma once
#include "CoreMinimal.h"
#include "EDateTimeStyleBP.generated.h"

UENUM(BlueprintType)
enum class EDateTimeStyleBP : uint8 {
    Default,
    Short,
    Medium,
    Long,
    Full,
};

