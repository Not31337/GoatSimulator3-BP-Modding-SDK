#include "GGRide_VikingShip.h"
#include "Net/UnrealNetwork.h"

AGGRide_VikingShip::AGGRide_VikingShip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Axle = NULL;
    this->Force = 20.00f;
    this->Friction = 0.50f;
    this->MaxSpeed = 600.00f;
    this->AngleInterpolationTime = 0.05f;
    this->GravityScale = 0.40f;
}

void AGGRide_VikingShip::OnRep_ServerAngle() {
}

void AGGRide_VikingShip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGRide_VikingShip, ServerAngle);
}


