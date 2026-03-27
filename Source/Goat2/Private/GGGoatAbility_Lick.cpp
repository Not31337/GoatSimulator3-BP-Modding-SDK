#include "GGGoatAbility_Lick.h"

UGGGoatAbility_Lick::UGGGoatAbility_Lick() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->StartLocationBoneName = TEXT("Root");
    this->TongueMaxLength = 2000.00f;
    this->LickDelay = 0.20f;
    this->LickSize = 30.00f;
    this->LickHalfHeight = 50.00f;
    this->StartDistanceFromGoat = 0.00f;
    this->DistanceFromGoat = 50.00f;
    this->bDrawOverlapShape = false;
    this->MouthParticleSocket = TEXT("LickParticleLocationSocket");
    this->DroppedPActorNotifyRadius = 400.00f;
}

void UGGGoatAbility_Lick::UpdateLatestInstigator() {
}

void UGGGoatAbility_Lick::ServerSetLickedObject_Implementation(UPrimitiveComponent* ClosestComponent, UObject* ClosestLickable, FName LickedBone) {
}

void UGGGoatAbility_Lick::MulticastStoppedBeingLicked_Implementation(UObject* LickedObject, AGGGoat* Goat) {
}

void UGGGoatAbility_Lick::MulticastSetLickedObject_Implementation(AGGGoat* Goat, UPrimitiveComponent* ClosestComponent, UObject* ClosestLickable, FName LickedBone) {
}

void UGGGoatAbility_Lick::ExecuteLick() {
}

void UGGGoatAbility_Lick::CharacterEnterVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}


