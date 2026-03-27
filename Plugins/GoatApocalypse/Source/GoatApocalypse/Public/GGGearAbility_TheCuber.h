#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "GGGearAbility_TheCuber.generated.h"

class UGGGoatGear_Skel_TheCuber;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_TheCuber : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Skel_TheCuber* CuberGear;
    
    UGGGearAbility_TheCuber();

};

