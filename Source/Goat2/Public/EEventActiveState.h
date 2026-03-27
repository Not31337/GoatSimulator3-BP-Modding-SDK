#pragma once
#include "CoreMinimal.h"
#include "EEventActiveState.generated.h"

UENUM(BlueprintType)
enum class EEventActiveState : uint8 {
    Error,
    NotSynced,
    Inactive,
    Active,
    Finished,
};

