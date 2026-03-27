#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Boomerang.generated.h"

class AGGBoomerang;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_Boomerang : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGBoomerang> BoomerangClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToPressAbilityButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGBoomerang* Boomerang;
    
    UGGGearAbility_Boomerang();

};

