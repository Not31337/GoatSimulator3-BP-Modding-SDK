#include "GGGearAbility_HermesSneakers.h"

UGGGearAbility_HermesSneakers::UGGGearAbility_HermesSneakers() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ThrustStrength = 50000.00f;
    this->UpForceScalar = 1.00f;
    this->FootForceRotationSpeedScalar = 0.10f;
    this->BodyForceForwardOffset = 35.00f;
}

void UGGGearAbility_HermesSneakers::OnGoatUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}


