#include "GGGoatGear_Scene_AltGoat_Tony.h"

UGGGoatGear_Scene_AltGoat_Tony::UGGGoatGear_Scene_AltGoat_Tony(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->MovementLoop = NULL;
    this->InRangeA = 0.00f;
    this->InRangeB = 0.00f;
    this->OutRangeA = 0.00f;
    this->OutRangeB = 0.00f;
    this->RollingSpeed = 0.00f;
    this->GoatMovementComp = NULL;
    this->RollingAudioComp = NULL;
}


