#include "GGSnowman.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AGGSnowman::AGGSnowman(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->MaxSnowmanStep = 3;
    this->GrowInterpolationSpeed = 1.00f;
    this->ScaleIncreaseAfterFullyGrown = 0.50f;
    this->MaxDestroyParticleScale = 3.00f;
    this->BaseDamageThreshold = 50.00f;
    this->CurrentSnowmanStep = 0;
    this->GrowSoundAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("GrowSoundAudioComponent"));
    this->GrowSoundAudioComponent->SetupAttachment(RootComponent);
}


void AGGSnowman::OnRep_CurrentSnowmanStep() {
}

void AGGSnowman::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGSnowman, CurrentSnowmanStep);
}


