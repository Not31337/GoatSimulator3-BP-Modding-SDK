#include "GGWaypointSubsystem.h"

UGGWaypointSubsystem::UGGWaypointSubsystem() {
    this->PlayerController = NULL;
    this->PlayerGoat = NULL;
}

void UGGWaypointSubsystem::PostLoadMapWithWorld(UWorld* World) {
}

void UGGWaypointSubsystem::OnPlayerWorldAreaExited(AGGGoat* Goat, FGameplayTag LeftArea) {
}

void UGGWaypointSubsystem::OnPlayerWorldAreaEntered(AGGGoat* Goat, FGameplayTag NewArea) {
}

void UGGWaypointSubsystem::OnGoatReplaced(AGGGoat* OldGoat, AGGGoat* NewGoat) {
}

void UGGWaypointSubsystem::OnBenchmarkLevelLoaded() {
}


