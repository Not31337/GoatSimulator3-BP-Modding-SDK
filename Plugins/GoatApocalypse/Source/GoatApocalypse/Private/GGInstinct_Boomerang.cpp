#include "GGInstinct_Boomerang.h"

AGGInstinct_Boomerang::AGGInstinct_Boomerang(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
    this->RequiredNumTargetsToHit = 6;
}


