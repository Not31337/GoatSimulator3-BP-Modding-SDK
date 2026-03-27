#pragma once
#include "CoreMinimal.h"
#include "EVehicleState.generated.h"

UENUM(BlueprintType)
enum class EVehicleState : uint8 {
    VS_Idle,
    VS_GhostControlled,
    VS_PlayerControlled,
    VS_NPCControlled,
};

