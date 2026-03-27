#include "GGGearAbility_PuppetGoat.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_PuppetGoat::UGGGearAbility_PuppetGoat() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->CrossClass = NULL;
    this->ChargeParticle = NULL;
    this->LaunchParticle = NULL;
    this->CancelParticle = NULL;
    this->ChargeSound = NULL;
    this->LaunchSound = NULL;
    this->CancelSound = NULL;
    this->SpawnCrossDelay = 1.00f;
    this->ChargePSC = NULL;
    this->ChargeAC = NULL;
    this->GoatOwner = NULL;
    this->NumAttachedCrosses = 0;
    this->bHasCompletedInstinct = false;
    this->AttachedCrossesInstinctThreshold = 7;
}

void UGGGearAbility_PuppetGoat::PlayLaunchEffectsServer_Implementation(AGGGoat* Goat) {
}
bool UGGGearAbility_PuppetGoat::PlayLaunchEffectsServer_Validate(AGGGoat* Goat) {
    return true;
}

void UGGGearAbility_PuppetGoat::PlayLaunchEffects_Implementation(AGGGoat* Goat) {
}

void UGGGearAbility_PuppetGoat::PlayChargeEffectsServer_Implementation(AGGGoat* Goat) {
}
bool UGGGearAbility_PuppetGoat::PlayChargeEffectsServer_Validate(AGGGoat* Goat) {
    return true;
}

void UGGGearAbility_PuppetGoat::PlayChargeEffectsMulticast_Implementation(AGGGoat* Goat) {
}

void UGGGearAbility_PuppetGoat::OnRep_NumAttachedCrosses() {
}

void UGGGearAbility_PuppetGoat::OnCrossDestroyed(AActor* DestroyedCross) {
}

void UGGGearAbility_PuppetGoat::OnCrossAttachedToNPC(AGGNPC* NPC) {
}

void UGGGearAbility_PuppetGoat::ChargeCancelledServer_Implementation(AGGGoat* Goat) {
}
bool UGGGearAbility_PuppetGoat::ChargeCancelledServer_Validate(AGGGoat* Goat) {
    return true;
}

void UGGGearAbility_PuppetGoat::ChargeCancelledMulticast_Implementation(AGGGoat* Goat) {
}

void UGGGearAbility_PuppetGoat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_PuppetGoat, NumAttachedCrosses);
}


