#include "GGVehicleCollectible.h"
#include "GGDynamicAssetHoldingComponent.h"
#include "Net/UnrealNetwork.h"

AGGVehicleCollectible::AGGVehicleCollectible(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
    this->UnreadMenuCategory = TEXT("achievements");
    this->UnreadQuestCategory = TEXT("achievements_vehiclecollectible");
    this->DynamicAssetHolding = CreateDefaultSubobject<UGGDynamicAssetHoldingComponent>(TEXT("Dynamic Asset Holding"));
    this->bOnlyAllowPickupWithMotorcycle = false;
    this->MaxCullDistance = 15000.00f;
    this->bIsActiveByDefault = true;
    this->PickupCameraShakeClass = NULL;
    this->bIsPickupActive = true;
    this->bHasBeenPickedUp = false;
    this->bIsLocalPlayerInVehicle = false;
}

void AGGVehicleCollectible::SetupCollectible() {
}

void AGGVehicleCollectible::SetPickupActive(bool bInActive) {
}

void AGGVehicleCollectible::PickUpCollectible(AActor* InInstigator) {
}

void AGGVehicleCollectible::OnRep_IsActive() {
}



void AGGVehicleCollectible::OnDynamicLoadingFinished(UGGDynamicAssetHoldingComponent* InDynAssetComp) {
}

bool AGGVehicleCollectible::HasBeenPickedUp() {
    return false;
}


void AGGVehicleCollectible::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGVehicleCollectible, bIsPickupActive);
}


