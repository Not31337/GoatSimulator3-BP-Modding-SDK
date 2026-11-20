#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGEffectSpawnHolder.h"
#include "GGStatusEffectBase.h"
#include "GGStickySurfaceLocation.h"
#include "GGStatusEffectSticky.generated.h"

class AActor;
class AGGGoat;
class AGGPlayerController;
class UMaterialInterface;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicsConstraintComponent;
class UPrimitiveComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGStatusEffectSticky : public AGGStatusEffectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StatusEffectSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GearAbilitySource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSurfaceAngleToStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticlesBecomeSticky;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGEffectSpawnHolder EffectStuckToSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGEffectSpawnHolder EffectRemovedFromSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StickyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StickyMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StickyMeshParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LickDistanceToUnstickFromSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeadbuttCountRequiredToBreakFree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGEffectSpawnHolder EffectHeadbuttedWhileStuckToSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadbuttImpulseWhenStuckToSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* OwnerMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SurfaceLocation, meta=(AllowPrivateAccess=true))
    FGGStickySurfaceLocation SurfaceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* PhysicsConstraintAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StickyMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* StickyMeshParticles;
    
    AGGStatusEffectSticky(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnActorHitSurface(FGGStickySurfaceLocation InSurfaceLocation);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerGoatPressedHeadbuttWhileStuck();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_SurfaceLocation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLocalGoatPressedHeadbutt(AGGPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnActorHitSomething(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayStickToSurfaceVFX(FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayRemoveFromSurfaceVFX(FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayHeadbuttEffectWhileStuck();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastActorLickedFromSurface(AActor* Actor, AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientSetSurfaceLocation(FGGStickySurfaceLocation InSurfaceLocation);
    
};

