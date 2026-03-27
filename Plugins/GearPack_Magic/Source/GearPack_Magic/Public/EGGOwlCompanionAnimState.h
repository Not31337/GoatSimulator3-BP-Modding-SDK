#pragma once
#include "CoreMinimal.h"
#include "EGGOwlCompanionAnimState.generated.h"

UENUM(BlueprintType)
enum class EGGOwlCompanionAnimState : uint8 {
    Idle,
    Flying,
    TakeOff,
    Landing,
    Attacking,
};

