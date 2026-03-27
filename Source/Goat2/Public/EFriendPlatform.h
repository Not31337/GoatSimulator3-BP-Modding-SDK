#pragma once
#include "CoreMinimal.h"
#include "EFriendPlatform.generated.h"

UENUM(BlueprintType)
enum class EFriendPlatform : uint8 {
    FP_Steam,
    FP_Epic,
    FP_Others,
};

