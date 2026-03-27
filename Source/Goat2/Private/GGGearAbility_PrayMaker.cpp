#include "GGGearAbility_PrayMaker.h"

UGGGearAbility_PrayMaker::UGGGearAbility_PrayMaker() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NotifyRadius = 400.00f;
    this->PlayerGoat = NULL;
}

void UGGGearAbility_PrayMaker::OnGoatBaaing(AGGGoat* GoatBaaing) {
}


