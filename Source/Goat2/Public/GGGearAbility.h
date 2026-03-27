#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EAbilityInput.h"
#include "RagdollStateChangeSettings.h"
#include "StartleDetailsSettings.h"
#include "GGGearAbility.generated.h"

class ACharacter;
class AGGGoat;
class ULSCharacterMovementComponent;
class USceneComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PreloadCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityInput ActivationInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* GearPart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULSCharacterMovementComponent* OwnerMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartleDetailsSettings StartleSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* GoatOwnerInternal;
    
public:
    UGGGearAbility();

    UFUNCTION(BlueprintCallable)
    void Unequipped();
    
    UFUNCTION(BlueprintCallable)
    void TickAbility(float DeltaTime, AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void StopForceFeedbackIfOwner(const FGameplayTag& ForceFeedbackEffect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void StopForceFeedbackForOwner(const FGameplayTag& ForceFeedbackEffect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void PlayForceFeedbackIfOwner(const FGameplayTag& ForceFeedbackEffect, bool bLoop) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void PlayForceFeedbackForOwner(const FGameplayTag& ForceFeedbackEffect, bool bLoop) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerStopRagdolling(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerRagdolling(ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoat* GetGoatOwner() const;
    
};

