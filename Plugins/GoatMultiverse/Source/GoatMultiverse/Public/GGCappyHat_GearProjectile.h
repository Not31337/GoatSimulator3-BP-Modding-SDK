#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGPhysicsProjectile.h"
#include "GGCappyHat_GearProjectile.generated.h"

class USceneComponent;
class USphereComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGCappyHat_GearProjectile : public AGGPhysicsProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    USceneComponent* GearPart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceFromOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsReturnToOwner, meta=(AllowPrivateAccess=true))
    bool bIsReturningToOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionSphere;
    
public:
    AGGCappyHat_GearProjectile(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsReturnToOwner();
    
};

