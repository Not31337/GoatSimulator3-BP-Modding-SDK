#include "GGGoatTower_Apocalypse.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GGDynamicAssetHoldingComponent.h"

AGGGoatTower_Apocalypse::AGGGoatTower_Apocalypse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmbientSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Ambient Sound"));
    this->ActiveOngoingParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Active Ongoing Particle"));
    this->DynamicAssetHolding = CreateDefaultSubobject<UGGDynamicAssetHoldingComponent>(TEXT("Dynamic Asset Holding"));
    this->ActiveOngoingParticle->SetupAttachment(RootComponent);
    this->AmbientSound->SetupAttachment(RootComponent);
}

void AGGGoatTower_Apocalypse::OnLostSignificance(UGGDynamicAssetHoldingComponent* DynAssetComp) {
}

void AGGGoatTower_Apocalypse::OnGainedSignificance(UGGDynamicAssetHoldingComponent* DynAssetComp) {
}

void AGGGoatTower_Apocalypse::OnDynamicLoadingFinished(UGGDynamicAssetHoldingComponent* DynAssetComp) {
}


bool AGGGoatTower_Apocalypse::IsPuzzleComplete() const {
    return false;
}



