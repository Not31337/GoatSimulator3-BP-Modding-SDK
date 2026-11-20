#include "GGGoatGear_Horns_SpawnBalloon.h"

UGGGoatGear_Horns_SpawnBalloon::UGGGoatGear_Horns_SpawnBalloon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MontageSpawnBalloonLeft = NULL;
    this->MontageSpawnBalloonRight = NULL;
    this->PointPlacedVFX = NULL;
}

void UGGGoatGear_Horns_SpawnBalloon::Multicast_PlayPointPlacedVFX_Implementation(FName SocketName) {
}

void UGGGoatGear_Horns_SpawnBalloon::Multicast_PlayBalloonSpawnMontage_Implementation(bool bLeft) {
}


