#pragma once
#include "CoreMinimal.h"
#include "EGGAccountConnectionResult.generated.h"

UENUM(BlueprintType)
enum class EGGAccountConnectionResult : uint8 {
    Success,
    NoConnecedId,
    SuccessButDifferentAccountConnected,
    NoConnecedIdButDifferentAccountConnected,
    Error,
    SignedOutEpicUsingSteam,
    Close,
};

