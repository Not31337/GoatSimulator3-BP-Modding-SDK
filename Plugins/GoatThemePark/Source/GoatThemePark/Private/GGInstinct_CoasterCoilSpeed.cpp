#include "GGInstinct_CoasterCoilSpeed.h"

AGGInstinct_CoasterCoilSpeed::AGGInstinct_CoasterCoilSpeed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_CoasterCoilSpeed::OnGrindHyperspeedStart(UGGGrindableSplineComponent* GrindSpline) {
}

void AGGInstinct_CoasterCoilSpeed::OnGoatMovementModeChanged(AGGGoat* Goat, TEnumAsByte<EMovementMode> NewMovement, uint8 NewCustomMovement, TEnumAsByte<EMovementMode> PrevMovement, uint8 PrevCustomMovement) {
}


