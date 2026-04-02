#include "GGGearAbility_Portals.h"

UGGGearAbility_Portals::UGGGearAbility_Portals() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ProjectileClass = NULL;
    this->PortalClass = NULL;
    this->ForceFeedbackAiming.AddDefaulted(2);
    this->ForceFeedbackAbilityActivated.AddDefaulted(2);
    this->TargetMarker = NULL;
    this->PortalHorns = NULL;
}

void UGGGearAbility_Portals::OnProjectileReachedTarget(AActor* ProjectileActor) {
}

void UGGGearAbility_Portals::OnPortalDestroyed(AActor* PortalActor) {
}


