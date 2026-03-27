#include "GGFarmerGearBuilding.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGFarmerGearBuilding::AGGFarmerGearBuilding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->Root = (USceneComponent*)RootComponent;
    this->BuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Building Mesh"));
    this->SpawnSound = NULL;
    this->SpawnParticle = NULL;
    this->Mesh = NULL;
    this->BuildingMesh->SetupAttachment(RootComponent);
}

void AGGFarmerGearBuilding::OnRep_Mesh() {
}

void AGGFarmerGearBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGFarmerGearBuilding, Mesh);
}


