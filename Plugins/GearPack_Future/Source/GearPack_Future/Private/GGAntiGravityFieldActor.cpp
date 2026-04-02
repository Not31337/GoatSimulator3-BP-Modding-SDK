#include "GGAntiGravityFieldActor.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

AGGAntiGravityFieldActor::AGGAntiGravityFieldActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollisionComponent"));
    this->StatusEffectToApply = NULL;
    this->Mesh->SetupAttachment(RootComponent);
    this->SphereCollision->SetupAttachment(RootComponent);
}


