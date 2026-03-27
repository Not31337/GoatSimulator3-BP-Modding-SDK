#include "GGWorldAreaVolume.h"

AGGWorldAreaVolume::AGGWorldAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LogOverlaps = false;
}

void AGGWorldAreaVolume::OverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGWorldAreaVolume::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


