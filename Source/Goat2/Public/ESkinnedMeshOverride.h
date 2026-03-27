#pragma once
#include "CoreMinimal.h"
#include "ESkinnedMeshOverride.generated.h"

UENUM(BlueprintType)
enum class ESkinnedMeshOverride : uint8 {
    SMO_NoOverride,
    SMO_NotSkinned,
    SMO_IsSkinned,
};

