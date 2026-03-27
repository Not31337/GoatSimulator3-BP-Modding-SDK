#pragma once
#include "CoreMinimal.h"
#include "EGGCloningMachineState.generated.h"

UENUM(BlueprintType)
enum class EGGCloningMachineState : uint8 {
    Idle,
    PreScan,
    Scanning,
    Cloning,
};

