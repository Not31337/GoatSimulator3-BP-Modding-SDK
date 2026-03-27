#pragma once
#include "CoreMinimal.h"
#include "EGGProjectileHitResponse.generated.h"

UENUM(BlueprintType)
enum class EGGProjectileHitResponse : uint8 {
    StickToTarget,
    BecomePhysicsActor,
    Destroy,
};

