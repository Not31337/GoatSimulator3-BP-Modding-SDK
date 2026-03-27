#include "RagdollStateChangeSettings.h"

FRagdollStateChangeSettings::FRagdollStateChangeSettings() {
    this->bForceStateChange = false;
    this->CollisionSetting = ERagdollChangeCollisionSettings::UseDefaults;
    this->RagdollChange = ERagdollChange::None;
    this->bIgnoreMinimalTimeInRagdoll = false;
    this->bIgnoreRagdollVelocity = false;
    this->bLocallyPredictToRagdoll = false;
}

