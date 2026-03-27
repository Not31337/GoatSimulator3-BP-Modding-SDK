#include "GGGearCustomizationCamera.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"

AGGGearCustomizationCamera::AGGGearCustomizationCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->GoatToFocus = NULL;
    this->ViewportSizePercentage = 0.44f;
    this->CameraChangeTime = 0.00f;
    this->GearSlotChangeSpeed = 3.00f;
    this->bUseConstantInterpolation = false;
    this->bUpdateCameraLocationInTick = false;
    this->bUseCurrentSocketLocationForFocus = true;
    this->bFocusOnGearSlots = false;
    this->FocusPointDeadZone = 10.00f;
    this->bKeepLightsAtConstantDistanceFromGoat = false;
    this->Root = (USceneComponent*)RootComponent;
    this->SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->CameraComponent->SetupAttachment(SpringArmComponent);
    this->SpringArmComponent->SetupAttachment(RootComponent);
}

void AGGGearCustomizationCamera::UpdateFocusPointSizeAndLocation(bool bIgnoreFocusPointDeadzone) {
}

void AGGGearCustomizationCamera::SetGoatSocketToFocus(EGoatSockets GoatSocket) {
}

void AGGGearCustomizationCamera::SetGearSlotToFocus(EGearSlot GearSlot) {
}

void AGGGearCustomizationCamera::OnGoatUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void AGGGearCustomizationCamera::OnGoatRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}


