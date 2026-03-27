#include "GGGoatGear_Static_HadesHair.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_HadesHair::UGGGoatGear_Static_HadesHair(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMat = NULL;
    this->AngryMat = NULL;
    this->DefaultParticles = NULL;
    this->DefaultSound = NULL;
    this->bHaveAngryHair = false;
    this->HairParticleComponent = NULL;
    this->SoundComponent = NULL;
}

void UGGGoatGear_Static_HadesHair::OnRep_HaveAngryHair() {
}

void UGGGoatGear_Static_HadesHair::OnActorLostStatusEffect(AActor* Actor, UGGStatusEffectManager* Manager, EStatusEffectTypes Type) {
}

void UGGGoatGear_Static_HadesHair::DelayedBeginPlay() {
}

void UGGGoatGear_Static_HadesHair::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_HadesHair, bHaveAngryHair);
}


