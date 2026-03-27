#pragma once
#include "CoreMinimal.h"
#include "EVehicleType.generated.h"

UENUM(BlueprintType)
enum class EVehicleType : uint8 {
    VT_Car,
    VT_Bike,
    VT_Boat,
    VT_FlyingBroom,
    VT_Motorcycle,
    VT_Helicopter,
    VT_SandWorm,
};

