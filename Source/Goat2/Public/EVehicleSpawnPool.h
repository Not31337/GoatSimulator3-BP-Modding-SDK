#pragma once
#include "CoreMinimal.h"
#include "EVehicleSpawnPool.generated.h"

UENUM(BlueprintType)
enum class EVehicleSpawnPool : uint8 {
    VSP_Both,
    VSP_Driven,
    VSP_Parked,
};

