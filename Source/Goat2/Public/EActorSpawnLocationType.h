#pragma once
#include "CoreMinimal.h"
#include "EActorSpawnLocationType.generated.h"

UENUM(BlueprintType)
enum class EActorSpawnLocationType : uint8 {
    ASLT_AtLocation,
    ASLT_AtBBLocation,
    ASLT_Infront,
    ASLT_InfrontOnGround,
    ASLT_OnSocket,
    ASLT_Attached,
};

