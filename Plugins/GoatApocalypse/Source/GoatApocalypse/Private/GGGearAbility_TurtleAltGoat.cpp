#include "GGGearAbility_TurtleAltGoat.h"

UGGGearAbility_TurtleAltGoat::UGGGearAbility_TurtleAltGoat() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->Speed = 1500.00f;
    this->Bounciness = 1.00f;
    this->ForceCompClass = NULL;
    this->TrailParticles = NULL;
    this->ForceComp = NULL;
    this->TrailParticlesComp = NULL;
}

void UGGGearAbility_TurtleAltGoat::OnGoatHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


