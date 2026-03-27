#include "GGGearAbility_ThirdEye.h"

UGGGearAbility_ThirdEye::UGGGearAbility_ThirdEye() {
    this->bReplicateInputDirectly = true;
    this->WidgetSpawnerClass = NULL;
    this->InNirvanaSound = NULL;
    this->ScanningSound = NULL;
    this->EnterNirvanaSound = NULL;
    this->ExitNirvanaSound = NULL;
    this->StopLickingSound = NULL;
    this->LickObjectParticle = NULL;
    this->ScanningObjectParticleLoop = NULL;
    this->StopLickingParticle = NULL;
    this->LotusGearComp = NULL;
    this->InNirvanaSoundComp = NULL;
    this->ScanningSoundComp = NULL;
    this->ScanningParticleComp = NULL;
    this->PlayerController = NULL;
    this->LickedActor = NULL;
    this->ThirdEyeWidgetSpawner = NULL;
}

void UGGGearAbility_ThirdEye::OnLickActor(AGGGoat* GoatLicking, AActor* LickActor) {
}

void UGGGearAbility_ThirdEye::OnGoatDroppedLickedActor(AGGGoat* GoatLicking, AActor* LickActor) {
}


