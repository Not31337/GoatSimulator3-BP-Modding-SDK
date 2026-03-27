#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GhostParameters.h"
#include "OnGhostPossessingDelegate.h"
#include "OnGhostUnpossessingDelegate.h"
#include "RagdollStateChangeSettings.h"
#include "GGGhost.generated.h"

class ACharacter;
class AGGGoat;
class AGGNPC;
class UAudioComponent;
class ULSCharacterMovementComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicsThrusterComponent;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class USkeletalMeshSocket;
class USoundBase;
class USphereComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGGhost : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGhostPossessing OnGhostPossessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountToPossesNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PossesedNPCTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGhostUnpossessing OnGhostUnpossessing;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrusterRotationRandomizationFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxThrusterRotationChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PossessedSocketLocationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PossessedParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PossessedSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UPhysicsThrusterComponent* NpcPhysicsThruster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* OwnerGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* TargetNPC;
    
public:
    AGGGhost(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetGhostParameters(const FGhostParameters& Params);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerRandomizeThrusterRotation();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetNpcDestroyed(AActor* NPC);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNPCUnRagdolled(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* Character, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopPossessEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartPossessEffects(AGGNPC* NPC);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartHoming(AGGNPC* NPC);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastHideGhost();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAttachThrusterToNpc(USkeletalMeshSocket* Socket);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetGhostParameters(const FGhostParameters& Params);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdjustThrusterRotation(const FRotator& Rotator);
    
};

