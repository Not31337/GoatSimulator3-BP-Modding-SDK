#pragma once
#include "CoreMinimal.h"
#include "EUniqueOverlapType.generated.h"

UENUM(BlueprintType)
enum class EUniqueOverlapType : uint8 {
    Actor,
    Component,
};

