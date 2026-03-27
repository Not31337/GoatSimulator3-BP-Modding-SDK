#include "GGStatusEffectElectric.h"
#include "EStatusEffectTypes.h"
#include "Net/UnrealNetwork.h"

AGGStatusEffectElectric::AGGStatusEffectElectric(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffectType = EStatusEffectTypes::SET_Electric;
    this->bPActorUseSphereShape = true;
    this->bShouldClampSphereRadius = true;
    this->SpreadStatusEffectType = EStatusEffectTypes::SET_Electric;
    this->MatShockDuration = 0.75f;
    this->bShouldNPCsDropHeldItems = true;
    this->ElectrocutedReactionWeights.AddDefaulted(2);
    this->ImpulseForce = 18000.00f;
    this->CharacterImpulseForce = 800.00f;
    this->ShockDamage = 100.00f;
    this->CanTriggerExplosions = false;
    this->ShockBurstParticle = NULL;
    this->RangedShockRange = 1000.00f;
    this->RangedShockSphereRadius = 80.00f;
    this->RangedShockDistanceInfront = 100.00f;
    this->MaxRangedShockPerHeadbutt = 1;
    this->bDebugDrawSphereTrace = false;
    this->InstinctElectricityChain = 3;
    this->LastGoatSpreader = NULL;
    this->PlayerGoatDuration = 10.00f;
    this->VehicleDuration = 5.00f;
    this->NPCDuration = 5.00f;
    this->ElectricBeamParticle = NULL;
    this->GeneralVehicleSpeedIncrease = 3.00f;
    this->VehicleBoostPower = 1000.00f;
    this->VehicleBoostMaxSpeed = 2000.00f;
    this->VehicleBoostDuration = 2.00f;
    this->PlayerVehicleBoostDuration = 0.50f;
    this->VehicleElectricTrail = NULL;
    this->VehicleVertexParticle = NULL;
    this->bShouldBoost = false;
    this->bDrawInWaterRadius = false;
    this->InWaterShockRadius = 1000.00f;
    this->NPCElectrifiedMontage = NULL;
    this->VertexParticle = NULL;
}

void AGGStatusEffectElectric::UnpauseNPC() {
}

void AGGStatusEffectElectric::StopElectrocuting() {
}



void AGGStatusEffectElectric::SelfElectricShock() {
}

void AGGStatusEffectElectric::RemoveSourceEffects() {
}

void AGGStatusEffectElectric::OnRep_ElectrocutingCharacter() {
}

void AGGStatusEffectElectric::OnGoatBackKicked(AGGGoat* Goat, bool bHitSomething, const TArray<AActor*>& KickedActors) {
}

void AGGStatusEffectElectric::NPCSpreadToNearest() {
}

void AGGStatusEffectElectric::MulticastSelfElectricShockEffect_Implementation() {
}

void AGGStatusEffectElectric::MulticastElectricBeam_Implementation(AActor* ShockedActor, bool bNewChain) {
}

void AGGStatusEffectElectric::GoatHeadbutted(AGGGoat* Goat, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}



void AGGStatusEffectElectric::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGStatusEffectElectric, bShouldBoost);
    DOREPLIFETIME(AGGStatusEffectElectric, ElectrocutingCharacter);
}


