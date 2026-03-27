#pragma once
#include "CoreMinimal.h"
#include "EKaijuBeamState.generated.h"

UENUM(BlueprintType)
enum class EKaijuBeamState : uint8 {
    Idle,
    Charging,
    PreBeaming,
    Beaming,
};

