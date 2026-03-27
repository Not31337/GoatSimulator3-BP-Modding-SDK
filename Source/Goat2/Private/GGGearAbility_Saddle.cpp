#include "GGGearAbility_Saddle.h"

UGGGearAbility_Saddle::UGGGearAbility_Saddle() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->GrabRadius = 400.00f;
    this->bCanPickUpStacksOfGoats = true;
    this->Rider = NULL;
    this->RiderPlayerGoat = NULL;
    this->SaddleGear = NULL;
}

void UGGGearAbility_Saddle::OnRiderPreCatched(bool bIsBeingCatched) {
}

void UGGGearAbility_Saddle::OnPlayerRiderRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGGearAbility_Saddle::OnOwnerOrRiderCatched(AActor* Owner, AActor* Catcher) {
}

void UGGGearAbility_Saddle::MulticastClientsOnSaddle_Implementation(AGGCharacter* Character, bool HasSetRagdoll) {
}

void UGGGearAbility_Saddle::MulticastClientsOffSaddle_Implementation(AGGCharacter* Character) {
}

void UGGGearAbility_Saddle::ClientsOnCollisionState(AGGCharacter* Character) {
}

void UGGGearAbility_Saddle::CharacterEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}


