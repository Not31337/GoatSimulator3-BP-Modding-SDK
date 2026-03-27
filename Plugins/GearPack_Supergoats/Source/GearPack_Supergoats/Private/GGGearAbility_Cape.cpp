#include "GGGearAbility_Cape.h"

UGGGearAbility_Cape::UGGGearAbility_Cape() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->TargetingDistance = 2000.00f;
    this->TraceRadiusNarrow = 75.00f;
    this->TraceRadiusWide = 150.00f;
    this->AimPitchOffset = 15.00f;
    this->TimeToTarget = 0.50f;
    this->DistanceFromTargetToHeadbutt = 100.00f;
    this->ImpulseForBlockingObjects = 4000.00f;
    this->ImpulseForTarget = 4000.00f;
    this->ImpulseWhenHittingAnotherFlyingGoat = 3000.00f;
    this->VerticalLaunchSpeedOnHit = 400.00f;
    this->TargetMarkerWidgetClass = NULL;
    this->WidgetSize = 150.00f;
    this->FoVChangeDuringFlight = NULL;
    this->Target = NULL;
    this->TargetMarker = NULL;
    this->TargetMarkerWidget = NULL;
}

void UGGGearAbility_Cape::ServerHitTargetActor_Implementation(FVector GoatLocation) {
}

void UGGGearAbility_Cape::ServerHitActorDuringMove_Implementation(AActor* Actor, FVector_NetQuantize HitLocation, FVector_NetQuantize Impulse) {
}

void UGGGearAbility_Cape::OnLanded_Implementation(const FHitResult& Hit) {
}

void UGGGearAbility_Cape::OnEnterWaterVolume(APhysicsVolume* WaterVolume) {
}


void UGGGearAbility_Cape::ClientUnequipped_Implementation() {
}


