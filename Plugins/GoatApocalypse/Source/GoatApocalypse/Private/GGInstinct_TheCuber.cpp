#include "GGInstinct_TheCuber.h"
#include "EInstinctType.h"

AGGInstinct_TheCuber::AGGInstinct_TheCuber(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
    this->InstinctType = EInstinctType::Gear;
    this->bRequireGearUnlocked = true;
    this->bHasProgress = true;
}

void AGGInstinct_TheCuber::OnCubeCountChanged(AGGPhysicsActor_CompactedCube* Cube) {
}


