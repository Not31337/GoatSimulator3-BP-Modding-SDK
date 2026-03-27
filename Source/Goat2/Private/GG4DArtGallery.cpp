#include "GG4DArtGallery.h"
#include "Components/SceneComponent.h"

AGG4DArtGallery::AGG4DArtGallery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->NumPoles = 2;
    this->PoleMesh = NULL;
    this->PoleDistanceFromCenter = 150.00f;
    this->PoleOneParameterName = TEXT("Pole 1");
    this->PoleTwoParameterName = TEXT("Pole 2");
    this->GateMesh = NULL;
    this->GateForwardAxis = ESplineMeshAxis::X;
    this->Root = (USceneComponent*)RootComponent;
    this->PoleRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PoleRoot"));
    this->ExhibitionsRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ExhibitionsRoot"));
    this->ExhibitionsRoot->SetupAttachment(RootComponent);
    this->PoleRoot->SetupAttachment(RootComponent);
}


