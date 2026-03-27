#pragma once
#include "CoreMinimal.h"
#include "ELSPhysicsSimulationReplicationType.generated.h"

UENUM(BlueprintType)
enum class ELSPhysicsSimulationReplicationType : uint8 {
    Owner,
    Server,
    OverridePlayer,
};

