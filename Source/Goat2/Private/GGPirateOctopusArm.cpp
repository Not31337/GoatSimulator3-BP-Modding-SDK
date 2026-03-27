#include "GGPirateOctopusArm.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GGRadialForceComponent.h"

AGGPirateOctopusArm::AGGPirateOctopusArm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->DamageTypeClass = NULL;
    this->Root = (USceneComponent*)RootComponent;
    this->RadialForce = CreateDefaultSubobject<UGGRadialForceComponent>(TEXT("Radial Force"));
    this->OctopusArm = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Octopus Arm"));
    this->Damage = 100.00f;
    this->DamageRadius = 500.00f;
    this->DestructionParticle = NULL;
    this->DestructionWaterParticle = NULL;
    this->SpawnSound = NULL;
    this->DestructionInWaterSound = NULL;
    this->DestructionSound = NULL;
    this->OwningGoat = NULL;
    this->OctopusArm->SetupAttachment(RootComponent);
    this->RadialForce->SetupAttachment(RootComponent);
}

void AGGPirateOctopusArm::Smash() {
}

UAnimMontage* AGGPirateOctopusArm::GetRandomSmashAnimationMontage() {
    return NULL;
}


