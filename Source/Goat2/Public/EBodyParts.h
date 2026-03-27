#pragma once
#include "CoreMinimal.h"
#include "EBodyParts.generated.h"

UENUM(BlueprintType)
enum class EBodyParts : uint8 {
    BP_Head,
    BP_Hair,
    BP_UpperBody,
    BP_LowerBody,
};

