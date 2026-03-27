#pragma once
#include "CoreMinimal.h"
#include "EActorSpawnType.generated.h"

UENUM(BlueprintType)
enum class EActorSpawnType : uint8 {
    AST_Default,
    AST_DuringAnimation,
};

