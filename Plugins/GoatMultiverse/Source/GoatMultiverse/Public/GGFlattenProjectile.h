#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGPhysicsProjectile.h"
#include "Templates/SubclassOf.h"
#include "GGFlattenProjectile.generated.h"

class AActor;
class AGGFlattenProjectile;
class AGGStatusEffectFlattened;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGFlattenProjectile : public AGGPhysicsProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGStatusEffectFlattened> FlattenStatusEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsActorLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
public:
    AGGFlattenProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AGGFlattenProjectile* SpawnFlattenProjectile(TSubclassOf<AGGFlattenProjectile> ProjectileClass, const FTransform& SpawnTransform, AActor* Target, AActor* ProjectileOwner);
    
};

