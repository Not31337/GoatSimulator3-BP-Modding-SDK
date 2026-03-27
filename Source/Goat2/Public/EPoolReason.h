#pragma once
#include "CoreMinimal.h"
#include "EPoolReason.generated.h"

UENUM(BlueprintType)
enum class EPoolReason : uint8 {
    PL_Default,
    PL_Relevancy,
};

