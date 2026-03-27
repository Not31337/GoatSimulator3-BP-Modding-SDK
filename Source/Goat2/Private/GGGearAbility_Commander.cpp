#include "GGGearAbility_Commander.h"

UGGGearAbility_Commander::UGGGearAbility_Commander() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->CommanderTargeterClass = NULL;
    this->NPCTargetClass = NULL;
    this->PitchIncrease = 10.00f;
    this->TraceLength = 2000.00f;
    this->MinDistance = 300.00f;
    this->SelectedNPCParticle = NULL;
    this->CommanderGoat = NULL;
    this->CommanderTargeter = NULL;
    this->SelectedNPC = NULL;
    this->SelectedNPCParticleComp = NULL;
}

void UGGGearAbility_Commander::ServerPerformNPCTask_Implementation(AGGNPC* NPC, FVector_NetQuantize TargetLocation, AActor* TargetActor) {
}
bool UGGGearAbility_Commander::ServerPerformNPCTask_Validate(AGGNPC* NPC, FVector_NetQuantize TargetLocation, AActor* TargetActor) {
    return true;
}




FCommanderSoundPairing UGGGearAbility_Commander::GetRandomSoundPairing() {
    return FCommanderSoundPairing{};
}


