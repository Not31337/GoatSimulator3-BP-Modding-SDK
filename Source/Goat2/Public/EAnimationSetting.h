#pragma once
#include "CoreMinimal.h"
#include "EAnimationSetting.generated.h"

UENUM(BlueprintType)
enum class EAnimationSetting : uint8 {
    AS_NoAnimation,
    AS_Montage,
    AS_AnimationSequences,
    AS_MontageArray,
};

