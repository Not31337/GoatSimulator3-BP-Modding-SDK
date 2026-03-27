#pragma once
#include "CoreMinimal.h"
#include "ETaskActorScanTypes.generated.h"

UENUM(BlueprintType)
enum class ETaskActorScanTypes : uint8 {
    TAST_None,
    TAST_PaperboyPoint,
    TAST_BurningActor,
    TAST_PhysicsActors,
};

