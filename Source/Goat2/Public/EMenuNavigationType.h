#pragma once
#include "CoreMinimal.h"
#include "EMenuNavigationType.generated.h"

UENUM(BlueprintType)
enum class EMenuNavigationType : uint8 {
    None,
    Enter,
    Return,
    Default,
    Exit,
};

