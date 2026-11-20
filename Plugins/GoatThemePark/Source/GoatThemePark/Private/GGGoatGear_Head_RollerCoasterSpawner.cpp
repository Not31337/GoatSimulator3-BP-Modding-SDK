#include "GGGoatGear_Head_RollerCoasterSpawner.h"

UGGGoatGear_Head_RollerCoasterSpawner::UGGGoatGear_Head_RollerCoasterSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StyleMaterial = NULL;
    this->SpawnerMontage = NULL;
    this->StartSectionName = TEXT("Start");
    this->LoopSectionName = TEXT("Loop");
    this->EndSectionName = TEXT("End");
    this->PointPlacedVFX = NULL;
}

void UGGGoatGear_Head_RollerCoasterSpawner::Multicast_PlaySpawnerMontage_Implementation() {
}

void UGGGoatGear_Head_RollerCoasterSpawner::Multicast_PlayPointPlacedVFX_Implementation() {
}

void UGGGoatGear_Head_RollerCoasterSpawner::Multicast_JumpToEndSection_Implementation() {
}


