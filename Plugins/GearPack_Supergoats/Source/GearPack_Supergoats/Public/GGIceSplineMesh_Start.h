#pragma once
#include "CoreMinimal.h"
#include "GGIceSplineMesh.h"
#include "GGIceSplineMesh_Start.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_SUPERGOATS_API UGGIceSplineMesh_Start : public UGGIceSplineMesh {
    GENERATED_BODY()
public:
    UGGIceSplineMesh_Start(const FObjectInitializer& ObjectInitializer);

};

