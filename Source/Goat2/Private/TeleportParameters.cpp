#include "TeleportParameters.h"

FTeleportParameters::FTeleportParameters() {
    this->Priority = 0;
    this->VehicleHandle = ETeleportVehicleHandle::TVH_ExitVehicle;
    this->TeleportIntoVehicle = NULL;
    this->DelayRemoveLoadingScreen = 0.00f;
    this->bRequireTargetLocationLoaded = false;
    this->bOnlyLoadAfterFadeOut = false;
    this->bUnragdollAfterFade = false;
    this->bStopMovement = false;
    this->bHideGoat = false;
    this->DelayBeforeLoadingScreen = 0.00f;
    this->LocationRelativeToActor = NULL;
    this->bSetMovementModeAfterTeleport = false;
    this->NewMovementMode = MOVE_None;
    this->bDoSpecialAdjust = false;
    this->bShouldApplyLoadingScreen = false;
}

