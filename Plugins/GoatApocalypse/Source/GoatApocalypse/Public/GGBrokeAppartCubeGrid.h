#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGBrokeAppartCubeGrid.generated.h"

class AGGPhysicsActor_CompactedCube;

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGBrokeAppartCubeGrid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor_CompactedCube* ParentCube;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Index;
    
    FGGBrokeAppartCubeGrid();
};

