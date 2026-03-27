#include "GGVehicle_Car_Firetruck.h"
#include "Components/AudioComponent.h"
#include "Components/StaticMeshComponent.h"

AGGVehicle_Car_Firetruck::AGGVehicle_Car_Firetruck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ValidDriverTypes.AddDefaulted(3);
    this->ValidDamageTypes.AddDefaulted(6);
    this->RoofLights = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Roof Lights"));
    this->SirenAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Siren Audio"));
    this->RoofLights->SetupAttachment(RootComponent);
    this->SirenAudio->SetupAttachment(RootComponent);
}


