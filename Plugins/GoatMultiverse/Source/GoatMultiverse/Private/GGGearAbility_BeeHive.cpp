#include "GGGearAbility_BeeHive.h"
#include "GGBeeHive_Swarm.h"

UGGGearAbility_BeeHive::UGGGearAbility_BeeHive() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->SwarmClass = AGGBeeHive_Swarm::StaticClass();
    this->TraceRadius = 200.00f;
    this->TraceDistance = 1500.00f;
    this->VerticalTraceAngleOffset = 20.00f;
    this->ActiveSwarm = NULL;
}

void UGGGearAbility_BeeHive::OnGoatEndPlay(AActor* Goat, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


