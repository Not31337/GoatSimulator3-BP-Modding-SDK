#pragma once
#include "CoreMinimal.h"
#include "ECallMode.generated.h"

UENUM(BlueprintType)
enum class ECallMode : uint8 {
    Queue,
    Skip,
    ForceQueue,
};

