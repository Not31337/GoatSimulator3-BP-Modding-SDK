#include "GGGoatGear_Scene_AltGoat_Tortoise.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Scene_AltGoat_Tortoise::UGGGoatGear_Scene_AltGoat_Tortoise(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsAbilityActive = false;
}

void UGGGoatGear_Scene_AltGoat_Tortoise::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Scene_AltGoat_Tortoise, bIsAbilityActive);
}


