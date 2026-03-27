#pragma once
#include "CoreMinimal.h"
#include "EActorScanTypes.generated.h"

UENUM(BlueprintType)
enum class EActorScanTypes : uint8 {
    AST_None,
    AST_PaperboyPoint,
    AST_BurningActor,
    AST_PhysicsActors,
};

