#pragma once
#include "CoreMinimal.h"
#include "EVehicleDefaultState.generated.h"

UENUM(BlueprintType)
enum class EVehicleDefaultState : uint8 {
    VDS_Idle,
    VDS_Driven,
};

