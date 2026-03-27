#include "GGVaultDoor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GGDynamicAssetHoldingComponent.h"

AGGVaultDoor::AGGVaultDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->VaultDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Vault Door"));
    this->Lamp1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lamp 1"));
    this->Lamp2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lamp 2"));
    this->Lamp3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lamp 3"));
    this->Lamp4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lamp 4"));
    this->Lamp5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lamp 5"));
    this->Lamp6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lamp 6"));
    this->Lamp7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lamp 7"));
    this->Lamp8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lamp 8"));
    this->Padlock1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Padlock 1"));
    this->Padlock2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Padlock 2"));
    this->Padlock3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Padlock 3"));
    this->Padlock4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Padlock 4"));
    this->Padlock5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Padlock 5"));
    this->Padlock6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Padlock 6"));
    this->Padlock7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Padlock 7"));
    this->Padlock8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Padlock 8"));
    this->DynamicAssetHolding = CreateDefaultSubobject<UGGDynamicAssetHoldingComponent>(TEXT("Dynamic Asset Holding"));
    this->RedLightMaterial = NULL;
    this->GreenLightMaterial = NULL;
    this->PadlockImpulseStrength = 1000.00f;
    this->PadlockLaunchMaxAngularStrength = 500.00f;
    this->HidePadlockAfter = 3.00f;
    this->Lamps.AddDefaulted(8);
    this->Padlocks.AddDefaulted(8);
    this->LocalLampsLitCount = 0;
    this->Lamp1->SetupAttachment(VaultDoor);
    this->Lamp2->SetupAttachment(VaultDoor);
    this->Lamp3->SetupAttachment(VaultDoor);
    this->Lamp4->SetupAttachment(VaultDoor);
    this->Lamp5->SetupAttachment(VaultDoor);
    this->Lamp6->SetupAttachment(VaultDoor);
    this->Lamp7->SetupAttachment(VaultDoor);
    this->Lamp8->SetupAttachment(VaultDoor);
    this->Padlock1->SetupAttachment(VaultDoor);
    this->Padlock2->SetupAttachment(VaultDoor);
    this->Padlock3->SetupAttachment(VaultDoor);
    this->Padlock4->SetupAttachment(VaultDoor);
    this->Padlock5->SetupAttachment(VaultDoor);
    this->Padlock6->SetupAttachment(VaultDoor);
    this->Padlock7->SetupAttachment(VaultDoor);
    this->Padlock8->SetupAttachment(VaultDoor);
    this->VaultDoor->SetupAttachment(RootComponent);
}


void AGGVaultDoor::OnGoalUnlocked(AGGCastleStretchGoal* UnlockedGoal) {
}

void AGGVaultDoor::OnClientGoalUnlocked(AGGCastleStretchGoal* UnlockedGoal) {
}

void AGGVaultDoor::LightNewLamp() {
}

void AGGVaultDoor::HideVaultDoor() {
}


