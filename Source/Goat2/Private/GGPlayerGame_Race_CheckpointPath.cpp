#include "GGPlayerGame_Race_CheckpointPath.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AGGPlayerGame_Race_CheckpointPath::AGGPlayerGame_Race_CheckpointPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("CheckpointPath"));
    this->CheckpointClass = NULL;
    this->bSnapSplineToGround = true;
    this->GroundTestChannel = ECC_Visibility;
    this->Spline->SetupAttachment(RootComponent);
}

void AGGPlayerGame_Race_CheckpointPath::SpawnCheckpoints() {
}

void AGGPlayerGame_Race_CheckpointPath::ResetCheckpointOverlaps(const AGGVehicle* Vehicle, bool bUnHideCheckpoints) {
}

void AGGPlayerGame_Race_CheckpointPath::OnCheckpointBeginOverlap(AActor* OverlappedCheckpoint, AActor* OtherActor) {
}

void AGGPlayerGame_Race_CheckpointPath::MulticastSpawnCheckpoints_Implementation() {
}

void AGGPlayerGame_Race_CheckpointPath::MulticastDestroyCheckpoints_Implementation() {
}

void AGGPlayerGame_Race_CheckpointPath::DestroyCheckpoints() {
}


