#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AttachedActor.h"
#include "EApplicationMethod.h"
#include "EExitReason.h"
#include "EPhysAnimProfiles.h"
#include "ESameSocketAttach.h"
#include "EStatusEffectTypes.h"
#include "ETypeOfDamage.h"
#include "EValidDrivers.h"
#include "EffectSourcesPair.h"
#include "ForceReleaseCatchedActor_SignatureDelegate.h"
#include "GGActorName.h"
#include "GGCatchableInterface.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGLatestInstigatorInterface.h"
#include "GGLickableActorInterface.h"
#include "GGNamedActorInterface.h"
#include "GGStatusEffectInterface.h"
#include "GGWaterInterface.h"
#include "LatestInstigator.h"
#include "MatElement.h"
#include "MountedOnCharacter.h"
#include "OnActorCatched_SignatureDelegate.h"
#include "OnActorLickDroppedDelegate.h"
#include "OnActorLickedDelegate.h"
#include "OnActorPreScaled_SignatureDelegate.h"
#include "OnActorReleased_SignatureDelegate.h"
#include "OnAnimNotifyTriggeredDelegate.h"
#include "OnBeingMountedDelegate.h"
#include "OnCharacterBounced_DelegateDelegate.h"
#include "OnCharacterEnteringVehicleDelegate.h"
#include "OnCharacterExitedVehicleDelegate.h"
#include "OnCharacterGrabbed_DelegateDelegate.h"
#include "OnCharacterHasJumpedDelegate.h"
#include "OnCharacterRagdollChangedDelegate.h"
#include "OnCharacterRespawnedDelegate.h"
#include "OnCharacterStartEnteringVehicleDelegate.h"
#include "OnCollisionStateUpdateDelegate.h"
#include "OnEffectSourceChangedDelegate.h"
#include "OnHijackVehicleDelegate.h"
#include "OnObjectHeadbuttedDelegate.h"
#include "OnSaddleRiding_DelegateDelegate.h"
#include "OnTeleportedDelegate.h"
#include "RagdollStateChangeSettings.h"
#include "Templates/SubclassOf.h"
#include "GGCharacter.generated.h"

class AActor;
class AGGCharacter;
class AGGGoat;
class AGGStatusEffectBase;
class AGGVehicle;
class APawn;
class APhysicsVolume;
class UAnimMontage;
class UCapsuleComponent;
class UDataTable;
class UGGCharacterPushComponent;
class UGGStatusEffectManager;
class UGGStiffBonesComponent;
class UGGWaterFloatingComponent;
class ULSCharacterMovementComponent;
class UMaterialInterface;
class UMeshComponent;
class UObject;
class UParticleSystem;
class UPhysicalAnimationComponent;
class UPhysicalMaterial;
class UPrimitiveComponent;
class USceneComponent;
class USoundBase;

