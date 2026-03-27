#include "GGGearAbility_GrapplingHook.h"
#include "CableActor.h"

UGGGearAbility_GrapplingHook::UGGGearAbility_GrapplingHook() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->CableActorClass = ACableActor::StaticClass();
    this->CableAcceleration = 100.00f;
    this->WallImpactLunchVelocity = 100.00f;
    this->CableSpeed = 100.00f;
    this->MaxGrapplingDistance = 1000.00f;
    this->TargetMarkerClass = NULL;
    this->bEnableDebugging = false;
    this->CableActor = NULL;
    this->TargetMarkerDecal = NULL;
}

void UGGGearAbility_GrapplingHook::OnOwnerCapsuleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


