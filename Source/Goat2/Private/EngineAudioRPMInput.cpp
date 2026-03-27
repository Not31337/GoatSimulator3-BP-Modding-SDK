#include "EngineAudioRPMInput.h"

FEngineAudioRPMInput::FEngineAudioRPMInput() {
    this->CurrentAudioRPM = 0.00f;
    this->EngineRPM = 0.00f;
    this->RPMSmooth = 0.00f;
    this->MaxRPM = 0.00f;
    this->LoadScale = 0.00f;
    this->EngineLOAD = 0.00f;
    this->LoadSmooth = 0.00f;
}