UCLASS(Blueprintable, Config=Engine)
class GOAT2_API AGGCharacter : public ACharacter, public IGGStatusEffectInterface, public IGGWaterInterface, public IGGLickableActorInterface, public IGGNamedActorInterface, public IGGHeadbuttableObjectInterface, public IGGLatestInstigatorInterface, public IGGCatchableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCharacterPushComponent* CharacterPushComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGStiffBonesComponent* StiffBonesComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicalAnimationComponent* PhysicalAnimationComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGWaterFloatingComponent* FloatingComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator InitialRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeHeadbutted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanRespawn;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterRespawned OnCharacterRespawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterHasJumped OnCharacterHasJumped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBounced_Delegate OnCharacterBounced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticMeshRagdollImpactDelay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleported OnTeleported;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mobile_RateOptimizationSignifanceRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mobile_RateOptimizationCheckRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentMeshGravity, meta=(AllowPrivateAccess=true))
    bool bCurrentMeshGravity;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDestructibleBreakVel;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterRagdollChanged OnCharacterRagdollChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsMoreResilient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResilientHealthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CurrentResilientHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETypeOfDamage> NotResilientToDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreGoatTackleDamageWhenResilient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableStumbleFromGoatWhenResilient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePushFromGoatWhenResilient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCannotBeLickedWhileResilient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStumbleWhenResilient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StumbleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ResilientImpactParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ResilientImpactSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MountedOnCharacter, meta=(AllowPrivateAccess=true))
    FMountedOnCharacter MountedOnCharacter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPhysicalAnimateRiding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicalAnimationData RidingPhysAnimSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RidingPhysAnimBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RidingSitSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RidingMeshRelativeLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaddleRiding_Delegate OnStartSaddleRiding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaddleRiding_Delegate OnStopSaddleRiding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeingMounted OnStartBeingMounted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeingMounted OnStopBeingMounted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLatestInstigator LatestInstigator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClientTranslationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ClientRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttachedActor> CharacterAttachedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AActor*> GrabbedBy;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLickBoneVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterGrabbed_Delegate OnCharacterGrabbed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterGrabbed_Delegate OnCharacterDropped;
    
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_DesiredColorMaterialIndex, meta=(AllowPrivateAccess=true))
    int8 DesiredColorMaterialIndex;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ShockMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BurnMaterial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsElectrified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* AttachedToActorExterior;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentVehicle, meta=(AllowPrivateAccess=true))
    AGGVehicle* CurrentVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EValidDrivers DriverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeMeshLocationAsDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshLocationAsDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeMeshLocationAsPassenger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshLocationAsPassenger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterStartEnteringVehicle OnCharacterStartEnteringVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterEnteringVehicle OnCharacterEnteringVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterExitedVehicle OnCharacterExitedVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHijackVehicle OnHijackVehicle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanInteract;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimNotifyTriggered OnAnimNotifyTriggered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize HeadBoneScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftFootBoneScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightFootBoneScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftHandBoneScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightHandBoneScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPerceivable, meta=(AllowPrivateAccess=true))
    bool IsPerceivable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvokerActive;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBecomeNavInvoker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TileGenerationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TileRemovalRadius;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCollisionStateUpdate OnCollisionStateUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEffectSourceChanged OnEffectSourceChangedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedEffectSources, meta=(AllowPrivateAccess=true))
    TArray<FEffectSourcesPair> ReplicatedEffectSources;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGStatusEffectManager* StatusEffectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGGActorName CurrentActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NameModifierTable;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorLicked OnActorLicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorLickDropped OnActorLickDropped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectHeadbutted OnObjectHeadbutted;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorPreScaled_Signature OnCharacterPreScaled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorCatched_Signature OnCharacterCatched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorReleased_Signature OnCharacterReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForceReleaseCatchedActor_Signature ForceReleaseCatchedActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* OurCatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCharacterCanBeLicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TickEnabled, meta=(AllowPrivateAccess=true))
    bool CurrentTickEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditPelvisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdatePhysMat, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* CurrentOverridePhysMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeshScale, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 MeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* OriginalOverridePhysMat;
    
