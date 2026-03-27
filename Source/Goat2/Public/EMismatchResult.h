#pragma once
#include "CoreMinimal.h"
#include "EMismatchResult.generated.h"

UENUM(BlueprintType)
enum class EMismatchResult : uint8 {
    MR_NothingSpecial,
    MR_NumPoints0,
};

