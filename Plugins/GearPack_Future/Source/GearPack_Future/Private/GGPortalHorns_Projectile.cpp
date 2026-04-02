#include "GGPortalHorns_Projectile.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGPortalHorns_Projectile::AGGPortalHorns_Projectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->EasingFunction = EEasingFunc::EaseIn;
    this->EasingExponent = 2.00f;
    this->MaxSpeed = 2000.00f;
    this->TimeToReachMaxSpeed = 0.15f;
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->MeshMaterial = NULL;
}

void AGGPortalHorns_Projectile::OnRep_MeshMaterial() {
}

void AGGPortalHorns_Projectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPortalHorns_Projectile, MeshMaterial);
}


