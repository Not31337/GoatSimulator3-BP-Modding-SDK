#pragma once
#include "CoreMinimal.h"
#include "ENotifyNPCMode.generated.h"

UENUM(BlueprintType)
enum class ENotifyNPCMode : uint8 {
    NNM_SingleNotify,
    NNM_ProximityNotify,
    NNM_SingleStartle,
    NNM_ProximityStartle,
};

