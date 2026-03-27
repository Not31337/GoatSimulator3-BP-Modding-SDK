#include "GGGoatGear_Head_GrassHair.h"

UGGGoatGear_Head_GrassHair::UGGGoatGear_Head_GrassHair(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasPassiveEffect = true;
    this->GrassCutSoundEffect = NULL;
    this->GrassCutParticleSystem = NULL;
    this->GrassCutEffectOffset = 0.00f;
    this->GrowthRate = 2.10f;
}

void UGGGoatGear_Head_GrassHair::PlayGrassCutFx_Implementation() {
}


