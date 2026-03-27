#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGVehicleAbility.h"
#include "GGVehicleAbility_CarHorn.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGVehicleAbility_CarHorn : public UGGVehicleAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifyRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NotifyChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReactionCooldown;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CarHornCueTag;
    
public:
    UGGVehicleAbility_CarHorn();

};

