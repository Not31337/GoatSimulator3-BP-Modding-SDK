#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GGPhysicsProjectile.h"
#include "Templates/SubclassOf.h"
#include "GGLyreProjectile.generated.h"

class AGGLyre;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGLyreProjectile : public AGGPhysicsProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VisibleMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECollisionChannel>> ObjectTypesToSpawnLyreOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxImpactAngleToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignToSurfaceOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGLyre> LyreClass;
    
public:
    AGGLyreProjectile(const FObjectInitializer& ObjectInitializer);

};

