#include "GGGoatKarts_PreMadeRaceTrack.h"
#include "Components/BillboardComponent.h"
#include "Components/SplineComponent.h"

AGGGoatKarts_PreMadeRaceTrack::AGGGoatKarts_PreMadeRaceTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Root"));
    this->TrackSpline = CreateDefaultSubobject<USplineComponent>(TEXT("Track Spline"));
    this->Root = (USceneComponent*)RootComponent;
    this->CheckpointClass = NULL;
    this->StartLineClass = NULL;
    this->FinishLineClass = NULL;
    this->FirstCheckpointIndex = 1;
    this->TrackSpline->SetupAttachment(RootComponent);
}

void AGGGoatKarts_PreMadeRaceTrack::MulticastSpawnCheckpoints_Implementation() {
}

void AGGGoatKarts_PreMadeRaceTrack::DebugSpawnCheckpoints() {
}

void AGGGoatKarts_PreMadeRaceTrack::DebugDestroyCheckpoints() {
}


