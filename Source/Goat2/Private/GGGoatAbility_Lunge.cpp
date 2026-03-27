#include "GGGoatAbility_Lunge.h"

UGGGoatAbility_Lunge::UGGGoatAbility_Lunge() {
    this->ActorHitReactionWeights.AddDefaulted(4);
    this->bTwoPhasedLunge = true;
    this->OnHitRepelSizeMultiplier = 2.50f;
    this->LungeImpulse = 1000.00f;
    this->LungeAngle = 30.00f;
    this->FailSafeLungeResetTime = 7.00f;
    this->InWaterResetTime = 1.00f;
}

void UGGGoatAbility_Lunge::ServerRepelImpulse_Implementation(bool SaveRepelledActors, bool ApplySweep, bool IgnoreSavedActors) {
}
bool UGGGoatAbility_Lunge::ServerRepelImpulse_Validate(bool SaveRepelledActors, bool ApplySweep, bool IgnoreSavedActors) {
    return true;
}

void UGGGoatAbility_Lunge::OnPlayerEnteredWater(APhysicsVolume* WaterVolume) {
}

void UGGGoatAbility_Lunge::OnCollidedWithSomething(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


