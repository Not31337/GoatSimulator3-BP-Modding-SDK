#include "GGGearAbility_MedusaHair.h"
#include "GGFreezeComponent.h"

UGGGearAbility_MedusaHair::UGGGearAbility_MedusaHair() {
    this->InfluenceRadius = 400.00f;
    this->bCanFreezePlayer = false;
    this->FreezeDurationForPlayers = 0.00f;
    this->FreezeComponentClass = UGGFreezeComponent::StaticClass();
}


