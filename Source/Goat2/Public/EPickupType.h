#pragma once
#include "CoreMinimal.h"
#include "EPickupType.generated.h"

UENUM(BlueprintType)
enum class EPickupType : uint8 {
    PT_EnvBehaviorContainer,
    PT_ExistingPActor,
};

