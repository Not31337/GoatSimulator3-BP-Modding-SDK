#include "GGGoatGear_Static_Leafblower.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_Leafblower::UGGGoatGear_Static_Leafblower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsOn = false;
    this->BlowAreaComp = NULL;
    this->PActorForce = 35000.00f;
    this->PActorMassMultiplier = 0.10f;
    this->VehicleForce = 6000.00f;
    this->GoatForce = 350000.00f;
    this->GoatRagdollForce = 60000.00f;
    this->NPCRagdollForce = 85000.00f;
    this->ThrusterStrength = 20000.00f;
    this->UpwardThrust = 0.00f;
    this->UpwardZVelocityThrustThreshold = 0.00f;
    this->MaxVelocity = 3000.00f;
}


void UGGGoatGear_Static_Leafblower::OnEndOverlapBlowArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UGGGoatGear_Static_Leafblower::OnBeginOverlapBlowArea(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UGGGoatGear_Static_Leafblower::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_Leafblower, bIsOn);
}


