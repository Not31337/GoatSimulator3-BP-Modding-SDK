#include "GGGameplayCue_CappyHat_Teleport.h"

AGGGameplayCue_CappyHat_Teleport::AGGGameplayCue_CappyHat_Teleport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FieldOfViewCurve = NULL;
    this->TeleportStartParticles = NULL;
    this->TeleportStartSound = NULL;
    this->TeleportEndParticles = NULL;
    this->TeleportEndSound = NULL;
    this->Camera = NULL;
    this->Goat = NULL;
}


