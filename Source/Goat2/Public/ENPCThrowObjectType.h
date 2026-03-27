#pragma once
#include "CoreMinimal.h"
#include "ENPCThrowObjectType.generated.h"

UENUM(BlueprintType)
enum class ENPCThrowObjectType : uint8 {
    NTOT_PhysicsActor,
    NTOT_PhysicsProjectile,
};

