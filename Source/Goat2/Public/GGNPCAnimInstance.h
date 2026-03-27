#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LSAnimInstance.h"
#include "GGNPCAnimInstance.generated.h"

class AGGCharacter;
class AGGNPC;
class AGGVehicle;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGNPCAnimInstance : public ULSAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* OwnerNPC;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FootIKAlpha;
    
public:
    UGGNPCAnimInstance();

private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterOwnerExitedVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterOwnerEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimNotifyTriggered(const FGameplayTag& NotifyTag);
    
};

