#pragma once
#include "CoreMinimal.h"
#include "EPostProcessCameraContext.generated.h"

UENUM(BlueprintType)
enum class EPostProcessCameraContext : uint8 {
    PlayerCamera,
    VehicleCamera,
    WorldCamera,
};

