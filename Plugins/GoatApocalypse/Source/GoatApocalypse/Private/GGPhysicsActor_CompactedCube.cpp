#include "GGPhysicsActor_CompactedCube.h"
#include "Components/AudioComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AGGPhysicsActor_CompactedCube::AGGPhysicsActor_CompactedCube(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bCanBeOptimized = false;
    this->bCanChangeTickRate = false;
    this->HighlightMesh = NULL;
    this->MaterialInvalidConnection = NULL;
    this->SnapSpeed = 10.00f;
    this->GridBrakesAppartEffect = NULL;
    this->FadeOutHighlightMeshEffect = NULL;
    this->DurationToFadeOutHighlightMesh = 0.30f;
    this->MuffledSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Muffled Sound"));
    this->MadeFrom = EGGCubeMadeFrom::PActor;
    this->AttachmentPointClass = NULL;
    this->AttachedTo = NULL;
    this->MuffledSound->SetupAttachment(RootComponent);
}

AGGPhysicsActor_CompactedCube* AGGPhysicsActor_CompactedCube::TurnActorIntoCube(AActor* InActor, FTransform SpawnTransform, TSubclassOf<AGGPhysicsActor_CompactedCube> CompactedCubeClass) {
    return NULL;
}

void AGGPhysicsActor_CompactedCube::PlayMuffledSound() {
}

void AGGPhysicsActor_CompactedCube::OnRep_MadeFrom() {
}

void AGGPhysicsActor_CompactedCube::OnRep_BrokeFromCubeGrid() {
}

void AGGPhysicsActor_CompactedCube::OnRep_AttachedMeshes(const TArray<FGGAttachedMesh>& OldValue) {
}

void AGGPhysicsActor_CompactedCube::OnLicked(AActor* LickedActor, AGGGoat* LickingGoat) {
}

void AGGPhysicsActor_CompactedCube::OnHeadbutted(UObject* HeadbuttedObject, AGGGoat* HeadbuttingGoat) {
}

void AGGPhysicsActor_CompactedCube::OnDropped(AActor* LickedActor, AGGGoat* LickingGoat) {
}

void AGGPhysicsActor_CompactedCube::MulticastAttachToAttachmentPoint_Implementation(const FGGAttachPoints& AttachPoints, const FTransform& AttachTransform) {
}

void AGGPhysicsActor_CompactedCube::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPhysicsActor_CompactedCube, MadeFrom);
    DOREPLIFETIME(AGGPhysicsActor_CompactedCube, AttachedMeshes);
    DOREPLIFETIME(AGGPhysicsActor_CompactedCube, BrokeFromCubeGrid);
}


