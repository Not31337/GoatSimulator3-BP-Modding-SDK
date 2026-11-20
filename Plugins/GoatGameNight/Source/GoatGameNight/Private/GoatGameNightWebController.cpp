#include "GoatGameNightWebController.h"

UGoatGameNightWebController::UGoatGameNightWebController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerSlot = 0;
    this->LastState = EControllerState::CS_None;
    this->CurrentState = EControllerState::CS_None;
    this->bHoldingInteract = false;
    this->LastGameplayState = EControllerState::CS_None;
    this->LastInteractable = NULL;
    this->LoadingScreenCount = 0;
}

void UGoatGameNightWebController::SetNextScreen(EControllerState NextScreen) {
}

void UGoatGameNightWebController::OnPlayerConnected() {
}









bool UGoatGameNightWebController::IsInMenuState(EControllerState State) {
    return false;
}


