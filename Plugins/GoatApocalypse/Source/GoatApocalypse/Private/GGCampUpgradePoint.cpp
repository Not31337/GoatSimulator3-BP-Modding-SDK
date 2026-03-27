#include "GGCampUpgradePoint.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AGGCampUpgradePoint::AGGCampUpgradePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->bRequireHold = true;
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->OverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Overlap Box"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ActiveParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Active Particle"));
    this->ActiveSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Active Sound"));
    this->bUseOverlapBoxForOverlaps = true;
    this->bHideMeshWhenPurchased = true;
    this->bDisableCollisionWhenPurchased = true;
    this->DefaultRadarIcon = NULL;
    this->RadarIcon = NULL;
    this->ActiveParticle->SetupAttachment(RootComponent);
    this->ActiveSound->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
    this->OverlapBox->SetupAttachment(RootComponent);
}

bool AGGCampUpgradePoint::ShouldEffectsBeActive() const {
    return false;
}

void AGGCampUpgradePoint::OnTokenAmountChanged(int32 Amount) {
}

void AGGCampUpgradePoint::OnGoalChangedState(EStretchGoalStates NewState, EStateChangeSource ChangeSource) {
}



