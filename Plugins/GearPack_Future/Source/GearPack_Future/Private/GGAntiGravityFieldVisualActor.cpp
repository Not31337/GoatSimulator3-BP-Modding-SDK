#include "GGAntiGravityFieldVisualActor.h"
#include "Components/StaticMeshComponent.h"

AGGAntiGravityFieldVisualActor::AGGAntiGravityFieldVisualActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FieldMesh"));
    this->FieldMesh = (UStaticMeshComponent*)RootComponent;
    this->bIsDeactivating = false;
    this->AssignedFieldActor = NULL;
}



void AGGAntiGravityFieldVisualActor::OnAssignedFieldActorDestroy(AActor* Actor) {
}


