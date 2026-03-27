#include "GGNPCVisualizer.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/StaticMeshComponent.h"

AGGNPCVisualizer::AGGNPCVisualizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    this->CurrentHeadRowIndex = 0;
    this->CurrentHeadMaterialRowIndex = 0;
    this->CurrentUpperBodyRowIndex = 0;
    this->CurrentUpperBodyMaterialRowIndex = 0;
    this->CurrentLowerBodyRowIndex = 0;
    this->CurrentLowerBodyMaterialRowIndex = 0;
    this->CurrentHairRowIndex = 0;
    this->CurrentHairMaterialRowIndex = 0;
    this->CurrentAccessoryRowIndex = 0;
    this->CurrentAccessoryMaterialRowIndex = 0;
    this->Hair = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hair"));
    this->Head = (USkeletalMeshComponent*)RootComponent;
    this->UpperBody = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Upper Body"));
    this->LowerBody = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Lower Body"));
    this->AccessoryMesh = NULL;
    this->CameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Spring Arm"));
    this->VisualizerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Customization Camera"));
    this->VisualizerCaptureCompoenent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Customization Capture Component"));
    this->HeadsTable = NULL;
    this->HairsTable = NULL;
    this->UpperBodiesTable = NULL;
    this->LowerBodiesTable = NULL;
    this->AccessoriesTable = NULL;
    this->AppearanceArray.AddDefaulted(5);
    this->CameraSpringArm->SetupAttachment(RootComponent);
    this->Hair->SetupAttachment(RootComponent);
    this->LowerBody->SetupAttachment(RootComponent);
    this->UpperBody->SetupAttachment(RootComponent);
    this->VisualizerCamera->SetupAttachment(CameraSpringArm);
    this->VisualizerCaptureCompoenent->SetupAttachment(VisualizerCamera);
}

void AGGNPCVisualizer::GoToNextUpperBody(bool bForward) {
}

void AGGNPCVisualizer::GoToNextLowerBody(bool bForward) {
}

void AGGNPCVisualizer::GoToNextHead(bool bForward) {
}

void AGGNPCVisualizer::GoToNextHair(bool bForward) {
}

void AGGNPCVisualizer::GoToNextAccessory(bool bForward) {
}

EGender AGGNPCVisualizer::GetVisualizerGender() {
    return EGender::G_None;
}

TArray<FString> AGGNPCVisualizer::GetAppearanceArray() {
    return TArray<FString>();
}


