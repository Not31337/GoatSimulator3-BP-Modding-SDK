#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGTutorial.h"
#include "GGTutorialGearAbility.generated.h"

class AGGGoat;
class UGGGearAbility;

UCLASS(Blueprintable)
class GOAT2_API AGGTutorialGearAbility : public AGGTutorial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilAutomaticCompletion;
    
    AGGTutorialGearAbility(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnGoatAbilityActivated(AGGGoat* Goat, FGameplayTagContainer AbilityTags, UGGGearAbility* AbilityInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityDown();
    
    UFUNCTION(BlueprintCallable)
    void CompleteAutomatically();
    
};

