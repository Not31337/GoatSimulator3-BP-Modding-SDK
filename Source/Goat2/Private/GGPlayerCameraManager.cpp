#include "GGPlayerCameraManager.h"

AGGPlayerCameraManager::AGGPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
}

bool AGGPlayerCameraManager::UpdatePlayerPostProcessComponent(FGameplayTag EffectIdentifier, FPostProcessSettings NewSettings) {
    return false;
}

void AGGPlayerCameraManager::RemovePlayerPostProcessComponent(FGameplayTag EffectIdentifier) {
}

void AGGPlayerCameraManager::OnPossessedGoatPhysicsVolumeChanged(APhysicsVolume* NewVolume) {
}

void AGGPlayerCameraManager::OnPawnPossessed(APawn* NewPawn) {
}

void AGGPlayerCameraManager::OnGoatRespawn(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter) {
}

void AGGPlayerCameraManager::OnControlledGoatReplicated(AGGGoat* NewControlledGoat) {
}

void AGGPlayerCameraManager::OnCameraShakeSettingChanged(FGGGameSetting& InSetting) {
}

EPostProcessCameraContext AGGPlayerCameraManager::GetCurrentCameraContext() {
    return EPostProcessCameraContext::PlayerCamera;
}

void AGGPlayerCameraManager::AddPlayerPostProcessComponent(FGameplayTag EffectIdentifier, FPostProcessSettings ComponentSettings, bool bPlayerCamVisible, bool bVehicleCamVisible, bool bWorldCamVisible) {
}


