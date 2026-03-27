#include "GGCommanderNPCTarget.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AGGCommanderNPCTarget::AGGCommanderNPCTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->TargetParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Target Particle Component"));
    this->BeamParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Beam Particle Component"));
    this->BeamPArticle = NULL;
    this->DistanceToNPCToRemove = 150.00f;
    this->SelectedNPC = NULL;
    this->SelectedHumanoidNPC = NULL;
    this->AttachedToNPC = NULL;
    this->BeamParticleComponent->SetupAttachment(RootComponent);
    this->TargetParticleComponent->SetupAttachment(RootComponent);
}

void AGGCommanderNPCTarget::OnRep_SelectedNPC() {
}

void AGGCommanderNPCTarget::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGCommanderNPCTarget, SelectedNPC);
}


