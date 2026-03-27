#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Test_SpiritAnimal.generated.h"

class AGGSpiritAnimalTest;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_Test_SpiritAnimal : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGSpiritAnimalTest> SpiritAnimalClass;
    
    UGGGearAbility_Test_SpiritAnimal();

};

