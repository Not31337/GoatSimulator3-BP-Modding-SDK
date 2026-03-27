#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "GGGearAbility_PrayMaker.generated.h"

class AGGGoat;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_PrayMaker : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifyRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* PlayerGoat;
    
    UGGGearAbility_PrayMaker();

    UFUNCTION(BlueprintCallable)
    void OnGoatBaaing(AGGGoat* GoatBaaing);
    
};

