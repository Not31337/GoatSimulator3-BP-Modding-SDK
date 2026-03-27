#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
#include "GGGearAbility.h"
#include "RagdollStateChangeSettings.h"
#include "GGGearAbility_Minifun.generated.h"

class ACharacter;
class AGGGoat;
class ULSCharacterMovementComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_Minifun : public UGGGearAbility {
    GENERATED_BODY()
public:
    UGGGearAbility_Minifun();

    UFUNCTION(BlueprintCallable)
    void FireTrace(const FGameplayAbilitySpecHandle Handle, AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable)
    void CharacterRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
};

