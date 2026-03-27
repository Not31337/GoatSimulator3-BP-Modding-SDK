#pragma once
#include "CoreMinimal.h"
#include "EUpdateNotificationMode.generated.h"

UENUM(BlueprintType)
enum class EUpdateNotificationMode : uint8 {
    None,
    NewPlayers,
    OldPlayers,
    Both,
};

