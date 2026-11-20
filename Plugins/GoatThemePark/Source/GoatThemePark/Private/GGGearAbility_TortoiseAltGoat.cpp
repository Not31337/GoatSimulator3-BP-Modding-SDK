#include "GGGearAbility_TortoiseAltGoat.h"

UGGGearAbility_TortoiseAltGoat::UGGGearAbility_TortoiseAltGoat() {
    this->bReplicateInputDirectly = true;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bCanActivateWhileRagdoll = false;
    this->Speed = 1500.00f;
    this->RadialForceRadius = 60.00f;
    this->ImpulseStrengthCharacter = 500.00f;
    this->ImpulseStrengthPActors = 2000.00f;
    this->ImpulseStrengthVehicles = 20000.00f;
    this->Bounciness = 1.00f;
    this->RadialForceSphere = NULL;
}

void UGGGearAbility_TortoiseAltGoat::OnGoatHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGGearAbility_TortoiseAltGoat::OnBeginOverlapRadialForceSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


