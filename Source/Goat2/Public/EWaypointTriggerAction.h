#pragma once
#include "CoreMinimal.h"
#include "EWaypointTriggerAction.generated.h"

UENUM()
enum class EWaypointTriggerAction : int32 {
    None,
    Jump,
    Headbutt,
    Lick,
    UseAbility,
};

