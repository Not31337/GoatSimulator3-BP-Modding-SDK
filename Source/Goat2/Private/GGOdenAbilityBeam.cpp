#include "GGOdenAbilityBeam.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"

AGGOdenAbilityBeam::AGGOdenAbilityBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->Root = (USceneComponent*)RootComponent;
    this->Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
    this->SceneCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("2D Capture Component"));
    this->WidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget Component"));
    this->WidgetClass = NULL;
    this->MaxDistanceToStopBeamConenction = 100.00f;
    this->BeamSound = NULL;
    this->BeamPArticle = NULL;
    this->DefaultTextureMaterial = NULL;
    this->TextureMaterial = NULL;
    this->NearestPactor = NULL;
    this->CurrentPactor = NULL;
    this->OwningGoat = NULL;
    this->BeamParticleAttachement = CreateDefaultSubobject<USceneComponent>(TEXT("Beam Particle Attachement"));
    this->BeamComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Beam Particle"));
    this->BeamingAudioComp = NULL;
    this->TextureTarget = NULL;
    this->BeamComponent->SetupAttachment(BeamParticleAttachement);
    this->BeamParticleAttachement->SetupAttachment(RootComponent);
    this->Collider->SetupAttachment(RootComponent);
    this->SceneCaptureComponent->SetupAttachment(RootComponent);
    this->WidgetComp->SetupAttachment(RootComponent);
}

void AGGOdenAbilityBeam::OverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}


FString AGGOdenAbilityBeam::GetTargetName(AActor* Target) {
    return TEXT("");
}

FString AGGOdenAbilityBeam::GetRandomInformation() {
    return TEXT("");
}

void AGGOdenAbilityBeam::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


