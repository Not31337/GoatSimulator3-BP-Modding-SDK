#pragma once
#include "CoreMinimal.h"
#include "GGIceSplineMesh.h"
#include "GGIceSplineMesh_End.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_SUPERGOATS_API UGGIceSplineMesh_End : public UGGIceSplineMesh {
    GENERATED_BODY()
public:
    UGGIceSplineMesh_End(const FObjectInitializer& ObjectInitializer);

};

