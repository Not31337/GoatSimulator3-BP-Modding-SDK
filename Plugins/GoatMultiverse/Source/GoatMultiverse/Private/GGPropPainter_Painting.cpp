#include "GGPropPainter_Painting.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"
#include "GGStaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGPropPainter_Painting::AGGPropPainter_Painting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->MeshComponent = CreateDefaultSubobject<UGGStaticMeshComponent>(TEXT("Mesh"));
    this->PropDragAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("PropLickAudioComponent"));
    this->DragDistanceToBecomePhysicsActor = 400.00f;
    this->LastDragDistance = 0;
    this->DragAudioComponentTs = 0.00f;
    this->DragAudioComponentFadeTime = 0.10f;
    this->MeshLickSound = NULL;
    this->MeshPopSound = NULL;
    this->MeshPaintParticles = NULL;
    this->MeshLickParticles = NULL;
    this->MeshPopParticles = NULL;
    this->MeshClass = NULL;
    this->PoppedPaintingClass = NULL;
    this->MeshComponent->SetupAttachment(RootComponent);
    this->PropDragAudioComponent->SetupAttachment(RootComponent);
}

void AGGPropPainter_Painting::OnRep_MeshClass() {
}

void AGGPropPainter_Painting::OnMeshLicked(AActor* LickedActor, AGGGoat* LickingGoat) {
}

void AGGPropPainter_Painting::OnMeshDropped(AActor* LickedActor, AGGGoat* LickingGoat) {
}

void AGGPropPainter_Painting::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPropPainter_Painting, MeshClass);
}


