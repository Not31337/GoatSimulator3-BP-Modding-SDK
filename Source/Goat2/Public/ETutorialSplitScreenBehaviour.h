#pragma once
#include "CoreMinimal.h"
#include "ETutorialSplitScreenBehaviour.generated.h"

UENUM(BlueprintType)
enum class ETutorialSplitScreenBehaviour : uint8 {
    None,
    OnlyPrimaryPlayer,
    SpawnForPrimaryPlayer,
    SpawnForPrimaryPlayerCompletedByAll,
    CompletedByAll,
};

