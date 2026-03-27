#include "GGGearAbility_CuckooClock.h"

UGGGearAbility_CuckooClock::UGGGearAbility_CuckooClock() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
}


