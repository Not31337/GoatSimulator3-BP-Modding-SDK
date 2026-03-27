#include "GGGameplayCue_LightningBolts_Charging.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

AGGGameplayCue_LightningBolts_Charging::AGGGameplayCue_LightningBolts_Charging(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bAutoDestroyOnRemove = true;
    this->StartChargingSound = NULL;
    this->ParticlesChargeStage1 = NULL;
    this->ParticlesChargeStage2 = NULL;
    this->ParticlesChargeStage3 = NULL;
    this->DischargeParticles = NULL;
    this->ParticlesAttachSocket = TEXT("Particles Attach Socket");
    this->Root = (USceneComponent*)RootComponent;
    this->ChargingSoundComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Charging Sound"));
    this->ChargingParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Charging Particles"));
    this->ChargingParticles->SetupAttachment(RootComponent);
    this->ChargingSoundComponent->SetupAttachment(RootComponent);
}


