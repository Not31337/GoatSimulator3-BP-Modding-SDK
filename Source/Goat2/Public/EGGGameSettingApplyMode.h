#pragma once
#include "CoreMinimal.h"
#include "EGGGameSettingApplyMode.generated.h"

UENUM(BlueprintType)
enum class EGGGameSettingApplyMode : uint8 {
    Commit,
    Explicit,
    Instant,
};

