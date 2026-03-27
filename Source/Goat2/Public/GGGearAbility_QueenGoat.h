#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_QueenGoat.generated.h"

class AGGPhysicsActor_Skeletal;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_QueenGoat : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor_Skeletal> GoatPActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoatLifespan;
    
    UGGGearAbility_QueenGoat();

};

