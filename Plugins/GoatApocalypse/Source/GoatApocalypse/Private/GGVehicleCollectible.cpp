#include "GGVehicleCollectible.h"
#include "GGDynamicAssetHoldingComponent.h"

AGGVehicleCollectible::AGGVehicleCollectible(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = false;
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
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



void AGGVehicleCollectible::OnDynamicLoadingFinished(UGGDynamicAssetHoldingComponent* InDynAssetComp) {
}

bool AGGVehicleCollectible::HasBeenPickedUp() {
    return false;
}



