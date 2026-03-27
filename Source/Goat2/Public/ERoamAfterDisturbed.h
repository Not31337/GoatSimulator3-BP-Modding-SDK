#pragma once
#include "CoreMinimal.h"
#include "ERoamAfterDisturbed.generated.h"

UENUM(BlueprintType)
enum class ERoamAfterDisturbed : uint8 {
    RAD_Ragdolling,
    RAD_ProximityReact,
    RAD_ExtremeMood,
    RAD_Panic,
    RAD_NPCEvent,
    RAD_ForceMove,
    RAD_Stumble,
};

