#pragma once
#include "CoreMinimal.h"
#include "EHammerState.generated.h"

UENUM(BlueprintType)
enum class EHammerState : uint8 {
    HS_Thrown,
    HS_Returning,
    HS_Stopped,
};

