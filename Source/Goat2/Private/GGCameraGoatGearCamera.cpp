#include "GGCameraGoatGearCamera.h"

AGGCameraGoatGearCamera::AGGCameraGoatGearCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->GearAbility = NULL;
    this->OwnerGoat = NULL;
    this->CurrentMoveRate = 500.00f;
    this->CurrentLookRate = 90.00f;
    this->MinMoveRate = 100.00f;
    this->MaxMoveRate = 1000.00f;
    this->MinTurnRate = 50.00f;
    this->MaxTurnRate = 720.00f;
    this->MinFocalLengthChangeRate = 1.00f;
    this->MaxFocalLengthChangeRate = 10.00f;
    this->FocalLengthRateChangeSteps = 10;
    this->FocalLengthChangeRate = 5.00f;
    this->MinFocusDistanceChangeRateChangeRate = 10.00f;
    this->MaxFocusDistanceChangeRateChangeRate = 1000.00f;
    this->FocusDistanceRateChangeSteps = 10;
    this->FocusDistanceChangeRate = 100.00f;
    this->ApertureChangeRate = 1.00f;
    this->SelectedActor = NULL;
    this->MoveRateSteps = 10;
    this->LookRateSteps = 10;
    this->bHelpToggled = false;
    this->bHoldingFocus = false;
    this->bHoldingFocalLength = false;
    this->bHoldingAperture = false;
}

void AGGCameraGoatGearCamera::MadeInactive_Implementation() {
}

void AGGCameraGoatGearCamera::InitCamera(UGGGearAbility_CameraGoat* InGearAbility) {
}

AActor* AGGCameraGoatGearCamera::GetTrackedActor() {
    return NULL;
}

AActor* AGGCameraGoatGearCamera::GetFocusedActor() {
    return NULL;
}


