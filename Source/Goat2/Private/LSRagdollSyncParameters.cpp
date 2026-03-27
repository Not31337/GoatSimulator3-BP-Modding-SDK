#include "LSRagdollSyncParameters.h"

ULSRagdollSyncParameters::ULSRagdollSyncParameters() {
    this->TeleportThresholdDistance = 4000.00f;
    this->LowVelocityThreshold = 50.00f;
    this->LowVelocitySyncMultiplier = 3.00f;
    this->MinSyncVelocity = 37.50f;
    this->SyncAcceptanceDistance = 10.00f;
}


