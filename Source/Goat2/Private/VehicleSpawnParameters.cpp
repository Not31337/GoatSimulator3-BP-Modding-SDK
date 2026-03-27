#include "VehicleSpawnParameters.h"

FVehicleSpawnParameters::FVehicleSpawnParameters() {
    this->bForceRelevant = false;
    this->bCanGetFromPool = false;
    this->CollisionHandling = ESpawnActorCollisionHandlingMethod::Undefined;
    this->bGenerateNewAppearance = false;
    this->DefaultState = EVehicleDefaultState::VDS_Idle;
    this->VehicleSpawner = NULL;
    this->bCanBypassMaxNum = false;
    this->bSpawnIncremental = false;
}

