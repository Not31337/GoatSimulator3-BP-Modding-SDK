#pragma once
#include "CoreMinimal.h"
#include "EGGVehicleAnimationType.generated.h"

UENUM(BlueprintType)
enum class EGGVehicleAnimationType : uint8 {
    ForOccupancy,
    SittingEmote,
    Driver,
    Passenger,
    Custom,
};

