#pragma once
#include "CoreMinimal.h"
#include "EBoatMovementMode.generated.h"

UENUM(BlueprintType)
enum class EBoatMovementMode : uint8 {
    BMM_None,
    BMM_Motorboat,
    BMM_Sailboat,
    BMM_Rowboat,
};

