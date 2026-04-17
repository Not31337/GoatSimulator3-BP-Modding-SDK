#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GGRandomPlayerSequenceEntry.h"
#include "EGender.h"
#include "EGrabbedCharacterAnimationType.h"
#include "EHeadTurning.h"
#include "EMoods.h"
#include "ENPCAnimationStates.h"
#include "ENPCMaterialEffect.h"
#include "ENPCMoveMode.h"
#include "ENPCType.h"
#include "EPanicTypes.h"
#include "GGCharacter.h"
#include "HeadTurnState.h"
#include "LookAtOverride.h"
#include "LostObject.h"
#include "MatElement.h"
#include "NPCAttackVariation.h"
#include "NPCCollisionState.h"
#include "NPCGrabbedCharacter.h"
#include "NPCNameIndexes.h"
#include "NPCPropertyCollection.h"
#include "OnNPCAttackedActorsDelegate.h"
#include "OnNPCGrabbedCharacter_DelegateDelegate.h"
#include "OnNPCPlacedAtSpawnerDelegate.h"
#include "OnNPCPooledOrMovedDelegate.h"
#include "RagdollStateChangeSettings.h"
#include "ReactionCooldown.h"
#include "RecentlyGrabbedCharacter.h"
#include "RecentlyStarledBy.h"
#include "StartleDetailsSettings.h"
#include "Templates/SubclassOf.h"
#include "WeightedElement_AnimMontage.h"
#include "WeightedElement_String.h"
#include "GGNPC.generated.h"

