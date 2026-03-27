#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSet.h"
#include "GGVehicleAttributeSet.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGVehicleAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SplineSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData VehicleSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData NPCVehSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData VehicleSlowDownMultiplier;
    
    UGGVehicleAttributeSet();

};

