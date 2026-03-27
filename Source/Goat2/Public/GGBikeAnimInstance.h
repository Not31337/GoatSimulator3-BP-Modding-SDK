#pragma once
#include "CoreMinimal.h"
#include "VehicleAnimInstance.h"
#include "GGBikeAnimInstance.generated.h"

class AGGVehicle_Bike;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGBikeAnimInstance : public UVehicleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BikePedalRotation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle_Bike* OwningBike;
    
public:
    UGGBikeAnimInstance();

};

