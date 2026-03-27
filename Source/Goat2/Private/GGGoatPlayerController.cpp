#include "GGGoatPlayerController.h"

AGGGoatPlayerController::AGGGoatPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void AGGGoatPlayerController::SetWorldPersistenceComponentState_Server_Implementation(UGGWorldPersistenceComponent* Component, uint8 State) {
}


