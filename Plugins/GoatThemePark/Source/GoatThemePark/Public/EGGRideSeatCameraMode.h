#pragma once
#include "CoreMinimal.h"
#include "EGGRideSeatCameraMode.generated.h"

UENUM(BlueprintType)
enum class EGGRideSeatCameraMode : uint8 {
    FirstAndThirdPerson,
    FirstPersonOnly,
    ThirdPersonOnly,
};

