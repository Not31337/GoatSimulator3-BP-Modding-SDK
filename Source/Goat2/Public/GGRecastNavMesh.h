#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "GGRecastNavMesh.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGRecastNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AGGRecastNavMesh(const FObjectInitializer& ObjectInitializer);

};

