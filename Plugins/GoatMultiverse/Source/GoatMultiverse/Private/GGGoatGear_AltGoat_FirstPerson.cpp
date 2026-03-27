#include "GGGoatGear_AltGoat_FirstPerson.h"

UGGGoatGear_AltGoat_FirstPerson::UGGGoatGear_AltGoat_FirstPerson(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasPassiveEffect = true;
    this->bDisablePauseMenuWhileActive = true;
    this->CameraHeight = 32.00f;
    this->FPSCamera = NULL;
    this->ThirdPersonCamera = NULL;
}

void UGGGoatGear_AltGoat_FirstPerson::SetPauseMenuDisabled(bool bDisable) {
}


