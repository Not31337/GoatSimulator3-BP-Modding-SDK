#include "GGSyringe.h"
#include "EGGProjectileHitResponse.h"

AGGSyringe::AGGSyringe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitResponseNormalTarget = EGGProjectileHitResponse::StickToTarget;
    this->HitResponseSpecialTarget = EGGProjectileHitResponse::StickToTarget;
    this->SpecialTargets.AddDefaulted(3);
    this->NPCEffectDuration = 15.00f;
    this->NPCFloatingForce = 1000.00f;
    this->NPCAddPitch = 0.20f;
    this->NumSyringesRequiredForFloating = 3;
    this->PlayerEffectDuration = 10.00f;
    this->PlayerFloatingForce = 400.00f;
    this->GoatMultiplierThreshold = 9.00f;
    this->PlayerAddPitch = 0.20f;
    this->PActorGravity = 20000.00f;
    this->PActorMaxVelocity = 500.00f;
    this->PActorAddGravityMultiplier = 1.50f;
    this->PActorEffectDuration = 10.00f;
    this->VehicleGravity = 250000.00f;
    this->VehicleMaxVelocity = 500.00f;
    this->VehicleAddGravityMultiplier = 4.00f;
    this->VehicleEffectDuration = 15.00f;
    this->BigVehicleMultiplierThreshold = 13.00f;
    this->SmallVehicleMultiplierThreshold = 9.00f;
    this->AmountOfCarsToFloat = 10;
    this->bCountHeliumCars = false;
}

void AGGSyringe::OnHitCharacterMulticast_Implementation(AGGCharacter* Character, FName HitBone, FVector RelativeLocation) {
}