class AActor;
class ACharacter;
class AGGAIController;
class AGGNPC;
class AGGNPCSpawner;
class AGGVehicle;
class APhysicsConstraintActor;
class APhysicsVolume;
class UAnimNotifyState_GGBlockTurning;
class UAnimSequenceBase;
class UBehaviorTree;
class UBlendSpaceBase;
class UCapsuleComponent;
class UDataTable;
class UGGNPCMovementComponent;
class UGGVoiceOverComponent;
class ULSCharacterMovementComponent;
class UMaterialInterface;
class UNavArea;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USkeletalMesh;
class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API AGGNPC : public AGGCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* OverlapCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PassedOutParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGVoiceOverComponent* VoiceOverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNPCMovementComponent* NPCMoveComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalNetUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollNetUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceManagerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyInsteadOfRespawnWhenFellOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCType NPCType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefaultClassOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartedAsEnvironmental;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartedAsSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartedAsProfessional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImportantEnvironmental;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImportantAnimal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBehaviorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NPCIdentifierTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentArea;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceManagerRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlacedFromPool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCPooledOrMoved OnNPCPooledOrMoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCPlacedAtSpawner OnNPCPlacedAtSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* SpawnedIntoVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GenderSet, meta=(AllowPrivateAccess=true))
    EGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanChangeMood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMoods> IgnoredMoods;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartledContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecentlyStartledTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecentlyStarledBy> RecentlyStartledBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReactionCooldown> ReactionCooldowns;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanProximityReact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ValidReactTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoredReactTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoredStartleContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInvestigate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentNPCMaterialEffect, meta=(AllowPrivateAccess=true))
    ENPCMaterialEffect CurrentNPCMaterialEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentMeshMaterial, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CurrentMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentStatusEffectMaterials, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> CurrentStatusEffectMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LocalMaterialOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ShellEffectMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_String> TakeDamageNPCReactionWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPanicTypes TakeDamagePanicType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartleDetailsSettings NPCHitStartleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* HitSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsKnockedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPassedOut, meta=(AllowPrivateAccess=true))
    bool bIsPassedOut;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeKnockedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageBeforeKnockedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RagdollWhenKnockedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPassOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPassOutOnRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageBeforePassedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PassedOutChancePerHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReactAfterResilientStumble;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=UpdateNPCMoveSpeed, meta=(AllowPrivateAccess=true))
    ENPCMoveMode CurrentWalkMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UNavArea>> PreferredNavAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPCStandupDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshStationaryCheckValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OtherCharacterVelocityToRagdoll;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NPCVoiceAreas;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HurtWhenRagdollChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NPCNameDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> FeminineFirstNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> MasculineFirstNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> LastNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OrderOfNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventRandomizeNameWhenOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedNameIndexes, meta=(AllowPrivateAccess=true))
    FNPCNameIndexes ReplicatedNameIndexes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> BehaviorWalkCycleOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> BehaviorRunCycleOverrides;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StationaryAnimStartWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StationaryAnimStartWaitDev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* MovementBSOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_AnimMontage> Dances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_AnimMontage> PositiveGreetings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_AnimMontage> NegativeGreetings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_AnimMontage> PositiveImpressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_AnimMontage> NegativeImpressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_AnimMontage> ElectrifiedAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDropAnimationActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGRandomPlayerSequenceEntry> CustomStateAnimSeq;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FHeadTurnState HeadTurnState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimNotifyState_GGBlockTurning*> BlocksTurnAndLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtOverride LookAtOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* PointAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRandomlyLookAtNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToLookAtNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRandomlyLookAtGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToLookAtGoat;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CollisionState, meta=(AllowPrivateAccess=true))
    FNPCCollisionState CollisionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLostObject> LostObjects;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LostObjectForgetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LostObjectForgetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNPCAttackVariation DefaultAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNPCAttackVariation> AttackVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDrawAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCAttackedActors OnNPCAttackedActors;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCGrabbedCharacter_Delegate OnNPCGrabbedCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCGrabbedCharacter_Delegate OnNPCDroppedCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GrabbedCharacter, meta=(AllowPrivateAccess=true))
    FNPCGrabbedCharacter GrabbedCharacter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhysicsConstraintActor* PhysConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhysicsConstraintActor> PhysConstraintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GrabbedCharacterMeshCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecentlyGrabbedCharacter> RecentlyGrabbedCharacters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentAnimState, meta=(AllowPrivateAccess=true))
    ENPCAnimationStates CurrentAnimState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGAIController* GGController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsPooled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NPCSpawner, meta=(AllowPrivateAccess=true))
    AGGNPCSpawner* NPCSpawner;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverlapsAdjustableBySignificance;
    
    AGGNPC(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasRecentlyStartledByContext(FGameplayTag Context, float HowRecently);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasRecentlyStartledByActorAndContext(AActor* Actor, FGameplayTag Context, float HowRecently);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasRecentlyStartledByActor(AActor* Actor, float HowRecently);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasRecentlyStartled(float HowRecently);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNPCMoveSpeed();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDrawDistance();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDebugInfo();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopIdleState();
    
    UFUNCTION(BlueprintCallable)
    void StopCurrentVoiceline();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartInvestigation(FGameplayTag InvestigationType, AActor* Actor, FVector Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartIdleState(bool bResetAnimState, bool bStopMontages);
    
    UFUNCTION(BlueprintCallable)
    void SetReactionOnCooldown(FGameplayTag ReactionTag, float CooldownLength);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomNPCName();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPassedOut(bool bAttemptToRagdoll);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOverlapCapsuleCollision(FGameplayTag CollisionProfile);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNPCWalkMode(ENPCMoveMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetNPCStandupDelayOverride(float StandupDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetNPCPropertyCollection(FNPCPropertyCollection InCollection);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNPCIdentifierTags(FGameplayTagContainer NewTags);
    
    UFUNCTION(BlueprintCallable)
    void SetNPCDrawDistance(float NewDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNPCCollisionProfiles(FGameplayTag CapsuleProfile, FGameplayTag MeshProfile, FGameplayTag OverlapCapsuleProfile);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNPCAnimationState(ENPCAnimationStates NewState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMood(EMoods Mood, bool InjectEvenIfSame, bool BypassCanChange);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLookAtActorOverride(FLookAtOverride OverrideSettings);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGender(EGender NewGender);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomStateAnimSequences(TArray<FGGRandomPlayerSequenceEntry> NewAnimStateSequences);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAvoidanceConsiderationRadius(float NewRadius);
    
    UFUNCTION(BlueprintCallable)
    void ResetVoiceAreas();
    
    UFUNCTION(BlueprintCallable)
    void ResetProximityReact();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetPassedOut();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetOverlapCapsuleCollision(bool bResetToDefault);
    
    UFUNCTION(BlueprintCallable)
    void ResetNPCStandupDelayOverride();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetKnockedOut();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetInvestigation();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetForceMove();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetAvoidanceConsiderationRadius();
    
    UFUNCTION(BlueprintCallable)
    void RemoveVoiceAreas(FGameplayTagContainer AreaTags);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVoiceArea(FGameplayTag AreaTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveNPCIdentifierTags(FGameplayTagContainer RemoveTags);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveNPCIdentifierTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveLostObject(AActor* LostActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool RecentlyGrabbedCharacter(AGGCharacter* Character, float TimeToCheck);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PoolNPC();
    
    UFUNCTION(BlueprintCallable)
    bool PlayVoiceOver(FGameplayTag VoiceOverType, bool Replicate, bool bCanInterruptCurrentLine, bool bCanBeStoppedByDamage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OverlapCompPhysicsVolumeChanged(APhysicsVolume* NewVolume);
    
    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSkeletalMeshSet(USkeletalMesh* OldMesh, USkeletalMesh* NewMesh);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedNameIndexes();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_NPCSpawner();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPassedOut();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GrabbedCharacter();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_GenderSet();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentStatusEffectMaterials();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentNPCMaterialEffect();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentMeshMaterial();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentAnimState();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGrabbedCharacterUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSpawnParticle(UParticleSystem* Particle, FVector_NetQuantize Location, FRotator Rotation, UPrimitiveComponent* AttachToComponent, EAttachLocation::Type AttachLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlaySound(USoundBase* SoundEffect, bool AttachedToNPC);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastMoveFadeIn();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsStartled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSignificant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReactionOnCooldown(FGameplayTag ReactionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNPCPooled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoodIgnored(EMoods Mood) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookAtBBValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHumanoid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeadTurnStateBlocked(EHeadTurning State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCivilian() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimal() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool InIdleState() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool InForceMoveTo() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasRecentlyInteractedWith(AActor* InteractableActor, float CheckValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNPCIdentifierTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasLostObject(AActor* TestAgainst, bool bAlsoCheckArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLookAtOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGrabbedCharacter() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GrabCharacter(AGGCharacter* Character, const FString& ConstraintAttachSocket, const FString& AttachBone, const FString& GrabBone, EGrabbedCharacterAnimationType AnimationType, FRotator AngularRotationOffset, FVector RelativeGoatPosition, FVector RelativeNPCPosition, float PreventUnragdollFor, bool bLockRotation);
    
    UFUNCTION(BlueprintCallable)
    void GrabbedNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void GrabbedCharacterRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceMoodSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetStartledContext() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FGameplayTag GetProximityReactType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNPCStandupDelayOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGNPCSpawner* GetNPCSpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNPCPropertyCollection GetNPCPropertyCollection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGNPCMovementComponent* GetNPCMoveComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENPCAnimationStates GetNPCAnimationState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMoods GetMood();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLookAtActor() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* GetLocalMaterialOverride();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FGameplayTag GetInvestigationType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHeadTurning GetHeadTurnState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNPCGrabbedCharacter GetGrabbedCharacterStruct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGrabbedCharacterAnimationType GetGrabbedCharacterAnimationType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGCharacter* GetGrabbedCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGAIController* GetGGController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGGRandomPlayerSequenceEntry> GetCustomStateAnimSequences() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENPCMoveMode GetCurrentWalkMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentArea() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForgetAllLostObjects();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceMoveTo(FVector TargetLocation, FVector LookAtLocation, float WaitAtTarget, bool bResetAnimState);
    
    UFUNCTION(BlueprintCallable)
    void EmptyCustomStateAnimSequences();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropCharacter(bool bSetMeshProfile);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearNPCIdentifierTags(bool bResetBackToDefaults);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearLookAt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPResetForPoolOrMove(bool ForPool);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPNPCReturnedFromPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_NPCSpawnedIntoTheWorld();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttackedActors(const TArray<AActor*>& NewAttackedActors);
    
    UFUNCTION(BlueprintCallable)
    void AttackAnimationsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimNotifyTriggered(const FGameplayTag& NotifyTag);
    
    UFUNCTION(BlueprintCallable)
    void AddVoiceAreas(FGameplayTagContainer AreaTags);
    
    UFUNCTION(BlueprintCallable)
    void AddVoiceArea(FGameplayTag AreaTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddNPCIdentifierTags(FGameplayTagContainer NewTags);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddNPCIdentifierTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddLostObject(FLostObject LostObject, bool bInsertAtStart);
    
};

