#include "GGWaterPhysicsVolume_Toxic.h"

AGGWaterPhysicsVolume_Toxic::AGGWaterPhysicsVolume_Toxic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SignificanceRange = 15000.00f;
    this->ExtraLimbComponentClass = NULL;
    this->RadioactiveHornsGear = NULL;
}


