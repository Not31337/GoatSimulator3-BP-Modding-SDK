#include "CurrentTeleport.h"

FCurrentTeleport::FCurrentTeleport() {
    this->bIsTeleporting = false;
    this->bUseLookAtLocation = false;
    this->bLocationRelativeToActor = false;
    this->bWaitingForDelayedRemoval = false;
    this->bHasStartedPlayerMove = false;
    this->FramesSincePlayerMovedStart = 0;
}

