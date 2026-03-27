#pragma once
#include "CoreMinimal.h"
#include "EEnvContainerData.generated.h"

UENUM(BlueprintType)
enum class EEnvContainerData : uint8 {
    ECD_ActorA,
    ECD_ActorB,
    ECD_ActorArrayA,
    ECD_ActorArrayB,
};

