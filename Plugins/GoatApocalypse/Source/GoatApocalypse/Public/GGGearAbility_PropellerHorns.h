#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "RagdollStateChangeSettings.h"
#include "GGGearAbility_PropellerHorns.generated.h"

class ACharacter;
class UGGGoatGear_Horns_PropellerHorns;
class ULSCharacterMovementComponent;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_PropellerHorns : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RumbleTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Horns_PropellerHorns* PropellerHornsGear;
    
public:
    UGGGearAbility_PropellerHorns();

protected:
    UFUNCTION(BlueprintCallable)
    void OnGoatUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
};

