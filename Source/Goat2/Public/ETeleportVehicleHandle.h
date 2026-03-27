#pragma once
#include "CoreMinimal.h"
#include "ETeleportVehicleHandle.generated.h"

UENUM(BlueprintType)
enum class ETeleportVehicleHandle : uint8 {
    TVH_ExitVehicle,
    TVH_TeleportWithVehicle,
};

