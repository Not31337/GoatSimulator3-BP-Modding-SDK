#pragma once
#include "CoreMinimal.h"
#include "EGGRaceTrackCheckpointAlignment.generated.h"

UENUM(BlueprintType)
enum class EGGRaceTrackCheckpointAlignment : uint8 {
    None,
    CenterHit,
    CenterAndSides,
};

