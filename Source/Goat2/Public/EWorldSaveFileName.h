#pragma once
#include "CoreMinimal.h"
#include "EWorldSaveFileName.generated.h"

UENUM(BlueprintType)
enum class EWorldSaveFileName : uint8 {
    Invalid,
    Map_Island_01,
    MV,
    AP,
};

