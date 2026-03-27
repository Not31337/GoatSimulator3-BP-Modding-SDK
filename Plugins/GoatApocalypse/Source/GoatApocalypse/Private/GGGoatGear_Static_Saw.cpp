#include "GGGoatGear_Static_Saw.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_Saw::UGGGoatGear_Static_Saw(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScaleDownRatio = 0.50f;
    this->MinScale = 0.10f;
    this->SawCooldown = 0.50f;
    this->SawableClasses.AddDefaulted(3);
    this->RadialForceClass = NULL;
    this->AbilityActiveOngoingSoundCue = NULL;
    this->AbilityActiveOngoingStoppedSoundCue = NULL;
    this->GearImpactCue = NULL;
    this->AbilityOngoingParticle = NULL;
    this->SawedSomethingParticle = NULL;
    this->ChainMaterialIndex = 1;
    this->SawOffMaterial = NULL;
    this->SawOnMaterial = NULL;
    this->SawedSomethingBladeParticle = NULL;
    this->ActivateSawParticle = NULL;
    this->bAbilityActive = false;
    this->AbilityOngoingSound = NULL;
    this->AbilityOngoingParticleComponent = NULL;
    this->RadialForceComp = NULL;
}

bool UGGGoatGear_Static_Saw::SawActor(AActor* InActor) {
    return false;
}

void UGGGoatGear_Static_Saw::PlaySawedEffectsMulticast_Implementation(FTransform EffectsTransform) {
}

void UGGGoatGear_Static_Saw::OnRep_AbilityActive(bool bPreviousActive) {
}

void UGGGoatGear_Static_Saw::FireRadialImpulse_Implementation() {
}

void UGGGoatGear_Static_Saw::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_Saw, bAbilityActive);
}


