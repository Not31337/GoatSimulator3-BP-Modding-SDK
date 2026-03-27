#include "EQTest_GGStationaryNPC.h"

UEQTest_GGStationaryNPC::UEQTest_GGStationaryNPC() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->DebugDraw = false;
    this->VelocityTolerance = 10.00f;
}


