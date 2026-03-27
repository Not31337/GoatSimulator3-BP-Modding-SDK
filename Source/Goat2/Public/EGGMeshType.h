#pragma once
#include "CoreMinimal.h"
#include "EGGMeshType.generated.h"

UENUM(BlueprintType)
enum class EGGMeshType : uint8 {
    Hide,
    Road,
    Building,
    Water,
    Crystal,
    Landmark,
    Environment,
    Custom,
};

