#include "GGPlayerWorldAreaVolume.h"

AGGPlayerWorldAreaVolume::AGGPlayerWorldAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceUntilExit = 500.00f;
}

void AGGPlayerWorldAreaVolume::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


