#include "GGGoatGear_Skel_HeroCape.h"

UGGGoatGear_Skel_HeroCape::UGGGoatGear_Skel_HeroCape(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PassiveSound = NULL;
    this->PassiveSoundSpeedParameter = TEXT("Velocity");
    this->PassiveSoundComponent = NULL;
}

void UGGGoatGear_Skel_HeroCape::MulticastResetGoatCollision_Implementation() {
}

void UGGGoatGear_Skel_HeroCape::MulticastDisableGoatCollision_Implementation() {
}


