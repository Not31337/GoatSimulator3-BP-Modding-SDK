#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "GGGearAbility_Parasite.generated.h"

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_Parasite : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeToReleaseEatenTargets;
    
    UGGGearAbility_Parasite();

};

