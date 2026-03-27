#pragma once
#include "CoreMinimal.h"
#include "EValidDrivers.generated.h"

UENUM(BlueprintType)
enum class EValidDrivers : uint8 {
    VD_Ghost,
    VD_Player,
    VD_NPC,
};

