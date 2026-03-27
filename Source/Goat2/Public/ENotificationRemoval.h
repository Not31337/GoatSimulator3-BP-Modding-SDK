#pragma once
#include "CoreMinimal.h"
#include "ENotificationRemoval.generated.h"

UENUM(BlueprintType)
namespace ENotificationRemoval {
    enum Type {
        Permanent,
        Extendable,
        Duration,
        Timestamp,
        Queue,
        Custom,
    };
}

