#pragma once
#include "CoreMinimal.h"
#include "EGGCameraArmLengthMode.generated.h"

UENUM(BlueprintType)
enum EGGCameraArmLengthMode {
    Unchanged,
    ClampMax,
    SetLength,
};

