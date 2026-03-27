#pragma once
#include "CoreMinimal.h"
#include "EExitReason.generated.h"

UENUM(BlueprintType)
enum class EExitReason : uint8 {
    ER_Default,
    ER_PoolingNPC,
    ER_Teleporting,
};

