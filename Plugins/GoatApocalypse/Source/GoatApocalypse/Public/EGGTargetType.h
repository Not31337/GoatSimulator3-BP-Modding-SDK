#pragma once
#include "CoreMinimal.h"
#include "EGGTargetType.generated.h"

UENUM(BlueprintType)
enum class EGGTargetType : uint8 {
    None,
    PActor,
    Vehicle,
    Character,
};

