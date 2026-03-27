#include "ShovelMound.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AShovelMound::AShovelMound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
    this->RootComp = (USceneComponent*)RootComponent;
    this->MoundMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mound Mesh"));
    this->BuriedNPCAttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Buried NPC Attach Point"));
    this->BuriedPActorAttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Buried PActor Attach Point"));
    this->BuriedVehicleAttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Buried Vehicle Attach Point"));
    this->PopOutPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Pop Out Point"));
    this->PullOutAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Pull Out Audio"));
    this->ActorScaleBoundScale = 0.02f;
    this->MinimumVehicleScale = 1.00f;
    this->MinimumPActorScale = 1.00f;
    this->MinimumNPCScale = 0.50f;
    this->PopoutDistance = 500.00f;
    this->PopOutImpulsePower = 1000.00f;
    this->CharacterPopOutImpulsePower = 500.00f;
    this->VehiclePopOutImpulsePower = 1000.00f;
    this->AutomaticallyPopOutAfter = 60.00f;
    this->PopOutParticle = NULL;
    this->PopOutSound = NULL;
    this->BuriedActor = NULL;
    this->BuriedPActor = NULL;
    this->BuriedVehicle = NULL;
    this->BuriedNPC = NULL;
    this->LickedByGoat = NULL;
    this->IdlePose = NULL;
    this->AbominanaIdlePose = NULL;
    this->BuriedNPCAttachPoint->SetupAttachment(RootComponent);
    this->BuriedPActorAttachPoint->SetupAttachment(RootComponent);
    this->BuriedVehicleAttachPoint->SetupAttachment(RootComponent);
    this->MoundMesh->SetupAttachment(RootComponent);
    this->PopOutPoint->SetupAttachment(RootComponent);
    this->PullOutAudio->SetupAttachment(RootComponent);
}

void AShovelMound::OnRep_BuriedActor() {
}

void AShovelMound::MulticastPopOutActor_Implementation(AActor* Actor) {
}

void AShovelMound::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShovelMound, BuriedActor);
    DOREPLIFETIME(AShovelMound, LickedByGoat);
}


