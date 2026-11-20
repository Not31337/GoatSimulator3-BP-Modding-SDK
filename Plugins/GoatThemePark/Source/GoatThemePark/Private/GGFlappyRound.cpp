#include "GGFlappyRound.h"

FGGFlappyRound::FGGFlappyRound() {
    this->bActive = false;
    this->PlayingGoat = NULL;
    this->Seed = 0;
    this->StartServerTime = 0.00f;
    this->RoundId = 0;
    this->FinalScore = 0;
    this->EndServerTime = 0.00f;
}

