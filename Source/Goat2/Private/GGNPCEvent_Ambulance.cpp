#include "GGNPCEvent_Ambulance.h"
#include "EEventType.h"

AGGNPCEvent_Ambulance::AGGNPCEvent_Ambulance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventType = EEventType::ET_Dynamic;
    this->HasDuration = true;
    this->bDestroyOnDurationEnd = true;
    this->bRemoveScaredNPCs = false;
    this->bRemoveAngryNPCs = false;
    this->bRemoveLovingNPCs = false;
    this->MaxSplineDistance = 5000.00f;
    this->SplineAdjustDistance = 2500.00f;
    this->AllowedSirenTimeWhileStuck = 10.00f;
    this->AmbulanceClass = NULL;
    this->MedicClass = NULL;
    this->ForceEjectWhenStuckFor = 8.00f;
    this->bDebug = false;
    this->PassedOutActor = NULL;
    this->PassedOutNPC = NULL;
    this->PassedOutGoat = NULL;
    this->MedicNPC = NULL;
    this->AmbulanceVehicle = NULL;
}

void AGGNPCEvent_Ambulance::OnReachedPathTargetLocation(AGGVehicle* Vehicle, FVector TargetLocation) {
}

void AGGNPCEvent_Ambulance::OnReachedPathTargetActor(AGGVehicle* Vehicle, AActor* TargetActor) {
}

void AGGNPCEvent_Ambulance::MedicExit() {
}


