#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "GGGoatAbility_Baa.generated.h"

class UGGBaaAbilityData;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGGoatAbility_Baa : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoatGreetingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleSlowdownRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowDownValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowDownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawVehicleSlowdown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGGBaaAbilityData>> BaaAbilityData;
    
    UGGGoatAbility_Baa();

};

