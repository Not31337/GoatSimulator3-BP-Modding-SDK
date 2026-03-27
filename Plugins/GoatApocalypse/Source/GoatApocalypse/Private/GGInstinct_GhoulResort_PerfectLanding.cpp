#include "GGInstinct_GhoulResort_PerfectLanding.h"

AGGInstinct_GhoulResort_PerfectLanding::AGGInstinct_GhoulResort_PerfectLanding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
    this->MinAirTime = 3.00f;
    this->OverlapVolumeTopOfTheHead = NULL;
}

void AGGInstinct_GhoulResort_PerfectLanding::RemoveOverlapVolume() {
}

void AGGInstinct_GhoulResort_PerfectLanding::OnGoatPerfectLanding(AGGGoat* Goat, FVector Location) {
}

void AGGInstinct_GhoulResort_PerfectLanding::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGInstinct_GhoulResort_PerfectLanding::AsignOverlapVolume(UBoxComponent* InVolume) {
}


