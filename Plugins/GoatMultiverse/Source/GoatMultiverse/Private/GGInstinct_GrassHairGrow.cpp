#include "GGInstinct_GrassHairGrow.h"
#include "Templates/SubclassOf.h"

AGGInstinct_GrassHairGrow::AGGInstinct_GrassHairGrow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_GrassHairGrow::OnGearUnEquipped(AGGGoat* Goat, const TArray<TSubclassOf<USceneComponent>>& GearEquipped) {
}


