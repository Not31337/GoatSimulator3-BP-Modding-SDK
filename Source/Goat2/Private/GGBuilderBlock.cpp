#include "GGBuilderBlock.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AGGBuilderBlock::AGGBuilderBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->BlockMesh->SetupAttachment(RootComponent);
}


