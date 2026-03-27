#pragma once
#include "CoreMinimal.h"
#include "EStatusShapes.generated.h"

UENUM(BlueprintType)
enum class EStatusShapes : uint8 {
    SS_Sphere,
    SS_Box,
    SS_Capsule,
};

