#include "GGGearAbility_Shield.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_Shield::UGGGearAbility_Shield() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ShieldClass = NULL;
    this->ProjectileSpawnerSocket = TEXT("ProjectileSpawnerSocket");
    this->bCanThrowShield = true;
    this->bPickedShieldUp = false;
}

void UGGGearAbility_Shield::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_Shield, Shield);
    DOREPLIFETIME(UGGGearAbility_Shield, bCanThrowShield);
    DOREPLIFETIME(UGGGearAbility_Shield, bPickedShieldUp);
}


