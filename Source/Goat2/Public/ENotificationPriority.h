#pragma once
#include "CoreMinimal.h"
#include "ENotificationPriority.generated.h"

UENUM(BlueprintType)
namespace ENotificationPriority {
    enum Type {
        Purge,
        Blocking,
        Sticky,
        Immediate,
        Prioritize,
        Normal,
        Optional,
        Update,
        Custom,
    };
}

