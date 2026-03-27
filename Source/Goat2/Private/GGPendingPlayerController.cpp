#include "GGPendingPlayerController.h"
#include "GGPendingPlayerCameraManager.h"

AGGPendingPlayerController::AGGPendingPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = AGGPendingPlayerCameraManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}


