#include "GGCloningMachine.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GGDynamicAssetHoldingComponent.h"
#include "Net/UnrealNetwork.h"

AGGCloningMachine::AGGCloningMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->CloningPad = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cloning Pad"));
    this->CloningOverlapVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("Cloning Overlap Volume"));
    this->ResultPad = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Result Pad"));
    this->ParticlesOngoingCloning = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particles Ongoing Cloning"));
    this->CloningCamera = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cloning Camera"));
    this->DynamicAssetHolding = CreateDefaultSubobject<UGGDynamicAssetHoldingComponent>(TEXT("Dynamic Asset Holding"));
    this->Button = NULL;
    this->DelayStartCloning = 2.00f;
    this->TimeToClone = 1.00f;
    this->RemoveMaterialsDelay = 1.00f;
    this->SocketSpawnStartCloningEffect = TEXT("Effect Spawn Location");
    this->MaterialSlot1Cloning = NULL;
    this->MaterialSlot2Cloning = NULL;
    this->CloneMaterial = NULL;
    this->State = EGGCloningMachineState::Idle;
    this->CloningCamera->SetupAttachment(RootComponent);
    this->CloningOverlapVolume->SetupAttachment(CloningPad);
    this->CloningPad->SetupAttachment(RootComponent);
    this->ParticlesOngoingCloning->SetupAttachment(ResultPad);
    this->ResultPad->SetupAttachment(RootComponent);
}

void AGGCloningMachine::StartCloningProcess() {
}

void AGGCloningMachine::ResetMaterials() {
}

void AGGCloningMachine::OnStateChanged(EGGCloningMachineState PreviousState) {
}

void AGGCloningMachine::MulticastActorsWhereCloned_Implementation(const TArray<FVector>& Locations) {
}

void AGGCloningMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGCloningMachine, State);
}


