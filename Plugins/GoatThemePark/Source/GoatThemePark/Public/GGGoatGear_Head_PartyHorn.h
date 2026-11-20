#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGoatGear_Skel_Base.h"
#include "EPartyHornState.h"
#include "GGGoatGear_Head_PartyHorn.generated.h"

class AGGGoat;
class UAnimMontage;
class UAudioComponent;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGGoatGear_Head_PartyHorn : public UGGGoatGear_Skel_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PartyHornAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultAnimSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartAnimSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoopAnimSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndAnimSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AudioComponentSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* UnwrappingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BlowingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* WrappingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NPCClappingReactionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifyNPCClappingTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifyNPCClappingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifyNPCAngryTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifyNPCRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PartyHornInstinctTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* PartyHornAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EPartyHornState CurrentState;
    
public:
    UGGGoatGear_Head_PartyHorn(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void StopNPCReactions();
    
    UFUNCTION(BlueprintCallable)
    void StartNPCReactions();
    
    UFUNCTION(BlueprintCallable)
    void SetNPCAngryWithGoat();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentState(EPartyHornState NewState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetCurrentState(EPartyHornState NewState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void NotifyNPCInRadius(bool bSetAngry);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastInstinctTrigger(AGGGoat* GoatOwner);
    
    UFUNCTION(BlueprintCallable)
    void HandleCurrentStateChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    EPartyHornState GetCurrentState() const;
    
};

