#include "GGPhysicsActor_Plushies.h"

AGGPhysicsActor_Plushies::AGGPhysicsActor_Plushies(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->AssociatedRegisterComponent = NULL;
}


