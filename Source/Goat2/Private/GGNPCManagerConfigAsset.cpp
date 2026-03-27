#include "GGNPCManagerConfigAsset.h"

UGGNPCManagerConfigAsset::UGGNPCManagerConfigAsset() {
    this->InitialCivilianPool = 0;
    this->CivilianPoolMax = 0;
    this->CivilianActiveNumMax = 0;
    this->ReservedForVehicles = 0;
    this->InitialEnvironmentalPool = 0;
    this->EnvironmentalPoolMax = 0;
    this->EnvironmentalActiveNumMax = 0;
    this->ProfessionalActiveNumMax = 0;
    this->ProfessionalPoolMax = 0;
    this->SpecialNPCsPoolMax = 0;
    this->AnimalActiveNumMax = 0;
    this->AnimalPoolMax = 0;
    this->VehicleActiveNumMax = 0;
    this->VehiclesPoolMax = 0;
    this->SpawnerRelevantDistance = 4900.00f;
    this->SpawnerMinDistance = 1600.00f;
    this->LoSSpawnAtDist = 4200.00f;
    this->NPCRelevantDistance = 5000.00f;
    this->NPCMaxRelevantDist = 9000.00f;
    this->SpawnerCooldown = 6.00f;
    this->ImportantSpawnerRelevantDistance = 4900.00f;
    this->bUseMinDistance = true;
    this->ImportantSpawnerMinDistance = 800.00f;
    this->SpawnerPlayerDistanceCheck = 1500.00f;
    this->PreventRespawnUntilDistanceAwayFromPlayers = 7500.00f;
    this->VehicleSpawnerRelevantDistance = 13000.00f;
    this->VehicleSpawnerMinDistance = 2500.00f;
    this->VehicleLoSSpawnAtDist = 5500.00f;
    this->VehicleRelevantDistance = 13500.00f;
    this->VehicleMaxRelevantDist = 15000.00f;
    this->VehicleSpawnerCooldown = 7.00f;
    this->VehicleImportantSpawnerRelevantDistance = 10000.00f;
    this->bVehicleUseMinDistance = true;
    this->VehicleImportantSpawnerMinDistance = 2000.00f;
    this->VehicleSpawnerPlayerDistanceCheck = 2500.00f;
    this->VehPreventRespawnUntilDistanceAwayFromPlayers = 10500.00f;
    this->TargetVehicleAmountPerPlayerBase = 4;
    this->RoadVehicleRelevantDistance = 12000.00f;
    this->SplinePlacementMaxDistance = 10000.00f;
    this->SplinePlacementMinDistance = 8000.00f;
}


