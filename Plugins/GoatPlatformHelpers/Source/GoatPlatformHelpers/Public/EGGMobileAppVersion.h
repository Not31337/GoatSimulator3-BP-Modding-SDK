#pragma once
#include "CoreMinimal.h"
#include "EGGMobileAppVersion.generated.h"

UENUM(BlueprintType)
enum class EGGMobileAppVersion : uint8 {
    Vanilla,
    Multiverse,
    Apocalypse,
    Num,
    Invalid,
};

