#include "GGGearAbility_PropellerHorns.h"

UGGGearAbility_PropellerHorns::UGGGearAbility_PropellerHorns() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->PropellerHornsGear = NULL;
}

void UGGGearAbility_PropellerHorns::OnGoatUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}


