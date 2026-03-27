#include "GGGearAbility_WheelerDealer.h"

UGGGearAbility_WheelerDealer::UGGGearAbility_WheelerDealer() {
    this->bReplicateInputDirectly = true;
    this->ProjectileClass = NULL;
    this->ShootPitchAngle = 0.00f;
    this->ProjectileSpawnerSocket = TEXT("ProjectileSpawnerSocket");
    this->TimeToHoldBeforeLaunch = 2.00f;
    this->bRandomDirection = true;
    this->MaxSpeed = 3.00f;
    this->AccelerationLerpMultiplier = 2.00f;
    this->DecelerationDuration = 2.00f;
    this->AccelerationDuration = 2.00f;
    this->TimeToKeepCarMoving = 5.00f;
    this->MinimumCarSpeed = 4.00f;
    this->Projectile = NULL;
    this->Gear = NULL;
}

void UGGGearAbility_WheelerDealer::TriggerInstinct(AGGGoat* Goat) {
}


