#pragma once
#include "CoreMinimal.h"
#include "ELoadingScreenStage.generated.h"

UENUM(BlueprintType)
enum class ELoadingScreenStage : uint8 {
    PreTeleport,
    Teleported,
    LoadingScreenRemoved,
    Canceled,
};

