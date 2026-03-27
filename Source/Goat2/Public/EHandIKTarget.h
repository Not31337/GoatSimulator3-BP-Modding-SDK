#pragma once
#include "CoreMinimal.h"
#include "EHandIKTarget.generated.h"

UENUM(BlueprintType)
enum class EHandIKTarget : uint8 {
    IKBone,
    WorldLocation,
    Pocket,
    Hip,
};

