#pragma once
#include "CoreMinimal.h"
#include "EGGHoverBehaviour.generated.h"

UENUM(BlueprintType)
enum class EGGHoverBehaviour : uint8 {
    OnlyWhenDriving,
    WhenPlayerIsNearby,
    Always,
};

