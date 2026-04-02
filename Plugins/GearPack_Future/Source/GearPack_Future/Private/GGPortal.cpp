#include "GGPortal.h"
#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGPortal::AGGPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->ForwardDirectionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ForwardDirectionArrow"));
    this->PortalMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->OverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapBox"));
    this->TeleportArea = CreateDefaultSubobject<UBoxComponent>(TEXT("Teleport Area"));
    this->OngoingParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ongoing Particles"));
    this->TeleportedParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Teleported Particles"));
    this->OngoingSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Ongoing Sound"));
    this->TeleportedSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Teleported Sound"));
    this->ReTeleportDelay = 0.20f;
    this->FadeOutDuration = 0.50f;
    this->FadeOutEasingFunction = EEasingFunc::EaseIn;
    this->FadeOutEaseExponent = 2.00f;
    this->ConnectedPortal = NULL;
    this->ForwardDirectionArrow->SetupAttachment(RootComponent);
    this->OngoingParticles->SetupAttachment(RootComponent);
    this->OngoingSound->SetupAttachment(RootComponent);
    this->OverlapBox->SetupAttachment(RootComponent);
    this->PortalMesh->SetupAttachment(RootComponent);
    this->TeleportArea->SetupAttachment(RootComponent);
    this->TeleportedParticles->SetupAttachment(RootComponent);
    this->TeleportedSound->SetupAttachment(RootComponent);
}

void AGGPortal::OnTeleportAreaBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGPortal::OnRep_OwningPortalGear() {
}

void AGGPortal::MulticastFadeOutPortal_Implementation() {
}

void AGGPortal::MulticastActorTeleported_Implementation(AActor* Actor) {
}

void AGGPortal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPortal, ConnectedPortal);
    DOREPLIFETIME(AGGPortal, OwningPortalGearRep);
}


