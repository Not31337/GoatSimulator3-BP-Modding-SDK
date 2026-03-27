#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "DelayedSpreadActorEffect.h"
#include "EApplicationMethod.h"
#include "EMoods.h"
#include "EStatusEffectTypes.h"
#include "OnOtherSpreadToComponentDelegate.h"
#include "OnStatusSourceActivatedDelegate.h"
#include "OnStatusSourceActiveChangeDelegate.h"
#include "OnStatusSourceDeactivatedDelegate.h"
#include "RecentActor.h"
#include "SourceActiveState.h"
#include "Templates/SubclassOf.h"
#include "GGStatusEffectSourceComponent.generated.h"

class AActor;
class AController;
class AGGStatusEffectBase;
class APhysicsVolume;
class UAudioComponent;
class UDamageType;
class UGGStatusEffectSourceComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGStatusEffectSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParticleComponentMaxCullDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatusSourceActivated OnStatusSourceActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatusSourceDeactivated OnStatusSourceDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatusSourceActiveChange OnStatusSourceActiveChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOtherSpreadToComponent OnOtherSpreadToComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateFromContactWithStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectTypes TypeToActivateFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanActivateFromOtherSourceComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateFromWaterVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateFromDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeactivateWithTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeactivateAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SourceActiveState, meta=(AllowPrivateAccess=true))
    FSourceActiveState SourceActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpreadOnOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpreadOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateOverlapsInReCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectTypes StatusEffectToSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGStatusEffectBase> StatusEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveSpreadTypeFromOwnerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContinuallyRecheckOverlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorSpreadCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecentActor> RecentlySpreadToActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSizzleInsteadOfInstantSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizzlingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SizzleParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizzlingParticleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SizzleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SizzlingActors, meta=(AllowPrivateAccess=true))
    TArray<FRecentActor> SizzlingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDelayedSpreadActorEffect> SizzlingActorEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyNPCsInstead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMoods> SkipMoods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NotifyReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> OverlapComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> HitComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> ParticleComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> AudioComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> RegisteredOverlapComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> RegisteredHitComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> RegisteredParticleComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> RegisteredAudioComponents;
    
public:
    UGGStatusEffectSourceComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnregisterParticleComponent(UParticleSystemComponent* ParticleComponent);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterComponentForOverlap(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterComponentForHit(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterAudioComponent(UAudioComponent* AudioComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StatusWasSpread(AActor* SpreadTo, EApplicationMethod ApplicationMethod, bool SpreadToSource);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpreadStatusEffect(AActor* SpreadTo, EApplicationMethod ApplicationMethod, UPrimitiveComponent* SpreadToComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SourceDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SourceActivated(AActor* Activator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetUpdateOverlapsInReCheck(bool bShouldUpdate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStatusEffectToSpread(EStatusEffectTypes Type, TSubclassOf<AGGStatusEffectBase> Class);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStartActive(bool bShouldStartActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSpreadOnOverlap(bool bShouldSpread);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSpreadOnHit(bool bShouldSpread);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDeactivateWithTime(bool bShouldDeactivate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCanActivateFromOtherSourceComp(bool bActivateFromOtherSourceComp);
    
    UFUNCTION(BlueprintCallable)
    void RegisterParticleComponent(UParticleSystemComponent* ParticleComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterComponentForOverlap(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void RegisterComponentForHit(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAudioComponent(UAudioComponent* AudioComponent);
    
    UFUNCTION(BlueprintCallable)
    void RecheckOverlaps();
    
    UFUNCTION(BlueprintCallable)
    void PhysicsVolumeChanged(APhysicsVolume* NewVolume);
    
    UFUNCTION(BlueprintCallable)
    void OwnerTookDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SourceActiveState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SizzlingActors();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSourceActive() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsSizzling(AActor* Actor) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsActorOnCooldown(AActor* CheckActor);
    
    UFUNCTION(BlueprintCallable)
    static bool HasStatusEffectSourceComp(AActor* FromActor, TSubclassOf<UGGStatusEffectSourceComponent> SpecificClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    EStatusEffectTypes GetStatusEffectToSpread() const;
    
    UFUNCTION(BlueprintCallable)
    static UGGStatusEffectSourceComponent* GetStatusEffectSourceComp(AActor* FromActor, TSubclassOf<UGGStatusEffectSourceComponent> SpecificClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanActivateFromOtherSourceComp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActivateFromContactWithStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActivatedBy() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DeactivateSource();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivateSource(AActor* Activator);
    
};

