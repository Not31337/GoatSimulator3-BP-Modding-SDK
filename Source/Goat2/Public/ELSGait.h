#pragma once
#include "CoreMinimal.h"
#include "ELSGait.generated.h"

UENUM(BlueprintType)
enum class ELSGait : uint8 {
    Walking,
    Running,
    Sprinting,
};

