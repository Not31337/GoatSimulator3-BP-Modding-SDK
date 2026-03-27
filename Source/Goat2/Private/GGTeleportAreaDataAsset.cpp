#include "GGTeleportAreaDataAsset.h"

UGGTeleportAreaDataAsset::UGGTeleportAreaDataAsset() {
    this->AreaLoadingType = ETeleportAreaLoadingType::TALT_InPersistentLevel;
    this->bRequireAllPlayerParticipation = false;
    this->bUnloadLightingLevels = false;
    this->bManualLightingLevelSwitch = false;
    this->LevelStreamDelay = 3.00f;
    this->bAllowAdjustingTeleportIn = true;
    this->bAllowAdjustingTeleportOut = true;
    this->AdjustDistance = 150.00f;
    this->TransitionMoveMode = MOVE_None;
    this->bShouldCreateInstancedArea = false;
    this->bAssignEnteringPlayerAsLogicOwner = false;
}


