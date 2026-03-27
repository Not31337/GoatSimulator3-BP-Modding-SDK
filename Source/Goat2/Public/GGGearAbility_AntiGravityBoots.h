#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_AntiGravityBoots.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_AntiGravityBoots : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GravityGameplayEffect;
    
    UGGGearAbility_AntiGravityBoots();

};

