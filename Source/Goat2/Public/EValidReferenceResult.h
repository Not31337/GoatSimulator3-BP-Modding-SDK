#pragma once
#include "CoreMinimal.h"
#include "EValidReferenceResult.generated.h"

UENUM(BlueprintType)
enum class EValidReferenceResult : uint8 {
    Valid,
    NotValid,
};

