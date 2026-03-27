#include "GGDragonFurTornado.h"
#include "Components/CapsuleComponent.h"
#include "GGStatusEffectManager.h"
#include "Net/UnrealNetwork.h"

AGGDragonFurTornado::AGGDragonFurTornado(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RootCapsule"));
    this->ServerStartTime = 0.00f;
    this->GearPart = NULL;
    this->TravelDistance = 1000.00f;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->TotalLifeSpan = 7.00f;
    this->TimeInHaltedState = 3.00f;
    this->ShrinkTime = 0.70f;
    this->OwnerImmunityTime = 1.00f;
    this->TornadoRotationComponentClass = NULL;
    this->StatusEffectManager = CreateDefaultSubobject<UGGStatusEffectManager>(TEXT("StatusEffectManager"));
}

void AGGDragonFurTornado::OnCapsuleComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGDragonFurTornado::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGDragonFurTornado, StartLocation);
    DOREPLIFETIME(AGGDragonFurTornado, EndLocation);
    DOREPLIFETIME(AGGDragonFurTornado, ServerStartTime);
    DOREPLIFETIME(AGGDragonFurTornado, GearPart);
}


