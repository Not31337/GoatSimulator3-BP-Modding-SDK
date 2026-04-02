#include "GGGoatGear_Horns_Portals.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Horns_Portals::UGGGoatGear_Horns_Portals(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StyleID = 1;
    this->TargetMarkerParticles = NULL;
    this->TargetMarkerParticlesClosePortal = NULL;
    this->ProjectileMaterials.AddDefaulted(2);
    this->PortalOngoingParticles.AddDefaulted(2);
    this->PortalTeleportedBurstParticles.AddDefaulted(2);
    this->PortalRemovedEffect.AddDefaulted(2);
    this->SocketsOngoingEffect.AddDefaulted(2);
    this->SocketsChargingEffect.AddDefaulted(2);
    this->OngoingParticles.AddDefaulted(2);
    this->MontagesFire.AddDefaulted(2);
    this->ActiveHornsIndex = -1;
    this->PlacedPortals.AddDefaulted(2);
    this->OngoingParticleComponents.AddDefaulted(2);
    this->ActiveAimingEffect = NULL;
}

void UGGGoatGear_Horns_Portals::OnRep_PlacedPortal() {
}

void UGGGoatGear_Horns_Portals::OnRep_ActiveHornsIndex() {
}

void UGGGoatGear_Horns_Portals::MulticastPlayDischargeEffect_Implementation(uint8 PortalIndex) {
}

void UGGGoatGear_Horns_Portals::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Horns_Portals, ActiveHornsIndex);
    DOREPLIFETIME(UGGGoatGear_Horns_Portals, PlacedPortals);
}


