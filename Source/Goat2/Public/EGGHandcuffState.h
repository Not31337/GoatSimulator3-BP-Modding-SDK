#pragma once
#include "CoreMinimal.h"
#include "EGGHandcuffState.generated.h"

UENUM(BlueprintType)
enum class EGGHandcuffState : uint8 {
    Free,
    Hands,
    HandsAndFeet,
};

