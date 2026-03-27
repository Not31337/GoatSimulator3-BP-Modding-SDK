#include "GGRockHeroBoulderActor.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGRockHeroBoulderActor::AGGRockHeroBoulderActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->MeshComponent = (UStaticMeshComponent*)RootComponent;
    this->BoulderRollAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("BoulderRollAudioComponent"));
    this->BoulderWindParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BoulderWindParticleComponent"));
    this->ForceCompClass = NULL;
    this->CollisionCompClass = NULL;
    this->HeightOffset = 0.00f;
    this->VelocitySoundCap = 750.00f;
    this->BoulderCapsuleRadius = 32.00f;
    this->BoulderCapsuleHalfSize = 32.00f;
    this->MovementSpeedMultiplier = 10.00f;
    this->ForceComponentActivationVelocityThreshold = 900.00f;
    this->ForceComponentDeActivationVelocityThreshold = 700.00f;
    this->CollisionComponentActivationThreshold = 50.00f;
    this->OwningGoat = NULL;
    this->ForceComp = NULL;
    this->ForceCompDefaultRadius = 0.00f;
    this->ForceComponentMaxRadius = 150.00f;
    this->BoulderCollisionComp = NULL;
    this->bBoulderModeActive = false;
    this->BoulderRollAudioComponent->SetupAttachment(RootComponent);
    this->BoulderWindParticleComponent->SetupAttachment(RootComponent);
}

void AGGRockHeroBoulderActor::OnRep_BoulderModeActive() {
}





bool AGGRockHeroBoulderActor::InHighVelocityMode() {
    return false;
}

void AGGRockHeroBoulderActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGRockHeroBoulderActor, OwningGoat);
    DOREPLIFETIME(AGGRockHeroBoulderActor, bBoulderModeActive);
}


