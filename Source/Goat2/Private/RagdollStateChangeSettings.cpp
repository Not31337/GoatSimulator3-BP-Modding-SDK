#include "RagdollStateChangeSettings.h"

FRagdollStateChangeSettings::FRagdollStateChangeSettings() {
    this->bForceStateChange = false;
    this->CollisionSetting = ERagdollChangeCollisionSettings::UseDefaults;
    this->RagdollChange = ERagdollChange::None;
    this->bLocallyPredictStateChange = false;
    this->bIgnoreMinimalTimeInRagdoll = false;
    this->bIgnoreRagdollVelocity = false;
}

