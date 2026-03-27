#pragma once
#include "CoreMinimal.h"
#include "ESameSocketAttach.generated.h"

UENUM(BlueprintType)
enum class ESameSocketAttach : uint8 {
    SSA_Nothing,
    SSA_Destroy,
    SSA_Detach,
    SSA_DetachPActorOnly,
};

