#pragma once
#include "CoreMinimal.h"
#include "EMoodChange.generated.h"

UENUM(BlueprintType)
enum class EMoodChange : uint8 {
    MC_None,
    MC_Positive,
    MC_Negative,
    MC_Negative_ScaredBias,
    MC_Negative_AngryBias,
    MC_Amplify,
};

