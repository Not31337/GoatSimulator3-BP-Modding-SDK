#pragma once
#include "CoreMinimal.h"
#include "EBlendspaceOverride.generated.h"

UENUM(BlueprintType)
enum class EBlendspaceOverride : uint8 {
    BO_None,
    BO_Panic,
    BO_Disgusted,
    BO_StolenVehicle,
};

