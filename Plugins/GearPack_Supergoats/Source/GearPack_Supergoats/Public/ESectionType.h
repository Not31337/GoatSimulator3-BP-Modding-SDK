#pragma once
#include "CoreMinimal.h"
#include "ESectionType.generated.h"

UENUM(BlueprintType)
enum class ESectionType : uint8 {
    ST_Start,
    ST_Middle,
    ST_End,
};

