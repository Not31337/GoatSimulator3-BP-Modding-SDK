#include "GGGoatGear_Static_VRHeadset.h"
#include "Camera/CameraComponent.h"

UGGGoatGear_Static_VRHeadset::UGGGoatGear_Static_VRHeadset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasPassiveEffect = true;
    this->FPSCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPSCamera"));
    this->TimeToVR = 5.00f;
    this->MainCamera = NULL;
}

void UGGGoatGear_Static_VRHeadset::TriggerVRInstinct() {
}

void UGGGoatGear_Static_VRHeadset::OnGearUpdated(AGGGoat* DaGoat, const TArray<USceneComponent*>& CurrentGoatGear) {
}


