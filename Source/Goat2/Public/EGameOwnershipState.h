#pragma once
#include "CoreMinimal.h"
#include "EGameOwnershipState.generated.h"

UENUM(BlueprintType)
enum EGameOwnershipState {
    GOS_NotQueried,
    GOS_BeingQueried,
    GOS_Owned,
    GOS_NotOwned,
};

