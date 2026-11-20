#include "GGCurrencySubsystem.h"

UGGCurrencySubsystem::UGGCurrencySubsystem() {
    this->MapFilterNames.AddDefaulted(2);
    this->MaxRandomActorSpawns = 20;
    this->MinRandomActorSpawns = 5;
    this->MobileMaxRandomActorSpawns = 10;
    this->MobileMinRandomActorSpawns = 2;
    this->DistCheckInterval = 0.50f;
}

void UGGCurrencySubsystem::SpawnCurrency(int32 Amount, FVector InLocation, bool bIsImportant) {
}

void UGGCurrencySubsystem::PoolCurrencyActor(AGGCurrencyActor* InCurrencyActor) {
}

void UGGCurrencySubsystem::OnVehicleExploded(AGGVehicle* Vehicle) {
}

void UGGCurrencySubsystem::OnNPCSpawnedIntoWorld(AGGNPC* NPC) {
}

void UGGCurrencySubsystem::OnCurrencyEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


