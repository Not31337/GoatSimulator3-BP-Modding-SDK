#pragma once
#include "CoreMinimal.h"
#include "ELSIdleEntryState.generated.h"

UENUM(BlueprintType)
enum class ELSIdleEntryState : uint8 {
    Normal,
    LeftFoot,
    RightFoot,
    CrouchLeftFloot,
    CrouchRightFoot,
};

