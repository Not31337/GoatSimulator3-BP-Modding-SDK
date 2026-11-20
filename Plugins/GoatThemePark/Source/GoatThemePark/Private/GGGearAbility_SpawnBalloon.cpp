#include "GGGearAbility_SpawnBalloon.h"

UGGGearAbility_SpawnBalloon::UGGGearAbility_SpawnBalloon() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->SpawnForwardOffset = 80.00f;
    this->SpawnUpOffset = 0.00f;
    this->SpawnSideOffset = 0.00f;
    this->SpawnSocketLeft = TEXT("Pump_Tip_Spawn_L");
    this->SpawnSocketRight = TEXT("Pump_Tip_Spawn_R");
    this->BalloonFloatDistance = 200.00f;
    this->BalloonInflateTime = 1.00f;
    this->BalloonVerticalForceWhileInflating = 100.00f;
    this->bCatchGoatInBalloon = false;
    this->NPCChaseSearchRadius = 1500.00f;
    this->NPCChaseHandSlot = EAttachmentHandSlot::AHS_Right;
    this->NPCChaseFacingDot = 0.50f;
    this->bSpawnFromLeftTip = false;
    this->LastActivationServerTime = -339999995214436424907732413799364296704.00f;
}

void UGGGearAbility_SpawnBalloon::OnTrackedBalloonHolderEndPlay(AActor* DestroyedActor, TEnumAsByte<EEndPlayReason::Type> Reason) {
}

void UGGGearAbility_SpawnBalloon::OnGoatTurnedIntoBalloon(AGGGoat* Goat) {
}

void UGGGearAbility_SpawnBalloon::OnBalloonSpawned(AGGPhysicsActor_BalloonHolder* BalloonHolder, AGGPhysicsActor_HeldBalloon* BalloonPActor) {
}

void UGGGearAbility_SpawnBalloon::OnBalloonInflateEnded(AGGPhysicsActor_BalloonHolder* BalloonHolder, AGGPhysicsActor_HeldBalloon* BalloonPActor) {
}


