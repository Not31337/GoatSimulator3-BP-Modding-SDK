#include "GGGoatGear_Static_ThorsHammer.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_ThorsHammer::UGGGoatGear_Static_ThorsHammer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChargingParticle = NULL;
    this->ChargingSound = NULL;
    this->bIsCharging = false;
    this->ChargingParticleComp = NULL;
    this->ChargingSoundComp = NULL;
}

void UGGGoatGear_Static_ThorsHammer::OnRep_IsCharging() {
}

void UGGGoatGear_Static_ThorsHammer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_ThorsHammer, bIsCharging);
}


