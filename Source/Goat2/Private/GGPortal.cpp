#include "GGPortal.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AGGPortal::AGGPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->PortalSceneCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent"));
    this->ForwardDirectionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ForwardDirectionArrow"));
    this->PortalMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->OverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapBox"));
    this->CollisionBoxBehindPortal = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBoxBehindPortal"));
    this->RenderScale = 1.00f;
    this->NumRenderMipLevels = 10;
    this->ScreenSizeAtHighestMip = 0.45f;
    this->ScreenSizeRenderThreshold = 0.01f;
    this->ConnectedPortal = NULL;
    this->bShowDebug = false;
    this->bGenerateMesh = false;
    this->bEnableTeleportation = true;
    this->bEnableFrameCapture = true;
    this->PortalRenderMaterial = NULL;
    this->PortalMaterialInstance = NULL;
    this->CollisionBoxBehindPortal->SetupAttachment(PortalMesh);
    this->ForwardDirectionArrow->SetupAttachment(PortalMesh);
    this->OverlapBox->SetupAttachment(PortalMesh);
    this->PortalMesh->SetupAttachment(RootComponent);
    this->PortalSceneCapture->SetupAttachment(RootComponent);
}

void AGGPortal::TeleportActor(AActor* Actor) {
}

void AGGPortal::OnOverlapBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGPortal::OnOverlapBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGPortal::OnConnectedPortalDestroyed(AActor* DestroyedPortal) {
}

void AGGPortal::OnCollisionDisableBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGPortal::OnCollisionDisableBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGPortal::ConnectToPortal(AGGPortal* OtherPortal) {
}

FVector AGGPortal::ChangeVelocity(const FVector& Velocity) const {
    return FVector{};
}

FTransform AGGPortal::ChangeTransform(const FTransform& Transform) const {
    return FTransform{};
}

float AGGPortal::ChangeScale() const {
    return 0.0f;
}

FRotator AGGPortal::ChangeRotation(const FRotator& Rotation) const {
    return FRotator{};
}

FVector AGGPortal::ChangeLocation(FVector Location) const {
    return FVector{};
}

FVector AGGPortal::ChangeFullScale() const {
    return FVector{};
}

FVector AGGPortal::ChangeDirection(FVector Direction) const {
    return FVector{};
}


