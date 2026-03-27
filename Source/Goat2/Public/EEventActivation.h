#pragma once
#include "CoreMinimal.h"
#include "EEventActivation.generated.h"

UENUM(BlueprintType)
enum class EEventActivation : uint8 {
    EA_AtStart,
    EA_EventTriggered,
    EA_PlayerProximity,
};

