#pragma once
#include "CoreMinimal.h"
#include "ERoadVehicleType.generated.h"

UENUM(BlueprintType)
enum class ERoadVehicleType : uint8 {
    RVT_Car,
    RVT_Boat,
};

