#include "GGVehicle_FlyingCarpet.h"
#include "Components/BoxComponent.h"

AGGVehicle_FlyingCarpet::AGGVehicle_FlyingCarpet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ValidDriverTypes.AddDefaulted(3);
    this->ValidDamageTypes.AddDefaulted(6);
    this->ActivateHoveringProximity = CreateDefaultSubobject<UBoxComponent>(TEXT("Activate Hovering Proximity"));
    this->ActivateHoveringProximity->SetupAttachment(RootComponent);
}

void AGGVehicle_FlyingCarpet::ProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGVehicle_FlyingCarpet::ProximityBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGVehicle_FlyingCarpet::OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}


