#include "GGExponentialFogTrigger.h"

AGGExponentialFogTrigger::AGGExponentialFogTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FogActivationCheckDelay = 0.25f;
    this->bShowBoxBounds = false;
    this->HeightFogInWorld = NULL;
    this->HeightFogComp = NULL;
}

void AGGExponentialFogTrigger::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGGExponentialFogTrigger::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGGExponentialFogTrigger::CheckIfFogShouldBeChanged() const {
}


