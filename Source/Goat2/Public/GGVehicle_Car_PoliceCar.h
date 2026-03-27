#pragma once
#include "CoreMinimal.h"
#include "GGVehicle_Car.h"
#include "Templates/SubclassOf.h"
#include "GGVehicle_Car_PoliceCar.generated.h"

class AActor;
class AGGNPC;

UCLASS(Blueprintable)
class GOAT2_API AGGVehicle_Car_PoliceCar : public AGGVehicle_Car {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGNPC> PoliceClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentTargetActor;
    
public:
    AGGVehicle_Car_PoliceCar(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void EjectPassenger();
    
    UFUNCTION(BlueprintCallable)
    void EjectDriver();
    
};

