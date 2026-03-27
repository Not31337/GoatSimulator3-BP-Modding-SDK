#pragma once
#include "CoreMinimal.h"
#include "EGGSubtitlesEnabled.generated.h"

UENUM(BlueprintType)
enum class EGGSubtitlesEnabled : uint8 {
    Off,
    Dialogue,
    ClosedCaptions,
};

