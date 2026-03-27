#include "GGGoatKarts_ProceduralRaceTrack.h"
#include "Components/BillboardComponent.h"
#include "Components/SplineComponent.h"

AGGGoatKarts_ProceduralRaceTrack::AGGGoatKarts_ProceduralRaceTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Root"));
    this->TrackSpline = CreateDefaultSubobject<USplineComponent>(TEXT("Track Spline"));
    this->Root = (UBillboardComponent*)RootComponent;
    this->DesiredTrackLength = 2000.00f;
    this->NumberOfReTriesToGenerateTrack = 15;
    this->bMoveTowardsOppositeMapQuarter = true;
    this->SearchRadiusForFirstCheckpoint = 2000.00f;
    this->NumberOfAttemptsToFindLocationForCheckpoint = 10;
    this->CheckpointSearchAngle = 180.00f;
    this->MaxVerticalAngleBetweenCheckpoints = 45.00f;
    this->MaxVerticalDistanceBetweenCheckpoints = 1000.00f;
    this->CheckpointSnapDistanceToRoads = 2000.00f;
    this->RoadPercentageEstimate = 25.00f;
    this->RoadFollowCheckpointDistanceMultiplier = 0.50f;
    this->CheckpointClass = NULL;
    this->StartLineClass = NULL;
    this->FinishLineClass = NULL;
    this->FirstCheckpointIndex = 1;
    this->TraceDistance = 2000.00f;
    this->CheckpointAlignment = EGGRaceTrackCheckpointAlignment::CenterHit;
    this->TraceChannel = ECC_Vehicle;
    this->ClassesToIgnore.AddDefaulted(2);
    this->BlockingClasses.AddDefaulted(1);
    this->TrackSpline->SetupAttachment(RootComponent);
}

void AGGGoatKarts_ProceduralRaceTrack::ReplicateTrackSpline_Implementation(bool bIsSprint, const TArray<FVector_NetQuantize>& Locations, const TArray<FVector_NetQuantize>& UpVectors) {
}

void AGGGoatKarts_ProceduralRaceTrack::GenerateTrack() {
}


