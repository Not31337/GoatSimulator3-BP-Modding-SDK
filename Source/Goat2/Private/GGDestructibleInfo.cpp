#include "GGDestructibleInfo.h"

FGGDestructibleInfo::FGGDestructibleInfo() {
    this->MinShardCount = 0;
    this->MaxShardCount = 0;
    this->bSpawnAllShards = false;
    this->MinShardLifetime = 0.00f;
    this->MaxShardLifetime = 0.00f;
    this->ImpulseMultiplier = 0.00f;
    this->AngularImpulseMin = 0.00f;
    this->AngularImpulseMax = 0.00f;
    this->DestructionParticle = NULL;
    this->DestructionSound = NULL;
    this->bCanBeDestroyedByDamage = false;
    this->bCanBeDestroyedByImpact = false;
    this->DamageThreshold = 0.00f;
    this->ImpactThreshold = 0.00f;
    this->bDestroyPActorsWhenOptimized = false;
}

