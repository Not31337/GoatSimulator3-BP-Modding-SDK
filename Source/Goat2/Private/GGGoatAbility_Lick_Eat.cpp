#include "GGGoatAbility_Lick_Eat.h"

UGGGoatAbility_Lick_Eat::UGGGoatAbility_Lick_Eat() {
    this->DelayTongueStayAtObject = 0.20f;
    this->DelayUntilEatObject = 0.50f;
    this->PhysicsHandleInterpSpeedModifier = 1.00f;
    this->PhysicsHandleInterpSpeedVehicleMassModifier = 0.05f;
    this->PhysicsHandleInterpSpeedMinimumMass = 200.00f;
    this->CachedClosestLickable = NULL;
    this->CachedClosestComponent = NULL;
    this->CachedGoat = NULL;
}

void UGGGoatAbility_Lick_Eat::OnTongueDoneAtObject_Implementation() {
}

void UGGGoatAbility_Lick_Eat::OnObjectPulledTowardsGoat_Implementation() {
}


