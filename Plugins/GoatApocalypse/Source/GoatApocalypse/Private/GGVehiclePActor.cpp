#include "GGVehiclePActor.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGVehiclePActor::AGGVehiclePActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bScalePassengersWithVehicle = false;
    this->ValidDriverTypes.AddDefaulted(3);
    this->ValidDamageTypes.AddDefaulted(6);
    this->WheelMesh = NULL;
    this->WheelMeshScale = 1.00f;
    this->WidthToLengthRatioForRotation = 1.10f;
    this->HeightToLengthRatioForRotation = 1.10f;
    this->WidthToLengthRatioForBeingSquare = 1.20f;
    this->MeshSettings = NULL;
    this->MinSurfaceAreaForOnePassenger = 8100.00f;
    this->MinSurfaceAreaForTwoPassengers = 14400.00f;
    this->MinSurfaceAreaForThreePassengers = 20000.00f;
    this->PActorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PActorMeshComponent"));
    this->bMadeOfCompactedVehicle = false;
    this->PActorMeshComponent->SetupAttachment(RootComponent);
}

void AGGVehiclePActor::OnRep_PActorMesh() {
}

UStaticMesh* AGGVehiclePActor::GetPActorMesh() const {
    return NULL;
}

void AGGVehiclePActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGVehiclePActor, PActorMesh);
}


