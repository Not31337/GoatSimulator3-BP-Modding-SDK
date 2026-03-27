#include "GGLandscapeSurfingComponent.h"

UGGLandscapeSurfingComponent::UGGLandscapeSurfingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrindableSplineActorClass = NULL;
    this->GrindableSplineActor = NULL;
    this->OwningGoat = NULL;
}


