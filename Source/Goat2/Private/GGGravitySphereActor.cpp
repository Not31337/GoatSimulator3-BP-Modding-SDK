#include "GGGravitySphereActor.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

AGGGravitySphereActor::AGGGravitySphereActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->GravitySphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Gravity Sphere Component"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->PActorGravity = 20000.00f;
    this->PActorMaxVelocityFromGravity = 500.00f;
    this->PActorGravityMultiplier = 1.50f;
    this->LowGravity = -0.50f;
    this->GravitySphereComponent->SetupAttachment(RootComponent);
}

void AGGGravitySphereActor::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGGravitySphereActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


