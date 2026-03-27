#pragma once
#include "CoreMinimal.h"
#include "EInAreaState.generated.h"

UENUM(BlueprintType)
enum class EInAreaState : uint8 {
    IAS_NotInArea,
    IAS_TravelingTo,
    IAS_Inside,
    IAS_TravelingFrom,
};

