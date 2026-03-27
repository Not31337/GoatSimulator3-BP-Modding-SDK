#include "GGExplosiveActor.h"
#include "Net/UnrealNetwork.h"

AGGExplosiveActor::AGGExplosiveActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->HasExploded = false;
    this->CanCauseChain = true;
    this->ChainExplosionDelay = 0.30f;
    this->DestroyAfterExplosion = false;
    this->DestructionDelay = 0.00f;
    this->FalloffMinDistance = 0.25f;
    this->ChangeMeshOrMatOnExplosion = false;
    this->OverlapChannels.AddDefaulted(7);
    this->ExplodedMesh = NULL;
    this->ExplodedMaterial = NULL;
    this->ExplosionSound = NULL;
    this->ExplosionParticleSystem = NULL;
    this->ExplosionCameraShake = NULL;
    this->UnderWaterExplosionSound = NULL;
    this->UnderWaterExplosionParticleSystem = NULL;
    this->UnderWaterCameraShake = NULL;
    this->bPlayBothParticle = false;
    this->TotalAmountOfExplodedNPC = 10;
    this->TotalAmountOfExplodedNPCGen8 = 5;
    this->TotalAmountOfExplodedNPCMobile = 3;
    this->ScanGoatRadius = 500.00f;
    this->ExplodeOnHit = false;
    this->OnlyWithPlayer = false;
    this->ExplodeFromDamage = true;
    this->StoreDamage = true;
    this->ExplodeFromDamageDelay = 0.00f;
    this->ExplodeDamageThreshold = 0.00f;
    this->ThresholdVolumeScale = 1.00f;
    this->ThresholdMin = 10.00f;
    this->ThresholdMax = 1000.00f;
    this->UseOverrideValue = true;
    this->DamageThresholdOverride = 100.00f;
    this->bDrawExplosionRadius = false;
    this->ImpulseStrength = 30000.00f;
    this->CharacterImpulseStrength = 1500.00f;
    this->SelfImpulseStrength = 30000.00f;
    this->SelfSpinStrength = 50000.00f;
    this->ImpulseVelChange = false;
    this->ImpulseFalloff = true;
    this->IsCountingDownToExplosion = false;
    this->ExplosionRadius = 0.00f;
    this->RadiusVolumeScale = 1.00f;
    this->RadiusMin = 100.00f;
    this->RadiusMax = 2000.00f;
    this->UseRadiusOverride = false;
    this->RadiusOverride = 500.00f;
    this->CanDamageAnyActor = true;
    this->ExplosionDamage = 100.00f;
    this->DestructibleDamage = 100.00f;
    this->DamageFalloff = false;
    this->ChanceToPanic = 50;
    this->PanicType = EPanicTypes::PT_Random;
    this->StartleRadiusAdjust = 1000.00f;
    this->bNotifyAboutThisActor = false;
    this->CanTriggerFromFire = true;
    this->FireTriggerDelay = 1.00f;
    this->DistanceFromCenter = 0.80f;
    this->StatusEffectToApply = EStatusEffectTypes::SET_Burning;
    this->StatusEffectClassToApply = NULL;
    this->StatusEffectToApplyToSelf = EStatusEffectTypes::SET_Burning;
    this->bHasRadiusSet = false;
}

void AGGExplosiveActor::TriggerExplosionWithTimer(float TimerLength, AActor* ExplosionInstigator) {
}

void AGGExplosiveActor::TriggerExplosion(AActor* ExplosionInstigator) {
}

void AGGExplosiveActor::PlayCameraShake(bool IsUnderWater) {
}

void AGGExplosiveActor::OnRep_Exploded() {
}

void AGGExplosiveActor::OnActorGotNewStatusEffect(AActor* Actor, UGGStatusEffectManager* Manager, AGGStatusEffectBase* NewStatusEffect, EStatusEffectTypes Type) {
}

void AGGExplosiveActor::MulticastPlayEffectsUnderWater_Implementation() {
}

void AGGExplosiveActor::MulticastPlayEffects_Implementation() {
}




void AGGExplosiveActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGExplosiveActor, HasExploded);
}


