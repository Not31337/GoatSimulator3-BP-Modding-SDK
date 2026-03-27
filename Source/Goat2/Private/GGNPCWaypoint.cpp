#include "GGNPCWaypoint.h"
#include "Components/SceneComponent.h"

AGGNPCWaypoint::AGGNPCWaypoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
    this->RootComp = (USceneComponent*)RootComponent;
    this->bEnabled = true;
    this->RotationSetting = ERotationSetting::RS_WaypointRotation;
    this->WaypointWaitTime = 5.00f;
    this->WaypointWaitDeviation = 0.00f;
    this->bDisplayInGame = false;
    this->AnimationSettings = EAnimationSetting::AS_NoAnimation;
    this->Montage = NULL;
    this->StartCallbackID = -1;
    this->CallbackID = -1;
    this->bMontageBlocking = true;
    this->bStopMontageWhenWaypointReset = false;
    this->PreAnimationWaitTime = 0.00f;
    this->LookAtDistance = 0.00f;
    this->bCanEditAnim = false;
    this->bCanEditMontage = false;
    this->bCanEditAnimations = false;
    this->bCanEditMontageArray = false;
}




