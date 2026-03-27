#pragma once
#include "CoreMinimal.h"
#include "EStartleVariations.generated.h"

UENUM(BlueprintType)
enum class EStartleVariations : uint8 {
    SV_Light,
    SV_Medium,
    SV_Heavy,
    SV_Random,
    SV_Chased,
    SV_BraceForImpact,
};

