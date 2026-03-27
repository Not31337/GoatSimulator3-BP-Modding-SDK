#include "GGPersonalHackerBeam.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"

AGGPersonalHackerBeam::AGGPersonalHackerBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->Root = (USceneComponent*)RootComponent;
    this->Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
    this->SceneCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("2D Capture Component"));
    this->WidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget Component"));
    this->WidgetClass = NULL;
    this->MaxDistanceToStopBeamConenction = 100.00f;
    this->NPCBeamTargetSocketName = TEXT("Head");
    this->OtherGoatBeamTargetSocketName = TEXT("Head");
    this->BeamSound = NULL;
    this->BeamPArticle = NULL;
    this->MinAge = 0;
    this->MaxAge = 0;
    this->DefaultTextureMaterial = NULL;
    this->TextureMaterial = NULL;
    this->NearestNPC = NULL;
    this->CurrentNPC = NULL;
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

void AGGPersonalHackerBeam::OverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}


FString AGGPersonalHackerBeam::GetTargetName(AActor* Target) {
    return TEXT("");
}

EMoods AGGPersonalHackerBeam::GetTargetMood(AActor* Target) {
    return EMoods::M_None;
}

FString AGGPersonalHackerBeam::GetRandomInformation() {
    return TEXT("");
}

FString AGGPersonalHackerBeam::GetNPCUsername() {
    return TEXT("");
}

FString AGGPersonalHackerBeam::GetNPCOccupation(AActor* Actor) {
    return TEXT("");
}

int32 AGGPersonalHackerBeam::GetNPCAge() {
    return 0;
}

void AGGPersonalHackerBeam::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


