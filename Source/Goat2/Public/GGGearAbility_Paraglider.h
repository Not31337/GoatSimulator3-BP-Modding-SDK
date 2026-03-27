#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGGearAbility_Paraglider.generated.h"

class AGGCharacter;
class AGGGoat;
class AGGVehicle;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_Paraglider : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParaglidingInstinctTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToParaglide;
    
    UGGGearAbility_Paraglider();

    UFUNCTION(BlueprintCallable)
    void TriggerInstinct(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable)
    void CharacterOnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void CharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
};

