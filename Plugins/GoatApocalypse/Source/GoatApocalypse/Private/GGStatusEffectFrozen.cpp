#include "GGStatusEffectFrozen.h"

AGGStatusEffectFrozen::AGGStatusEffectFrozen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffectType = EStatusEffectTypes::SET_Frozen;
    this->CreateOverlapShapes = false;
    this->SpreadStatusEffectType = EStatusEffectTypes::SET_Frozen;
    this->FrozenSettings.AddDefaulted(4);
    this->FreezeComponent = NULL;
    this->bFreezeGoats = true;
    this->HeadbuttsNeededToBreakFree = 3;
    this->FrozenStartParticle = NULL;
    this->FrozenStartSound = NULL;
    this->FrozenShatterParticle = NULL;
    this->FrozenShatterSound = NULL;
    this->FreezeComp = NULL;
}

void AGGStatusEffectFrozen::OnUnfrozen(AGGCharacter* Character, UGGFreezeComponent* Component) {
}

void AGGStatusEffectFrozen::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void AGGStatusEffectFrozen::OnActorGotNewStatusEffect(AActor* Actor, UGGStatusEffectManager* Manager, AGGStatusEffectBase* NewStatusEffect, EStatusEffectTypes Type) {
}


