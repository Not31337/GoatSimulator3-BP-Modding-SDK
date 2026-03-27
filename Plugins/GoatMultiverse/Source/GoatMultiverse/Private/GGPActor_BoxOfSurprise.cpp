#include "GGPActor_BoxOfSurprise.h"

AGGPActor_BoxOfSurprise::AGGPActor_BoxOfSurprise(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ScaleUpSpeed = 4.00f;
    this->SeekerAimRadius = 10000.00f;
    this->SeekingDelayAfterLaunch = 1.50f;
    this->DropImpulse = 1000.00f;
    this->LaunchAngularImpulse = 500.00f;
    this->FlattenStatusEffectClass = NULL;
}


