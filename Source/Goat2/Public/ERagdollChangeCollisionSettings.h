#pragma once
#include "CoreMinimal.h"
#include "ERagdollChangeCollisionSettings.generated.h"

UENUM(BlueprintType)
enum class ERagdollChangeCollisionSettings : uint8 {
    UseDefaults,
    KeepCurrent,
    UseNewSetting,
};

