#pragma once
#include "CoreMinimal.h"
#include "EMegaRiftState.generated.h"

UENUM(BlueprintType)
enum class EMegaRiftState : uint8 {
    MRS_Hidden,
    MRS_Active,
    MRS_Completed,
};

