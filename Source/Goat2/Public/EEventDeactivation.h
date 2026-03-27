#pragma once
#include "CoreMinimal.h"
#include "EEventDeactivation.generated.h"

UENUM(BlueprintType)
enum class EEventDeactivation : uint8 {
    ED_None,
    ED_DisablePastRelevant,
    ED_RemovePastRelevant,
};

