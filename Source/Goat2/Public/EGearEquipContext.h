#pragma once
#include "CoreMinimal.h"
#include "EGearEquipContext.generated.h"

UENUM(BlueprintType)
enum class EGearEquipContext : uint8 {
    Invalid,
    Cheat,
    Preview,
    Cinematic,
    Startup,
    Reward,
    Manual,
    GameplayEffect,
};

