#include "GGMotorcycleSummoningConfig.h"

UGGMotorcycleSummoningConfig::UGGMotorcycleSummoningConfig() {
    this->MinDistance = 200.00f;
    this->MaxDistance = 1000.00f;
    this->ArcBehindPlayer = 90.00f;
    this->NumTestLocations = 10;
    this->TraceStartUp = 200.00f;
    this->TraceEndDown = 400.00f;
    this->PathStepSize = 200.00f;
    this->TimeToReachPlayer = 0.50f;
    this->LocationInterpSpeed = 10.00f;
    this->RotationInterpSpeed = 5.00f;
    this->SoundReachedTarget = NULL;
    this->MontageSummoning = NULL;
    this->TimeMontageEndsBeforeReachingPlayer = 0.10f;
}


