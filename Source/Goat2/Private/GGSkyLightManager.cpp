#include "GGSkyLightManager.h"
#include "Net/UnrealNetwork.h"

AGGSkyLightManager::AGGSkyLightManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bSunState = false;
}

void AGGSkyLightManager::TurnOnSun() {
}

void AGGSkyLightManager::TurnOffSun() {
}



void AGGSkyLightManager::OnRep_SunState() {
}

void AGGSkyLightManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGSkyLightManager, bSunState);
}


