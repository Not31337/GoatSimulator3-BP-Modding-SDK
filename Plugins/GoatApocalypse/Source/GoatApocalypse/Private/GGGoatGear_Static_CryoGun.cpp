#include "GGGoatGear_Static_CryoGun.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_CryoGun::UGGGoatGear_Static_CryoGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeamPArticle = NULL;
    this->BeamBurstParticle = NULL;
    this->BeamOffBurstParticle = NULL;
    this->IceSound = NULL;
    this->IceEndSound = NULL;
    this->ParticleSocket = TEXT("ForwardMuzzle");
    this->GunTraceRange = 400.00f;
    this->GunTraceRadius = 75.00f;
    this->GunBeamTravelSpeed = 500.00f;
    this->FrozenStatusEffectClass = NULL;
    this->bIsGunActive = false;
    this->IceParticleBeam = NULL;
    this->IceAudioComp = NULL;
}

void UGGGoatGear_Static_CryoGun::OnRep_bIsGunActive() {
}

void UGGGoatGear_Static_CryoGun::MulticastPlayDeactivationSound_Implementation() {
}

void UGGGoatGear_Static_CryoGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_CryoGun, bIsGunActive);
}


