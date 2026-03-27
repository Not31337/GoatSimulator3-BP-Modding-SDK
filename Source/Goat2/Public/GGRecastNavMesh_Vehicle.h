#pragma once
#include "CoreMinimal.h"
#include "GGRecastNavMesh.h"
#include "GGRecastNavMesh_Vehicle.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGRecastNavMesh_Vehicle : public AGGRecastNavMesh {
    GENERATED_BODY()
public:
    AGGRecastNavMesh_Vehicle(const FObjectInitializer& ObjectInitializer);

};

