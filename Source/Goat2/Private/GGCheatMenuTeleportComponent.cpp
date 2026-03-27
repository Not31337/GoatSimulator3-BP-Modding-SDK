#include "GGCheatMenuTeleportComponent.h"

UGGCheatMenuTeleportComponent::UGGCheatMenuTeleportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeleportCategory = TEXT("TeleportComponent");
    this->bTeleportToGround = false;
    this->GroundDistanceCheck = 200.00f;
}


