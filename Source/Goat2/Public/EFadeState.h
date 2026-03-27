#pragma once
#include "CoreMinimal.h"
#include "EFadeState.generated.h"

UENUM(BlueprintType)
enum class EFadeState : uint8 {
    FS_None,
    FS_FadingOut,
    FS_FadedOut,
};

