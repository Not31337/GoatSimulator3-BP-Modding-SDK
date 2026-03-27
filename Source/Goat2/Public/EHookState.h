#pragma once
#include "CoreMinimal.h"
#include "EHookState.generated.h"

UENUM(BlueprintType)
enum class EHookState : uint8 {
    HS_Active,
    HS_Hidden,
    HS_Attached,
    HS_Retracting,
};

