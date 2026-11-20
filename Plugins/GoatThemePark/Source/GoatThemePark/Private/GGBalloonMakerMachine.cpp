#include "GGBalloonMakerMachine.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GGDiegeticMusicComponent.h"

AGGBalloonMakerMachine::AGGBalloonMakerMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->RecieverPad = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Reciever Pad"));
    this->OverlapVolume = CreateDefaultSubobject<USphereComponent>(TEXT("Overlap Volume"));
    this->BalloonSpawnPosition = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Balloon Spawn Position"));
    this->AmbientAudioComponent = CreateDefaultSubobject<UGGDiegeticMusicComponent>(TEXT("Ambient Audio"));
    this->AmbientSound = NULL;
    this->AmbientSoundIsActiveParameter = TEXT("is active");
    this->BalloonHolderBP = NULL;
    this->BalloonInflateTime = 2.00f;
    this->BalloonSpawnDelay = 2.00f;
    this->BalloonSpawnTimer = 0.00f;
    this->BalloonFloatDistance = 100.00f;
    this->InputVFX = NULL;
    this->OutputVFX = NULL;
    this->NPCReactionRadius = 500.00f;
    this->AmbientAudioComponent->SetupAttachment(RootComponent);
    this->BalloonSpawnPosition->SetupAttachment(RecieverPad);
    this->OverlapVolume->SetupAttachment(RecieverPad);
    this->RecieverPad->SetupAttachment(RootComponent);
}

void AGGBalloonMakerMachine::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGBalloonMakerMachine::OnBalloonSpawned(AGGPhysicsActor_BalloonHolder* BalloonHolder, AGGPhysicsActor_HeldBalloon* BalloonPActor) {
}

void AGGBalloonMakerMachine::OnBalloonInflateStarted(AGGPhysicsActor_BalloonHolder* BalloonHolder, AGGPhysicsActor_HeldBalloon* BalloonPActor) {
}

void AGGBalloonMakerMachine::OnBalloonInflateEnded(AGGPhysicsActor_BalloonHolder* BalloonHolder, AGGPhysicsActor_HeldBalloon* BalloonPActor) {
}

void AGGBalloonMakerMachine::OnBalloonHolderEndPlay(AActor* BalloonHolder, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AGGBalloonMakerMachine::Multicast_PlayOutputVFX_Implementation() {
}

void AGGBalloonMakerMachine::Multicast_PlayInputVFX_Implementation() {
}


