#include "GGVehicleEngineSoundController.h"

UGGVehicleEngineSoundController::UGGVehicleEngineSoundController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningVehicle = NULL;
    this->OwningVehicleMovementComp = NULL;
    this->OwningVehicleWheeledMovementComp = NULL;
    this->OwningVehicleBoatMovementComp = NULL;
}


bool UGGVehicleEngineSoundController::IsDebugging() {
    return false;
}

FEngineAudioRPMOutput UGGVehicleEngineSoundController::CalculateAudioRPM_Internal(const FEngineAudioRPMInput& Input) {
    return FEngineAudioRPMOutput{};
}


