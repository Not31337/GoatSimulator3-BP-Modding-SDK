#pragma once
#include "CoreMinimal.h"
#include "ECanStandUpBelowVehicle.generated.h"

UENUM(BlueprintType)
enum class ECanStandUpBelowVehicle : uint8 {
    Yes,
    No,
    ClosestValidLocation,
};

