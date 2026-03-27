#include "GGTethermancerContraintComponent.h"
#include "Net/UnrealNetwork.h"

UGGTethermancerContraintComponent::UGGTethermancerContraintComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDidConstrainComponents = false;
    this->ChainEffectComponent = NULL;
    this->ChainEffectParticle = NULL;
}

void UGGTethermancerContraintComponent::OnRep_ReplicatedConstraintData() {
}

void UGGTethermancerContraintComponent::OnFlyingBroomToggledPhysics(AGGFlyingBroom* FlyingBroom) {
}

void UGGTethermancerContraintComponent::OnConstraintVehiclePooledCallback(AGGVehicle* Vehicle, bool WasPooled) {
}

void UGGTethermancerContraintComponent::OnConstraintNpcPooledCallback(AGGNPC* NPC, bool WasPooled) {
}

void UGGTethermancerContraintComponent::OnConstraintCharacterTeleportedCallback(AGGCharacter* Character, const FTransform& OldTransform) {
}

void UGGTethermancerContraintComponent::OnConstraintBrokenCallback(int32 ConstraintIndex) {
}

void UGGTethermancerContraintComponent::OnConstraintActorDestroyedCallback(AActor* DestroyedActor) {
}

void UGGTethermancerContraintComponent::OnConstraintActorCaughtCallback(AActor* CatchedActor, AActor* Catcher) {
}


void UGGTethermancerContraintComponent::ConstrainComponents() {
}

void UGGTethermancerContraintComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGTethermancerContraintComponent, ReplicatedConstraintData);
}


