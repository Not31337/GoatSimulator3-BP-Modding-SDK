#include "GGStatusEffectBurning.h"
#include "EStatusEffectTypes.h"
#include "Net/UnrealNetwork.h"

AGGStatusEffectBurning::AGGStatusEffectBurning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffectType = EStatusEffectTypes::SET_Burning;
    this->SpreadStatusEffectType = EStatusEffectTypes::SET_Burning;
    this->SlipperyDurationIncrease = 5.00f;
    this->SlipperyParticleScaleMultiplier = 3.00f;
    this->NPCVehicleSpeedIncrease = 1.00f;
    this->MatBurnDuration = 1.00f;
    this->SetBurntMaterial = true;
    this->BurntSecondsBeforeEnd = 2.00f;
    this->BurntMaterial = NULL;
    this->CanDealDamage = true;
    this->DamgeInterval = 1.00f;
    this->Damage = 20.00f;
    this->CanDamageNormalActors = true;
    this->CanDamagePhysicsActors = true;
    this->CanDamageVehicles = true;
    this->CanDamageCharacters = false;
    this->FireballProjectileClass = NULL;
    this->ShootPitchAngle = 5.00f;
    this->ForwardSpawnOffset = 50.00f;
    this->UpwardSpawnOffset = 25.00f;
    this->SteveShootPitchAngle = 0.00f;
    this->ForwardSteveSpawnOffset = 0.00f;
    this->UpwardSteveSpawnOffset = 0.00f;
    this->SteveAltGoat = NULL;
    this->StartParticle = NULL;
    this->VehicleFireTrail = NULL;
    this->bEnlargeParticlesWhenSlippery = false;
    this->SizzlingDuration = 1.00f;
    this->SizzleParticle = NULL;
    this->SizzlingParticleScale = 1.50f;
    this->SizzleSound = NULL;
    this->ExtinguishedByWaterSound = NULL;
}

void AGGStatusEffectBurning::OnGoatKickedActor(AGGGoat* Goat, AActor* KickedActor) {
}

void AGGStatusEffectBurning::OnGoatHeadbutting(AGGGoat* Goat, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}

void AGGStatusEffectBurning::MulticastPlayFireInWaterEffect_Implementation(FVector Location) {
}

bool AGGStatusEffectBurning::IsSizzling(AActor* Actor) const {
    return false;
}

void AGGStatusEffectBurning::GoatHeadbuttedActor(AGGGoat* Goat, AActor* HeadbuttedActor) {
}

void AGGStatusEffectBurning::GoatHeadbutted(AGGGoat* Goat) {
}

void AGGStatusEffectBurning::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGStatusEffectBurning, SizzlingActors);
}


