#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_PuppetGoat.generated.h"

class AActor;
class AGGGoat;
class AGGNPC;
class AGGPuppetGoat_Cross;
class UAudioComponent;
class UParticleSystem;
class UParticleSystemComponent;
class USoundBase;

UCLASS(Blueprintable)
class GEARCOMPETITION_API UGGGearAbility_PuppetGoat : public UGGGearAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPuppetGoat_Cross> CrossClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CrossLaunchImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AngularLaunchImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ChargeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LaunchParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CancelParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ChargeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LaunchSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* CancelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnCrossDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ChargePSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ChargeAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPuppetGoat_Cross*> SpawnedCrosses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* GoatOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SpawnHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumAttachedCrosses, meta=(AllowPrivateAccess=true))
    int32 NumAttachedCrosses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCompletedInstinct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttachedCrossesInstinctThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PuppetGoatInstinctTag;
    
public:
    UGGGearAbility_PuppetGoat();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void PlayLaunchEffectsServer(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayLaunchEffects(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void PlayChargeEffectsServer(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayChargeEffectsMulticast(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumAttachedCrosses();
    
    UFUNCTION(BlueprintCallable)
    void OnCrossDestroyed(AActor* DestroyedCross);
    
    UFUNCTION(BlueprintCallable)
    void OnCrossAttachedToNPC(AGGNPC* NPC);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ChargeCancelledServer(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ChargeCancelledMulticast(AGGGoat* Goat);
    
};

