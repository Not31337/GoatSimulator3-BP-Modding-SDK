#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EGGBeeSwarmStateType.h"
#include "GGBeeSwarmFinishedAttack_DelegateDelegate.h"
#include "GGBeeSwarmReturnedToOwner_DelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGBeeHive_Swarm.generated.h"

class AGGBeeHive_Swarm;
class AGGCharacter;
class UAudioComponent;
class UParticleSystemComponent;
class UProjectileMovementComponent;
class USceneComponent;
class USoundBase;
class USphereComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGBeeHive_Swarm : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGBeeSwarmFinishedAttack_Delegate OnAttackFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGBeeSwarmReturnedToOwner_Delegate OnReturnedToOwner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereOfAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SwarmParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* PassiveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* HitParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovement;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttackPlayers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HorizontalAttackImpulseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D VerticalAttackImpulseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalAttackImpulseFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EffectSourceDisableUnRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HiveSoundAttackParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HiveSoundAttackParamLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* HitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EGGBeeSwarmStateType CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_Target, meta=(AllowPrivateAccess=true))
    USceneComponent* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    USceneComponent* OwnerComponentOverride;
    
public:
    AGGBeeHive_Swarm(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AGGBeeHive_Swarm* SpawnSwarmAttachedToOwner(AActor* InOwner, TSubclassOf<AGGBeeHive_Swarm> InClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AGGBeeHive_Swarm* SpawnSwarmAttachedToComponent(USceneComponent* InAttachComponent, TSubclassOf<AGGBeeHive_Swarm> InClass);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAttackTarget_K2(const AGGCharacter* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Target();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastStartAttackingTarget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFollowingOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackingTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttackTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAttackTarget() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FollowOwner();
    
};

