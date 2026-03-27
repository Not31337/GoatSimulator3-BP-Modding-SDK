#pragma once
#include "CoreMinimal.h"
#include "ETowerRiseState.generated.h"

UENUM(BlueprintType)
enum class ETowerRiseState : uint8 {
    TRS_None,
    TRS_Rising,
    TRS_RisingDone,
};

