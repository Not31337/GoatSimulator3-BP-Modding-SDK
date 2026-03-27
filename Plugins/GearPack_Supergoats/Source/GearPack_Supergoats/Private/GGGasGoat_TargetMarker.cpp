#include "GGGasGoat_TargetMarker.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "NiagaraComponent.h"

AGGGasGoat_TargetMarker::AGGGasGoat_TargetMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Particles"));
    this->Particles_Target = (UNiagaraComponent*)RootComponent;
    this->Particles_Ground = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ground Particles"));
    this->Sound_ChargeStart = CreateDefaultSubobject<UAudioComponent>(TEXT("Charge Sound"));
    this->Sound_Target = CreateDefaultSubobject<UAudioComponent>(TEXT("Target Sound"));
    this->Particles_Ground->SetupAttachment(RootComponent);
    this->Sound_ChargeStart->SetupAttachment(RootComponent);
    this->Sound_Target->SetupAttachment(RootComponent);
}


