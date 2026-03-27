#include "GGPhysicsProjectile_HotDog.h"

AGGPhysicsProjectile_HotDog::AGGPhysicsProjectile_HotDog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->BouncyHotDogClass = NULL;
}


