#include "GGGoatGear_Static_Spooky.h"

UGGGoatGear_Static_Spooky::UGGGoatGear_Static_Spooky(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VerticalFloatSpeed = 1.00f;
    this->HorizontalFloatSpeed = 300.00f;
    this->FloatHeight = 200.00f;
    this->Acceleration = 50.00f;
    this->SpookyEffectsActorClass = NULL;
    this->SpookyEffectsActor = NULL;
}


