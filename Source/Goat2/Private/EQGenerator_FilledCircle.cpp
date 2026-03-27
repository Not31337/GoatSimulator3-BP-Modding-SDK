#include "EQGenerator_FilledCircle.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEQGenerator_FilledCircle::UEQGenerator_FilledCircle() {
    this->OuterCircleRadius = 800.00f;
    this->InnerCircleRadius = 100.00f;
    this->NumberOfRings = 5;
    this->SpaceBetween = 350.00f;
    this->ArcAngle = 360.00f;
    this->CircleCenter = UEnvQueryContext_Querier::StaticClass();
    this->ContextRotation = UEnvQueryContext_Querier::StaticClass();
}


