#include "GGInstinct_ThorsHammer.h"

AGGInstinct_ThorsHammer::AGGInstinct_ThorsHammer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_ThorsHammer::OnTeleportedToThorsHammer(AGGGoat* Goat, AGGThorsHammerProjectile* Hammer) {
}

void AGGInstinct_ThorsHammer::OnGoatChangedMovementMode(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}


