#include "GGGoatGear_AltGoat_Scovillain.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_AltGoat_Scovillain::UGGGoatGear_AltGoat_Scovillain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FireParticle = NULL;
    this->FireOngoingSound = NULL;
    this->FireEndSound = NULL;
    this->ParticleSocket = TEXT("MouthSocket");
    this->TraceRadius = 300.00f;
    this->HalfConeAngle = 30.00f;
    this->ForceStrength = 2000000.00f;
    this->ForceStrengthCharacter = 2500000.00f;
    this->ForceStrengthVehicle = 20000000.00f;
    this->UpwardForceStrength = 120000.00f;
    this->UpwardForceStrengthCharacter = 120000.00f;
    this->UpwardForceStrengthVehicle = 420000.00f;
    this->bIsFireActive = false;
    this->FireParticleComp = NULL;
    this->FireAudioComp = NULL;
    this->RadialForceComp = NULL;
}

void UGGGoatGear_AltGoat_Scovillain::OnRep_FireActive() {
}

void UGGGoatGear_AltGoat_Scovillain::OnAddedForceToActor(AActor* Actor) {
}

void UGGGoatGear_AltGoat_Scovillain::MulticastPlayDeactivationSound_Implementation() {
}

void UGGGoatGear_AltGoat_Scovillain::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_AltGoat_Scovillain, bIsFireActive);
}


