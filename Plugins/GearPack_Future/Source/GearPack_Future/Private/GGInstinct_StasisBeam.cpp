#include "GGInstinct_StasisBeam.h"

AGGInstinct_StasisBeam::AGGInstinct_StasisBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
    this->LandOnStasisForInstinct = 10;
}

void AGGInstinct_StasisBeam::OnGoatLanded(AGGGoat* Goat, AActor* FloorActor, UPrimitiveComponent* FloorComponent) {
}


