#include "GGStatusEffectPoolManager.h"
#include "Templates/SubclassOf.h"

UGGStatusEffectPoolManager::UGGStatusEffectPoolManager() {
    this->MinRadiusForSE = 40.00f;
    this->MaxPoolSize = 50;
    this->SoftStatusEffectDefaultClassesDataAssets.AddDefaulted(7);
    this->RequiredBurningEffects = 15;
    this->FireGroupRadius = 1000.00f;
    this->FiretruckCheckInterval = 2.00f;
    this->GroupedBurningDuration = 40.00f;
    this->MinDistanceBetweenEventSpawns = 2000.00f;
    this->FireGroupLocationDuration = 120.00f;
}

void UGGStatusEffectPoolManager::PoolAllStatusEffects() {
}

void UGGStatusEffectPoolManager::MoveStatusEffectBetweenActors(AGGStatusEffectBase* StatusEffect, AActor* NewActor) {
}

TArray<AGGStatusEffectBase*> UGGStatusEffectPoolManager::GetStatusEffectPool() const {
    return TArray<AGGStatusEffectBase*>();
}

TSubclassOf<AGGStatusEffectBase> UGGStatusEffectPoolManager::GetDefaultClassFor(EStatusEffectTypes Type) const {
    return NULL;
}

TArray<AGGStatusEffectBase*> UGGStatusEffectPoolManager::GetActiveStatusEffects() const {
    return TArray<AGGStatusEffectBase*>();
}

void UGGStatusEffectPoolManager::DestroyAllPooledStatusEffects() {
}


