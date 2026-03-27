#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EGGDamageWhileFreezeReaction.h"
#include "GGCachedMeshMaterial.h"
#include "OnUnfrozenDelegate.h"
#include "RagdollStateChangeSettings.h"
#include "Templates/SubclassOf.h"
#include "GGFreezeComponent.generated.h"

class AActor;
class ACharacter;
class AController;
class AGGCharacter;
class AGGNPC;
class AGGPlayerController;
class UDamageType;
class UGGFreezeComponent;
class ULSCharacterMovementComponent;
class UMaterialInterface;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGFreezeComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreezeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FreezeDurationSourceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRagdollOnFreeze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FreezeParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* FreezeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectsAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumHeadbuttToSelfBrakeFree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPlayerToBrakeFreeWhileTempFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BrakeFreeAttemptParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BrakeFreeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGDamageWhileFreezeReaction DamageWhileFreezeReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageThresholdForReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccumulateDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExplodeParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* UnFreezeParticles;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnfrozen OnUnfrozen;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwnerFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* NPCOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGCachedMeshMaterial> CachedMeshMaterials;
    
public:
    UGGFreezeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void TryToUnFreezeActor(const AActor* InActor);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UGGFreezeComponent* TryToFreezeActorForDuration_K2(AActor* InActor, float Duration, TSubclassOf<UGGFreezeComponent> FreezeComponentClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UGGFreezeComponent* TryToFreezeActor_K2(AActor* InActor, TSubclassOf<UGGFreezeComponent> FreezeComponentClass);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerPlayBrakeFreeAttemptVFX();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnPlayerHeadbutt();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHeadbutt(AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedNPCUnRagdolled(bool bIsRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedNPCPooled(AGGNPC* NPC, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedCharacterRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayBrakeFreeAttemptVFX();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorFrozen(const AActor* TargetActor);
    
};

