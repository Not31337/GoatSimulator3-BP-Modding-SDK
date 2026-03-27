#include "AnimNotifyState_GGAnimationActor.h"
#include "GGAnimationActor.h"

UAnimNotifyState_GGAnimationActor::UAnimNotifyState_GGAnimationActor() {
    this->AnimationActorClass = AGGAnimationActor::StaticClass();
    this->bOverrideMesh = false;
    this->OverrideStaticMesh = NULL;
    this->OverrideSkeletalMesh = NULL;
    this->bDropOnRagdoll = false;
    this->bRemoveOnRagdoll = true;
    this->DroppedLifespan = 10.00f;
    this->bHideRightHandActor = false;
    this->bHideLeftHandActor = false;
}


