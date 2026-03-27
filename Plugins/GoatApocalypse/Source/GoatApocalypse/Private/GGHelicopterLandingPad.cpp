#include "GGHelicopterLandingPad.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGHelicopterLandingPad::AGGHelicopterLandingPad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TimeToToggleDoors = 6.00f;
    this->LandingPadMoveDelay = 1.50f;
    this->LandingPadEasingFunction = EEasingFunc::Step;
    this->DoorsEasingFunction = EEasingFunc::Step;
    this->DoorMoveDistance = 500.00f;
    this->bSpawnHelicopterInBeginPlay = true;
    this->HelicopterClass = NULL;
    this->CurrentStateServer = EGGLandingpadState::Closed;
    this->Root = (USceneComponent*)RootComponent;
    this->OverlapArea = CreateDefaultSubobject<USphereComponent>(TEXT("Overlap Area"));
    this->SpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Location"));
    this->LandingPad = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Landing Pad"));
    this->DoorOffset = CreateDefaultSubobject<USceneComponent>(TEXT("Door Offset"));
    this->TopDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Top Door"));
    this->BottomDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bottom Door"));
    this->LeftDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Left Door"));
    this->RightDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Right Door"));
    this->BottomDoor->SetupAttachment(DoorOffset);
    this->DoorOffset->SetupAttachment(RootComponent);
    this->LandingPad->SetupAttachment(RootComponent);
    this->LeftDoor->SetupAttachment(DoorOffset);
    this->OverlapArea->SetupAttachment(LandingPad);
    this->RightDoor->SetupAttachment(DoorOffset);
    this->SpawnLocation->SetupAttachment(LandingPad);
    this->TopDoor->SetupAttachment(DoorOffset);
}

void AGGHelicopterLandingPad::ToggleLandingPad() {
}

AGGVehicle_Helicopter* AGGHelicopterLandingPad::SpawnHelicopter() {
    return NULL;
}

void AGGHelicopterLandingPad::OnRep_CurrentState(EGGLandingpadState OldState) {
}

void AGGHelicopterLandingPad::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGHelicopterLandingPad, CurrentStateServer);
}


