#pragma once
#include "CoreMinimal.h"
#include "EGGGameSettingChangeContext.generated.h"

UENUM(BlueprintType)
enum class EGGGameSettingChangeContext : uint8 {
    ResetToDefault,
    Loaded,
    UserInterface,
    Code,
};

