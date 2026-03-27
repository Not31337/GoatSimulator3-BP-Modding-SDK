#include "GGVehicleRamp.h"

AGGVehicleRamp::AGGVehicleRamp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestID = TEXT("UnnamedSecretSplash");
    this->QuestProgressTiers.AddDefaulted(1);
    this->UnreadMenuCategory = TEXT("achievements");
}


