#pragma once
#include "CoreMinimal.h"
#include "ETransitionFadeState.generated.h"

UENUM(BlueprintType)
enum class ETransitionFadeState : uint8 {
    TFS_NoFade,
    TFS_InitialFade,
    TFS_FinalFade,
};

