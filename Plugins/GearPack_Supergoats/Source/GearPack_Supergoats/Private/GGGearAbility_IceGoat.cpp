#include "GGGearAbility_IceGoat.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_IceGoat::UGGGearAbility_IceGoat() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->IcePathClass = NULL;
    this->PlayerMaxSections = 150;
    this->CurrentIcePath = NULL;
}

void UGGGearAbility_IceGoat::OnExitFlyingBroom(AGGGoat* Goat, APawn* FlyingBroom) {
}

void UGGGearAbility_IceGoat::OnExitedVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGGearAbility_IceGoat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_IceGoat, CurrentIcePath);
}


