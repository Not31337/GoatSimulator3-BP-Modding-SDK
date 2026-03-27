#include "BTService_GGLookForCharacter.h"

UBTService_GGLookForCharacter::UBTService_GGLookForCharacter() {
    this->NodeName = TEXT("Look For Character");
    this->LookFor = ELookForCharacter::LFC_Goat;
    this->SetTargetAfterSeconds = 0.00f;
    this->bSetInstantlyIfKeyIsTrue = false;
    this->bRemoveTargetActorWhenOutOfSight = true;
    this->WhenOutOfSightFor = 0.00f;
    this->bDontSetTargetIfWearingDisguise = false;
}


