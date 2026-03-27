#pragma once
#include "CoreMinimal.h"
#include "EInteractChances.generated.h"

UENUM(BlueprintType)
enum class EInteractChances : uint8 {
    IC_Zero,
    IC_VeryLow,
    IC_Low,
    IC_Medium,
    IC_High,
    IC_VeryHigh,
};

