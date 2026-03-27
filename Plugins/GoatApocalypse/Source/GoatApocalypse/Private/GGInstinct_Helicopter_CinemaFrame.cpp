#include "GGInstinct_Helicopter_CinemaFrame.h"

AGGInstinct_Helicopter_CinemaFrame::AGGInstinct_Helicopter_CinemaFrame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
    this->CinemaFrameActor = NULL;
}

void AGGInstinct_Helicopter_CinemaFrame::RemoveCinemaFrameActor() {
}

void AGGInstinct_Helicopter_CinemaFrame::OnCinemaFrameEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGGInstinct_Helicopter_CinemaFrame::OnCinemaFrameBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGGInstinct_Helicopter_CinemaFrame::AsignCinemaFrameActor(AActor* Actor, TEnumAsByte<EAxis::Type> InFrameForwardAxis) {
}


