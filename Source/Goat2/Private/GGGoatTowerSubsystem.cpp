#include "GGGoatTowerSubsystem.h"

UGGGoatTowerSubsystem::UGGGoatTowerSubsystem() {
    this->LatestSynchronizedGoatTower = NULL;
}

void UGGGoatTowerSubsystem::OnGoatTowerSynchronised(AGGGoatTower* GoatTower, ETowerSynchronizationEvent SynchronizationEvent) {
}

bool UGGGoatTowerSubsystem::IsPrimaryTower(AGGGoatTower* GoatTower) {
    return false;
}

AGGGoatTower* UGGGoatTowerSubsystem::GetLatestSynchronizedGoatTower() const {
    return NULL;
}

TArray<AGGGoatTower*> UGGGoatTowerSubsystem::GetGoatTowers() const {
    return TArray<AGGGoatTower*>();
}

AGGGoatTower* UGGGoatTowerSubsystem::GetGoatTowerFromID(const FString& TowerID) {
    return NULL;
}

AGGGoatTower* UGGGoatTowerSubsystem::GetFirstSynchronizedGoatTower() const {
    return NULL;
}

AGGGoatTower* UGGGoatTowerSubsystem::GetClosestGoatTower(AActor* ToActor) {
    return NULL;
}

void UGGGoatTowerSubsystem::AddGoatTower(AGGGoatTower* GoatTower) {
}


