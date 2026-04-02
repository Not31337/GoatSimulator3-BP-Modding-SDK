#include "GGAlternateAntiGravityFieldActor.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

AGGAlternateAntiGravityFieldActor::AGGAlternateAntiGravityFieldActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollisionComponent"));
    this->BoxCollision = (UBoxComponent*)RootComponent;
    this->StatusEffectToApply = NULL;
    this->GravityFieldVisualActorClass = NULL;
}

void AGGAlternateAntiGravityFieldActor::OnPlayerStateDestroyed(AActor* PlayerState) {
}

void AGGAlternateAntiGravityFieldActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGAlternateAntiGravityFieldActor, BoxExtents);
}


