#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "GGGearAbility_PunchyArms.generated.h"

class UGGGoatGear_Back_PunchyArms;

UCLASS(Blueprintable)
class GEARPACK_FUTURE_API UGGGearAbility_PunchyArms : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Back_PunchyArms* PunchyArms;
    
public:
    UGGGearAbility_PunchyArms();

};

