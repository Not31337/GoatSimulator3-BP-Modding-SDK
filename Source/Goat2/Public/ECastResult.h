#pragma once
#include "CoreMinimal.h"
#include "ECastResult.generated.h"

UENUM(BlueprintType)
enum class ECastResult : uint8 {
    Successful,
    Failed,
};

