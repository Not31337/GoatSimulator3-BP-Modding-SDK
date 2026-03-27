#include "GGJumpingPActor_Cockroach.h"

AGGJumpingPActor_Cockroach::AGGJumpingPActor_Cockroach(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bIsRadioactiveCockroach = false;
}


