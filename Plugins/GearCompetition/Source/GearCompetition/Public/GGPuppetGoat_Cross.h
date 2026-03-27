#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGPhysicsActor.h"
#include "RagdollStateChangeSettings.h"
#include "OnPuppetCrossAttachedToNPCDelegate.h"
#include "PuppetGoatLimbConstraint.h"
#include "GGPuppetGoat_Cross.generated.h"

class AActor;
class ACharacter;
class AGGGoat;
class AGGNPC;
class UCableComponent;
class ULSCharacterMovementComponent;
class UMaterialInterface;
class UParticleSystem;
class UPhysicsHandleComponent;
class USoundBase;

UCLASS(Blueprintable)
class GEARCOMPETITION_API AGGPuppetGoat_Cross : public AGGPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AttachRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPuppetGoatLimbConstraint> LimbConstraintSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BonesToSimulatePhysicsUnder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NPCAttachToBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AttachParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DestroyParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AttachSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DestroySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableComponentWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CableSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CableMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachedNPC, meta=(AllowPrivateAccess=true))
    AGGNPC* AttachedNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCableComponent*> CableComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsHandleComponent*> ActivePhysicsConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayedDestructionEffects;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* OwnerGoat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPuppetCrossAttachedToNPC OnAttachedToNPC;
    
    AGGPuppetGoat_Cross(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayDestroyEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayAttachEffects();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedNPC();
    
    UFUNCTION(BlueprintCallable)
    void OnNPCRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedNPCPooled(AGGNPC* PooledNPC, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedNPCDestroyed(AActor* DestroyedActor);
    
};

