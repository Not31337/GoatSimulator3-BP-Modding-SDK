#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGVehicleAbility.h"
#include "GGVehicleAbility_Siren.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGVehicleAbility_Siren : public UGGVehicleAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SirenCueTag;
    
public:
    UGGVehicleAbility_Siren();

};

