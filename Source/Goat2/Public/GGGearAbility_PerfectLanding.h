#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
#include "GGGearAbility.h"
#include "GGGearAbility_PerfectLanding.generated.h"

class AGGGoat;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_PerfectLanding : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBouncePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBouncePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMultiplier;
    
    UGGGearAbility_PerfectLanding();

    UFUNCTION(BlueprintCallable)
    void UpdateBouncePower(const FGameplayAbilitySpecHandle Handle, AGGGoat* Goat);
    
};

