#include "GGBenchmarkWaypoint.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

AGGBenchmarkWaypoint::AGGBenchmarkWaypoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visual Mesh"));
    this->WaypointTriggerAction = EWaypointTriggerAction::None;
    this->VisualMesh = (UStaticMeshComponent*)RootComponent;
    this->WaypointCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Waypoint Collider"));
    this->WaypointIndex = 0;
    this->WaypointCollider->SetupAttachment(RootComponent);
}

void AGGBenchmarkWaypoint::OnColliderOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


