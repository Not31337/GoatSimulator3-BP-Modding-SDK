#include "GGPlayerGame_CarRace_StartLine.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"

AGGPlayerGame_CarRace_StartLine::AGGPlayerGame_CarRace_StartLine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->CheckpointPath = NULL;
    this->VehicleClass = NULL;
    this->PreviewMeshOverride = NULL;
    this->StartPositionSetup = EStartPositionSetup::OneLine;
    this->SpacingBetweenVehicles = 300.00f;
    this->NumberOfRounds = 1;
    this->TimeLimitPerRound = 60.00f;
    this->PreviewMeshes.AddDefaulted(4);
    this->TextRenderComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text Render"));
    this->TextRenderComponent->SetupAttachment(RootComponent);
}

FTransform AGGPlayerGame_CarRace_StartLine::GetStartLocation(int32 PlayerIndex) {
    return FTransform{};
}


