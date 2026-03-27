#pragma once
#include "CoreMinimal.h"
#include "GGVehicle_Car.h"
#include "GGVehicle_Car_Ambulance.generated.h"

class UAudioComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGVehicle_Car_Ambulance : public AGGVehicle_Car {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RoofLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SirenAudio;
    
public:
    AGGVehicle_Car_Ambulance(const FObjectInitializer& ObjectInitializer);

};

