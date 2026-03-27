#pragma once
#include "CoreMinimal.h"
#include "EAnimationType.generated.h"

UENUM(BlueprintType)
enum class EAnimationType : uint8 {
    AT_Default,
    AT_BlackboardKey,
    AT_NPCMontages,
};

