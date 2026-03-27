#pragma once
#include "CoreMinimal.h"
#include "GGRecastNavMesh.h"
#include "GGRecastNavMesh_Default.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGRecastNavMesh_Default : public AGGRecastNavMesh {
    GENERATED_BODY()
public:
    AGGRecastNavMesh_Default(const FObjectInitializer& ObjectInitializer);

};

