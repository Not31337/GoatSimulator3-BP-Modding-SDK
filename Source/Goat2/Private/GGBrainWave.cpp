#include "GGBrainWave.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

AGGBrainWave::AGGBrainWave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->Root = (USceneComponent*)RootComponent;
    this->Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
    this->MaxDistanceToStopBeamConenction = 100.00f;
    this->AmountOfHeadGrowth = 0.80f;
    this->MaxAmountOfGrowth = 0.00f;
    this->NPCInflateHeadSound = NULL;
    this->BeamSound = NULL;
    this->BeamPArticle = NULL;
    this->NPCParticle = NULL;
    this->bShouldWobble = true;
    this->bShouldPlayerHeadWobble = true;
    this->MaxHumanoidHeadSizeInstinct = 30.00f;
    this->MaxGoatHeadSizeInstinct = 30.00f;
    this->NearestNPC = NULL;
    this->CurrentNPC = NULL;
    this->OwningGoat = NULL;
    this->BeamParticleAttachement = CreateDefaultSubobject<USceneComponent>(TEXT("Beam Particle Attachement"));
    this->NPCParticleAttachement = CreateDefaultSubobject<USceneComponent>(TEXT("NPC Particle Attachement"));
    this->NPCParticleSystemComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("NPC Particle"));
    this->BeamComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Beam Particle"));
    this->BeamingAudioComp = NULL;
    this->NPCHeadAudioComp = NULL;
    this->BeamComponent->SetupAttachment(BeamParticleAttachement);
    this->BeamParticleAttachement->SetupAttachment(RootComponent);
    this->Collider->SetupAttachment(RootComponent);
    this->NPCParticleAttachement->SetupAttachment(RootComponent);
    this->NPCParticleSystemComp->SetupAttachment(NPCParticleAttachement);
}

void AGGBrainWave::OverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGBrainWave::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


