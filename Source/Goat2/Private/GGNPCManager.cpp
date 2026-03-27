#include "GGNPCManager.h"
#include "Templates/SubclassOf.h"

UGGNPCManager::UGGNPCManager() {
    this->LogSpawnerGathering = false;
    this->ManageInterval = 1.00f;
    this->ImpulseRelevantTime = 5.00f;
    this->ForceRelevantFor = 2.00f;
    this->HighVelocityThreshold = 1500.00f;
    this->HighVelocityMultiplier = 3.00f;
    this->MaxCiviliansPerUpdate = 3;
    this->MaxEnvironmentalsPerUpdate = 3;
    this->MaxImportantEnvironmentalsPerUpdate = 3;
    this->MaxProfessionalsPerUpdate = 3;
    this->MaxAnimalsPerUpdate = 3;
    this->MaxImportantAnimalsPerUpdate = 3;
    this->CurrentConfigAsset = NULL;
    this->ConfigAsset = NULL;
    this->Gen8ConfigAsset = NULL;
    this->MobileConfigAsset = NULL;
    this->SwitchConfigAsset = NULL;
    this->HardCivilianClass = NULL;
    this->HardEnvironmentalClass = NULL;
    this->VehicleManager = NULL;
}

void UGGNPCManager::RemoveProfessionalFromSpawnPool(TSubclassOf<AGGNPC_Humanoid> ProfessionalClass) {
}

void UGGNPCManager::PoolNPC(AGGNPC* NPC, EPoolReason Reason) {
}

bool UGGNPCManager::LocationOverlappingVehicle(FVector Location, float Radius) {
    return false;
}

bool UGGNPCManager::GetShouldNPCManage() const {
    return false;
}

TArray<AGGNPC*> UGGNPCManager::GetPooledSpecialNPCs() const {
    return TArray<AGGNPC*>();
}

TArray<AGGNPC*> UGGNPCManager::GetPooledProfessionalNPCs() const {
    return TArray<AGGNPC*>();
}

AGGNPC* UGGNPCManager::GetPooledNPC(ENPCType Type, TSubclassOf<AGGNPC> SpecialNPCClass, TSubclassOf<AGGNPC> ProfessionalClass, TSubclassOf<AGGNPC_Animal> AnimalClass, bool bRemoveFromArray) {
    return NULL;
}

TArray<AGGNPC*> UGGNPCManager::GetPooledEnvironmentalNPCs() const {
    return TArray<AGGNPC*>();
}

TArray<AGGNPC*> UGGNPCManager::GetPooledCivilianNPCs() const {
    return TArray<AGGNPC*>();
}

TArray<AGGNPC*> UGGNPCManager::GetPooledAnimalNPCs() const {
    return TArray<AGGNPC*>();
}

TArray<AGGNPC*> UGGNPCManager::GetNPCsInRadius_BP(FVector Location, float Radius, TArray<TSubclassOf<AGGNPC>> SpecificClasses, TArray<AGGNPC*> IgnoredNPCs) {
    return TArray<AGGNPC*>();
}

bool UGGNPCManager::GetNPCsDisabled() const {
    return false;
}

UGGNPCManager* UGGNPCManager::GetNPCManager(const UObject* WorldContextObject) {
    return NULL;
}

UGGNPCManagerConfigAsset* UGGNPCManager::GetCurrentConfigAsset() const {
    return NULL;
}

TArray<AGGNPC*> UGGNPCManager::GetAllNPCs() const {
    return TArray<AGGNPC*>();
}

TArray<AGGNPC*> UGGNPCManager::GetAllActiveNPCs(bool bIncludeAnimals) {
    return TArray<AGGNPC*>();
}

TArray<AGGNPC*> UGGNPCManager::GetActiveSpecialNPCs() const {
    return TArray<AGGNPC*>();
}

TArray<AGGNPC*> UGGNPCManager::GetActiveProfessionalNPCs() const {
    return TArray<AGGNPC*>();
}

TArray<AGGNPC*> UGGNPCManager::GetActiveEnvironmentalNPCs() const {
    return TArray<AGGNPC*>();
}

TArray<AGGNPC*> UGGNPCManager::GetActiveDriverCivsNPCs() const {
    return TArray<AGGNPC*>();
}

TArray<AGGNPC*> UGGNPCManager::GetActiveCivilianNPCs() const {
    return TArray<AGGNPC*>();
}

TArray<AGGNPC*> UGGNPCManager::GetActiveAnimalNPCs() const {
    return TArray<AGGNPC*>();
}

void UGGNPCManager::ChangeNPCRelevantDistMobile(bool bIncrease) {
}

void UGGNPCManager::AddProfessionalToSpawnPool(TSubclassOf<AGGNPC_Humanoid> ProfessionalClass, int32 Weight, EMoods StartMood) {
}

void UGGNPCManager::AddNPCToAll(AGGNPC* NPC) {
}

void UGGNPCManager::AddActiveNPC(AGGNPC* NPC) {
}

bool UGGNPCManager::ActorHiddenForPlayers(TArray<AGGPlayerController*> Controllers, AActor* Actor) {
    return false;
}

bool UGGNPCManager::ActorBlockedForPlayers(TArray<AGGPlayerController*> Controllers, AActor* Actor) {
    return false;
}

bool UGGNPCManager::ActorBlockedForPlayer(AGGPlayerController* Controller, AActor* Actor) {
    return false;
}

bool UGGNPCManager::ActorBehindPlayers(TArray<AGGPlayerController*> Controllers, AActor* Actor) {
    return false;
}

bool UGGNPCManager::ActorBehindPlayer(AGGPlayerController* Controller, AActor* Actor) {
    return false;
}


