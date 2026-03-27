#include "GGGoatAbility_BackLunge.h"

UGGGoatAbility_BackLunge::UGGGoatAbility_BackLunge() {
    this->ActorHitReactionWeights.AddDefaulted(4);
    this->bTwoPhasedBackLunge = true;
    this->OnHitRepelSizeMultiplier = 2.50f;
    this->BackLungeImpulse = 1000.00f;
    this->BackLungeAngle = 30.00f;
    this->FailSafeBackLungeResetTime = 7.00f;
    this->InWaterResetTime = 1.00f;
}

void UGGGoatAbility_BackLunge::ServerRepelImpulse_Implementation(bool SaveRepelledActors, bool ApplySweep, bool IgnoreSavedActors) {
}
bool UGGGoatAbility_BackLunge::ServerRepelImpulse_Validate(bool SaveRepelledActors, bool ApplySweep, bool IgnoreSavedActors) {
    return true;
}

void UGGGoatAbility_BackLunge::OnPlayerEnteredWater(APhysicsVolume* WaterVolume) {
}

void UGGGoatAbility_BackLunge::OnCollidedWithSomething(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


