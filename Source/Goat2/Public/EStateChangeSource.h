#pragma once
#include "CoreMinimal.h"
#include "EStateChangeSource.generated.h"

UENUM(BlueprintType)
enum class EStateChangeSource : uint8 {
    SCS_Default,
    SCS_SaveFile,
};

