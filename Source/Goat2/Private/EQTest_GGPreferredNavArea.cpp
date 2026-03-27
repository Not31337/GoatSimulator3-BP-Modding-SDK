#include "EQTest_GGPreferredNavArea.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEQTest_GGPreferredNavArea::UEQTest_GGPreferredNavArea() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bGetAreasFromContext = false;
    this->NPCContext = UEnvQueryContext_Querier::StaticClass();
}


