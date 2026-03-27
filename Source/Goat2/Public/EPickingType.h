#pragma once
#include "CoreMinimal.h"
#include "EPickingType.generated.h"

UENUM(BlueprintType)
enum class EPickingType : uint8 {
    PT_BehaviorContainer,
    PT_WorldInteraction,
};