public:
    AGGCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void TeleportRagdoll(FVector NewLocation, bool bReplicate);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopPhysAnimatingBelow(FName BodyName, bool IncludeSelf);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    void StartPhysAnimatingBelowSettings(FName BodyName, const FPhysicalAnimationData& Settings, bool IncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void StartPhysAnimatingBelow(FName BodyName, EPhysAnimProfiles Profile, bool IncludeSelf, bool ClearNotFound);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetStandupEnabled(bool NewEnabled);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRightHandScale(FVector InScale);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRightFootScale(FVector InScale);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SetRagdollBlueprint(bool NewRagdoll, UPARAM(Ref) FRagdollStateChangeSettings& RagdollStateChangeSettings);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPhysMatOverride(UPhysicalMaterial* NewOverride);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMultipleMaterial(TArray<FMatElement> MatElements);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMeshScale(FVector NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshCollision(FGameplayTag CollisionProfile);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialLocally(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLeftHandScale(FVector InScale);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLeftFootScale(FVector InScale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLatestInstigator(APawn* InInstigator, FGameplayTag Interaction, float ClearAfter, bool bUnragdollReset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsResilient(bool bBeResilient);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsPerceivable(bool NewPerceivable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsElectrified(bool IsElectrified);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttachedToActorExterior(AActor* AttachedTo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInvokerActive(bool bNewActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHeadScale(FVector InScale);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGravityScale(float GravityScale);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDesiredColorMaterialIndex(int32 DesiredIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentVehicle(AGGVehicle* NewVehicle);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionProfiles(FGameplayTag CapsuleProfile, FGameplayTag MeshProfile);
    
    UFUNCTION(BlueprintCallable)
    void SetClientMeshTranslationOffsetModifier(const FVector& Offset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCharacterTick(bool Enabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCharacterCanBeLicked(bool NewCanBeLicked);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleCollision(FGameplayTag CollisionProfile);
    
    UFUNCTION(BlueprintCallable)
    void SetCanToggleRagdoll(bool bCanToggle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCanRespawn(bool NewCanRespawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCanInteract(bool NewCanInteract);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAvoidanceActive(bool bNewActive);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLaunchGGCharacter(FVector LaunchVelocity, bool XYOverride, bool ZOverride);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExitVehicle(EExitReason ExitReason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDetachFromActorExterior();
    
public:
    UFUNCTION(BlueprintCallable)
    void Respawn(bool BypassCheck);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetVelocity();
    
    UFUNCTION(BlueprintCallable)
    void ResetToCurrentState();
    
    UFUNCTION(BlueprintCallable)
    void ResetPhysicalAnimationProfiles(bool StopSimulation);
    
    UFUNCTION(BlueprintCallable)
    void ResetMeshCollision(bool bResetToDefault);
    
    UFUNCTION(BlueprintCallable)
    void ResetMaterialLocally();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetMaterial();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetDesiredColorMaterialIndex();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetCapsuleCollision(bool bResetToDefault);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllCollision(bool bResetToDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveStatusEffect(EStatusEffectTypes TypeToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveGrabbedByActor(AActor* GrabbedByActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEffectSources(FGameplayTag SourceTag, FGameplayTagContainer EffectTags);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEffectSource(FGameplayTag SourceTag, FGameplayTag EffectTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAllEffectSources();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllEffectsFromSource(FGameplayTag SourceTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PrepareForLick();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayMontage(UAnimMontage* AnimMontage, float InPlayRate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUnRagdoll(bool bIsOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdatePhysMat();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TickEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedEffectSources();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MountedOnCharacter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeshScale();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPerceivable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DesiredColorMaterialIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentVehicle(AGGVehicle* PreviousVehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentMeshGravity();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CollisionState();
    
    UFUNCTION(BlueprintCallable)
    void OnRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnHitMesh(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachmentStateChanged(USceneComponent* Component);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObjectWasHeadbutted(AGGGoat* HeadbuttingGoat);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastStopMontage(UAnimMontage* AnimMontage);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayResilientImpactEffects(FVector_NetQuantize DamageLocation);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayMontage(UAnimMontage* AnimMontage, float InPlayRate);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnEffectSourceChanged(FGameplayTag EffectTag, bool IsAdded);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastExitVehicle(AGGVehicle* Vehicle, FVector Location, bool bWasDriver, bool bEjectingWithForce, bool bScaleWithVehicle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MeshPhysicsVolumeChanged(APhysicsVolume* NewVolume);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MatShockCharacter(float Duration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MatBurnCharacter(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void LaunchGGCharacter(FVector LaunchVelocity, bool XYOverride, bool ZOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSimulatingPhysics() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRiding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResilientToDamageType(ETypeOfDamage DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRagdoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassengerInVehicleIsh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassenger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvokerActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrabbedByNPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrabbedByGoat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrabbedByActor(AActor* CheckActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDriverInVehicleIsh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingRidden();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttachedToActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InWater();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InVehicleOrSimilar(bool bIncludeControllableObjects) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasStatusEffectByType(EStatusEffectTypes TypeToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasStatusEffectByClass(TSubclassOf<AGGStatusEffectBase> StatusEffectClass);
    
    UFUNCTION(BlueprintCallable)
    bool HasLocalMaterialOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEffectSourceWithTag(FGameplayTag SourceTag, FGameplayTag EffectTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEffectSourceWithoutTags(const FGameplayTagContainer& ExcludeSourceTags, FGameplayTag EffectTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEffectSource(FGameplayTag EffectTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UGGStatusEffectManager* GetStatusEffectManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRightHandBoneScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRightFootBoneScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicalMaterial* GetPhysMatOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APhysicsVolume* GetPhysicsVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGCharacter* GetMountedOnCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCapsuleComponent* GetMainOverlapComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLickInfo(FVector LickLocation, FName& BoneName, FRotator& MeshLickRotation, FVector& RelativeLickLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMeshComponent* GetLickableActorMeshComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLeftHandBoneScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLeftFootBoneScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FLatestInstigator GetLatestInstigatorStruct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    APawn* GetLatestInstigator(FGameplayTag& OutInteractionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPerceivable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHeadBoneScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetGrabbedByActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDesiredColorMaterialIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetCurrentVehicleIsh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetClientMeshLocModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterCanBeLicked() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceCharacterToBeDropped();
    
    UFUNCTION(BlueprintCallable)
    void ExitVehicle(EExitReason ExitReason);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnterVehicleAsPassenger(AGGVehicle* Vehicle, TArray<int32> AttemptToEnterSlots, bool bBlendCamera);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnterVehicle(AGGVehicle* Vehicle, bool bBlendCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EffectSourceChanged(FGameplayTag EffectTag, bool IsAdded);
    
    UFUNCTION(BlueprintCallable)
    void DisableAllCollision();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DetachAllActorsFromMesh(bool DestroyActors, bool TurnOnCollision, bool bDetachFromRagdoll);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DetachActorFromMesh(AActor* ActorToDetach, bool DestroyActor, bool TurnOnCollision, bool bForceCannotBecomeLostObject, bool bRemoveInvalidActors);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ClearStatusEffects();
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentEffectMaterials();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRespawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRagdoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInteract() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeLicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeHeadbutted(AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* AttachClassToMesh_BP(TSubclassOf<AActor> ActorClass, FName SocketName, bool DropOnRagdoll, bool TakeDamage, FVector RelativeLocation, FRotator RelativeRotation, FVector ActorScale, UObject* MeshOverride, bool bCanBecomeLostObject, bool bCanDropOnStartle, ESameSocketAttach SameSocketAttachAction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* AttachActorToMesh_BP(AActor* ActorToAttach, FName SocketName, bool DropOnRagdoll, bool TakeDamage, FVector RelativeLocation, FRotator RelativeRotation, FVector ActorScale, bool bCanBecomeLostObject, bool bCanDropOnStartle, ESameSocketAttach SameSocketAttachAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AGGStatusEffectBase* ApplyStatusEffect(EStatusEffectTypes TypeToApply, EApplicationMethod ApplicationMethod, AActor* SpreadFrom, TSubclassOf<AGGStatusEffectBase> StatusEffectClass, AGGStatusEffectBase* SpreadFromStatus);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddToGeneralSpeedMulti(float Value);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddGrabbedByActor(AActor* GrabbedByActor);
    
    UFUNCTION(BlueprintCallable)
    void AddEffectSources(FGameplayTag SourceTag, FGameplayTagContainer EffectTags);
    
    UFUNCTION(BlueprintCallable)
    void AddEffectSource(FGameplayTag SourceTag, FGameplayTag EffectTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorWasLicked(AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorStoppedBeingLicked(AGGGoat* LickingGoat);
    

    // Fix for true pure virtual functions not being implemented
};

