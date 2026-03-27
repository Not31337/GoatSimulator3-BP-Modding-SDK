#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "OnVoiceLineFinishedDelegate.h"
#include "GGVoiceOverComponent.generated.h"

class AGGNPC_Humanoid;
class UAudioComponent;
class USoundAttenuation;
class USoundClass;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGVoiceOverComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* VoiceAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ValidRandomizedIdentities;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceLineFinished OnVoiceLineFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag NPCVoiceIdentity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC_Humanoid* OwnerHumanoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* VoiceAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* VoiceSoundClassOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideVoiceLineTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAllVoiceLineTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OverrideVoiceLineTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagContainer> VoiceLineOverrides;
    
    UGGVoiceOverComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopCurrentVoiceline();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetVoiceIdentity_BP(FGameplayTag VoiceIdentity);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RandomizeVoiceIdentity_BP(TArray<FGameplayTag> OverrideVoiceIdentities);
    
    UFUNCTION(BlueprintCallable)
    bool PlayVoiceOver(FGameplayTag VoiceOverType, bool bReplicate, bool bCanInterruptCurrentLine, bool bCanBeStoppedByDamage);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAudioFinished();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayVoiceOver(FGameplayTag VoiceOverType, bool bCanInterruptCurrentLine, bool bCanBeStoppedByDamage);
    
};

