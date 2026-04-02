#include "GGGearAbility_StickyBombs.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_StickyBombs::UGGGearAbility_StickyBombs() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->StickyBombClass = NULL;
    this->InitialHoldDurationForDetonation = 0.50f;
    this->DelayBetweenDetonations = 0.25f;
    this->SoundHoldToDetonate = NULL;
    this->Cooldown = 0.50f;
    this->LaunchAnimation = NULL;
    this->MaxTimeBetweenNPCExplosions = 2.00f;
    this->NPCExplodedCountForInstinct = 30;
    this->StickyBombsGear = NULL;
    this->SoundHoldToDetonateComponent = NULL;
    this->ActiveBombsCount = 0;
}

void UGGGearAbility_StickyBombs::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_StickyBombs, ActiveBombsCount);
}


