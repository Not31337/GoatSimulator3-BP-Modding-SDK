#include "GGDrivingRange.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AGGDrivingRange::AGGDrivingRange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform Mesh"));
    this->SpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Point"));
    this->BoxOverlap = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Overlap"));
    this->BallClass = NULL;
    this->PropGolfComp = NULL;
    this->ScoreWidget = NULL;
    this->CurrentSpawnedBall = NULL;
    this->Widget = NULL;
    this->BoxOverlap->SetupAttachment(RootComponent);
    this->PlatformMesh->SetupAttachment(RootComponent);
    this->SpawnPoint->SetupAttachment(RootComponent);
}

void AGGDrivingRange::OverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGDrivingRange::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGDrivingRange::OnPActorBeingDestroyed(AActor* PActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AGGDrivingRange::OnBallHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


