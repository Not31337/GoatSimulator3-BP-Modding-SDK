#include "GGGearAbility_Stasis.h"

UGGGearAbility_Stasis::UGGGearAbility_Stasis() {
    this->StasisStartTimestamp = 0.00f;
    this->StasisStartParticle = NULL;
    this->StasisLaunchParticle = NULL;
    this->StasisStartCameraShake = NULL;
    this->StasisLaunchCameraShake = NULL;
    this->ForceArrowComponent = NULL;
    this->StasisedPActor = NULL;
    this->StasisDuration = 5.00f;
}

void UGGGearAbility_Stasis::StoreImpulse(FVector InImpulse) {
}

void UGGGearAbility_Stasis::SetNewStasisActor(AGGPhysicsActor* InPActor) {
}

void UGGGearAbility_Stasis::OnStasisedPActorTakeDamage(float DamageAmount, FVector InImpulse, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}

void UGGGearAbility_Stasis::OnStasisedPActorOnHitDelegate(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGGearAbility_Stasis::LaunchStasisedActor() {
}


