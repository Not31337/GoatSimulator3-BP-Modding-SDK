#include "GGToxicWastePortal_Target.h"
#include "GGDynamicAssetHoldingComponent.h"

AGGToxicWastePortal_Target::AGGToxicWastePortal_Target(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->AssetHolding = CreateDefaultSubobject<UGGDynamicAssetHoldingComponent>(TEXT("Asset Holding"));
}

void AGGToxicWastePortal_Target::OnAssetsLoaded(UGGDynamicAssetHoldingComponent* AssetHoldingComponent) {
}

void AGGToxicWastePortal_Target::MulticastActorTeleported_Implementation(APawn* AsPawn) const {
}


