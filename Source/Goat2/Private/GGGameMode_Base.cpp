#include "GGGameMode_Base.h"

AGGGameMode_Base::AGGGameMode_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultPlayerName = FText::FromString(TEXT("Player"));
    this->NPCManagerClass = NULL;
    this->VehicleManagerClass = NULL;
    this->NPCEventManagerClass = NULL;
    this->SEPoolManagerClass = NULL;
    this->NPCManager = NULL;
    this->VehicleManager = NULL;
    this->NPCEventManager = NULL;
    this->SEPoolManager = NULL;
}

UGGVehicleManager* AGGGameMode_Base::GetVehicleManager() const {
    return NULL;
}

UGGStatusEffectPoolManager* AGGGameMode_Base::GetSEPoolManager() const {
    return NULL;
}

UGGNPCManager* AGGGameMode_Base::GetNPCManager() const {
    return NULL;
}

UGGNPCEventManager* AGGGameMode_Base::GetNPCEventManager() const {
    return NULL;
}


