#pragma once
#include "CoreMinimal.h"
#include "EPopupResponse.generated.h"

UENUM(BlueprintType)
enum class EPopupResponse : uint8 {
    Error,
    Accepted,
    Declined,
    Canceled,
    Custom,
};

