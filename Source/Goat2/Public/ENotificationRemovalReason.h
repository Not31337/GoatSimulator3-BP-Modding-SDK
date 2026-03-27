#pragma once
#include "CoreMinimal.h"
#include "ENotificationRemovalReason.generated.h"

UENUM(BlueprintType)
enum class ENotificationRemovalReason : uint8 {
    Unspecified,
    Duration,
    Self,
    Replaced,
    Forced,
};

