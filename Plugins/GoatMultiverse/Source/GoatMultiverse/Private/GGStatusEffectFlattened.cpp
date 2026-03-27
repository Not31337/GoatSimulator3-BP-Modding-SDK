#include "GGStatusEffectFlattened.h"
#include "EStatusEffectTypes.h"

AGGStatusEffectFlattened::AGGStatusEffectFlattened(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffectType = EStatusEffectTypes::SET_Flattened;
    this->ValidAffectedActorClasses.AddDefaulted(2);
    this->CanSpread = false;
    this->MovementSpeedMultiplier = 0.50f;
    this->UnFlattenCurve = NULL;
    this->TimeToUnFlatten = 1.00f;
}

void AGGStatusEffectFlattened::CharacterExitedFlattenVehicle(AGGVehicle* Vehicle, AGGCharacter* Character, bool bWasDriver) {
}


