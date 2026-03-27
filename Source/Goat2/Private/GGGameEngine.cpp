#include "GGGameEngine.h"

UGGGameEngine::UGGGameEngine() {
    this->ShaderComplexityColors.AddDefaulted(9);
    this->QuadComplexityColors.AddDefaulted(11);
    this->LightComplexityColors.AddDefaulted(11);
    this->StationaryLightOverlapColors.AddDefaulted(9);
    this->LODColorationColors.AddDefaulted(8);
    this->HLODColorationColors.AddDefaulted(7);
    this->StreamingAccuracyColors.AddDefaulted(5);
    this->StatColorMappings.AddDefaulted(3);
    this->NetDriverDefinitions.AddDefaulted(3);
    this->IsPlaytestingBuild = false;
}

FString UGGGameEngine::GetBuiltPerforceStreamName() {
    return TEXT("");
}


