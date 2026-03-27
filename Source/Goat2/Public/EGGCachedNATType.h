#pragma once
#include "CoreMinimal.h"
#include "EGGCachedNATType.generated.h"

UENUM(BlueprintType)
enum class EGGCachedNATType : uint8 {
    CNT_Open,
    CNT_Moderate,
    CNT_Strict,
    CNT_TBD,
};

