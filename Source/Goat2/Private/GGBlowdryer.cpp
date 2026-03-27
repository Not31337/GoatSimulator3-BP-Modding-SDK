#include "GGBlowdryer.h"

AGGBlowdryer::AGGBlowdryer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStayActiveAfterHit = true;
    this->bResolveSpecialHitResponseInChildClass = true;
    this->SpecialTargets.AddDefaulted(1);
    this->HairChangeDelay = 2.00f;
    this->bRemoveAccessoriesOnHairChange = true;
    this->AbilityComponent = NULL;
}


