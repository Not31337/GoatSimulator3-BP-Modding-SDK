#include "GGVehicleRamp.h"

AGGVehicleRamp::AGGVehicleRamp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = false;
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->QuestID = TEXT("UnnamedSecretSplash");
    this->QuestProgressTiers.AddDefaulted(1);
    this->UnreadMenuCategory = TEXT("achievements");
}


