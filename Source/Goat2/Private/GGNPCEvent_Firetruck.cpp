#include "GGNPCEvent_Firetruck.h"
#include "EEventType.h"

AGGNPCEvent_Firetruck::AGGNPCEvent_Firetruck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventType = EEventType::ET_Dynamic;
    this->HasDuration = true;
    this->bDestroyOnDurationEnd = true;
    this->bRemoveScaredNPCs = false;
    this->bRemoveAngryNPCs = false;
    this->bRemoveLovingNPCs = false;
    this->MaxSplineDistance = 5000.00f;
    this->SplineAdjustDistance = 2500.00f;
    this->VehicleHeightSpawnAdjust = 225.00f;
    this->FiretruckClass = NULL;
    this->FirefighterClass = NULL;
    this->ForceEjectWhenStuckFor = 8.00f;
    this->AllowedSirenTimeWhileStuck = 10.00f;
    this->bDebug = false;
    this->FirefighterNPC = NULL;
    this->FirefighterNPCPassenger = NULL;
    this->FiretruckVehicle = NULL;
}

void AGGNPCEvent_Firetruck::OnReachedPathTargetLocation(AGGVehicle* Vehicle, FVector TargetLocation) {
}

void AGGNPCEvent_Firetruck::FirefighterExit() {
}


