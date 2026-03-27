#pragma once
#include "CoreMinimal.h"
#include "EGGSplineMeshSpawnMode.generated.h"

UENUM(BlueprintType)
enum class EGGSplineMeshSpawnMode : uint8 {
    OneMeshBetweenSplinePoints,
    GivenNumberOfMeshesAlongSpline,
};

