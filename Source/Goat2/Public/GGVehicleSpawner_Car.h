#pragma once
#include "CoreMinimal.h"
#include "GGVehicleSpawner.h"
#include "GGVehicleSpawner_Car.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGVehicleSpawner_Car : public AGGVehicleSpawner {
    GENERATED_BODY()
public:
    AGGVehicleSpawner_Car(const FObjectInitializer& ObjectInitializer);

};

