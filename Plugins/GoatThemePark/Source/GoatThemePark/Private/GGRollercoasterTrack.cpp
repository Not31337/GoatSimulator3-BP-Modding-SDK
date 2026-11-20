#include "GGRollercoasterTrack.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "GGRideTrackNpcAnimInstance.h"

AGGRollercoasterTrack::AGGRollercoasterTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Mesh = NULL;
    this->MeshPlacement = EGGSplineMeshPlacement::EvenlySpaced;
    this->MeshForwardAxis = ESplineMeshAxis::X;
    this->TagRegularTrackPiece = TEXT("Track");
    this->CollisionProfileName = TEXT("BlockAll");
    this->bOnlyCreateSpecialTrackSections = false;
    this->DistanceToShowSplineDebugInfo = 1000.00f;
    this->ChainLiftAcceleration = 1000.00f;
    this->DestroyedSectionEndMesh = NULL;
    this->DestroyedSectionActorClass = NULL;
    this->DestroyedSectionOverlapVolumeWidth = 75.00f;
    this->DestroyedSectionOverlapVolumeAdditionalLength = 25.00f;
    this->NpcAnimInstanceClass = UGGRideTrackNpcAnimInstance::StaticClass();
    this->GrindsplineOffsetSockets.AddDefaulted(2);
    this->GrindableSplineDataAsset = NULL;
    this->Root = (USceneComponent*)RootComponent;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->TrackSplinesRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Track Splines Root"));
    this->ChainLiftsRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Chain Lifts Root"));
    this->HandrailsRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Handrails Root"));
    this->DestroyedSectionsRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Destroyed Sections Root"));
    this->ChainLiftsRoot->SetupAttachment(Spline);
    this->DestroyedSectionsRoot->SetupAttachment(Spline);
    this->HandrailsRoot->SetupAttachment(Spline);
    this->Spline->SetupAttachment(RootComponent);
    this->TrackSplinesRoot->SetupAttachment(Spline);
}

void AGGRollercoasterTrack::RepairAllTrackSections() {
}

void AGGRollercoasterTrack::OnDestroyedSectionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


UStaticMesh* AGGRollercoasterTrack::GetDestroyedSectionStartMesh() const {
    return NULL;
}

TArray<AGGRideTrackDestroyedSection*> AGGRollercoasterTrack::GetDestroyedSectionsActors() const {
    return TArray<AGGRideTrackDestroyedSection*>();
}

void AGGRollercoasterTrack::DestroyAllSplineMeshes() {
}


