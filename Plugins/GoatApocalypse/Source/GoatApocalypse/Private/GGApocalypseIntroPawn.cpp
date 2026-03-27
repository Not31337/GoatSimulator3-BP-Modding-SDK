#include "GGApocalypseIntroPawn.h"
#include "Camera/CameraComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AGGApocalypseIntroPawn::AGGApocalypseIntroPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->Root = (USceneComponent*)RootComponent;
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->ControllingPlayer = NULL;
    this->CameraComponent->SetupAttachment(MeshComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
}


