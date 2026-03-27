#include "NPCAttackVariation.h"

FNPCAttackVariation::FNPCAttackVariation() {
    this->AnimationHardRef = NULL;
    this->bCanBeUsedForRagdolledCharacters = false;
    this->bRequireHeldObjectInLeftHand = false;
    this->bRequireHeldObjectInRightHand = false;
    this->Radius = 0.00f;
    this->Height = 0.00f;
    this->DistanceFromCharacter = 0.00f;
    this->HeightAdjust = 0.00f;
    this->AttackPower = 0.00f;
    this->CharacterAttackPower = 0.00f;
    this->ZDirection = 0.00f;
    this->Damage = 0.00f;
    this->StatusEffectToApply = EStatusEffectTypes::SET_None;
    this->ChanceToBeUsed = 0;
    this->bIsDefault = false;
}

