#pragma once
#include "CoreMinimal.h"
#include "ERagdollAuthorityState.generated.h"

UENUM(BlueprintType)
enum class ERagdollAuthorityState : uint8 {
    Owner,
    Server,
    Other,
};

