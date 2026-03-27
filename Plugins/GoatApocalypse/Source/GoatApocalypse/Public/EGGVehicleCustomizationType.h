#pragma once
#include "CoreMinimal.h"
#include "EGGVehicleCustomizationType.generated.h"

UENUM(BlueprintType)
enum class EGGVehicleCustomizationType : uint8 {
    None,
    BodyKit,
    Paint,
    Wheel,
};

