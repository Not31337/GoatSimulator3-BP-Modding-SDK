#pragma once
#include "CoreMinimal.h"
#include "ENotificationDurationType.generated.h"

UENUM(BlueprintType)
namespace ENotificationDurationType {
    enum Type {
        Duration,
        StartAnimation,
        EndAnimation,
        StartAndDuration,
        EndAndDuration,
        StartAndEnd,
        Total,
        Custom,
    };
}

