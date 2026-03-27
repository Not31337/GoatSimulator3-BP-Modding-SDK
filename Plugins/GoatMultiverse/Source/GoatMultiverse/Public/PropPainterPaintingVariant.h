#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PropPainterPaintingVariant.generated.h"

class AGGPhysicsActor_Base;
class UStaticMesh;

USTRUCT(BlueprintType)
struct GOATMULTIVERSE_API FPropPainterPaintingVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> WallMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator WallMeshRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGPhysicsActor_Base> PoppedPaintingClass;
    
    FPropPainterPaintingVariant();
};

