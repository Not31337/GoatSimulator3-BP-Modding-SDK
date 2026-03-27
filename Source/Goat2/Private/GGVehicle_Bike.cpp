#include "GGVehicle_Bike.h"
#include "SimpleWheeledVehicleMovementComponent.h"
#include "EVehicleType.h"
#include "Net/UnrealNetwork.h"

AGGVehicle_Bike::AGGVehicle_Bike(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->VehicleType = EVehicleType::VT_Bike;
    this->ValidDriverTypes.AddDefaulted(1);
    this->ValidDamageTypes.AddDefaulted(6);
    this->VehicleMovementComponent = CreateDefaultSubobject<USimpleWheeledVehicleMovementComponent>(TEXT("2W Vehicle Movement Comp"));
    this->AirPitchControlScalar = 10.00f;
    this->DriveTorqueScalar = 50.00f;
    this->LeanForceScalar = 20.00f;
    this->InAirLeanForceScalar = 0.20f;
    this->bKillRollMomentumOnOpposingLeanInput = false;
    this->JumpZImpulse = 500.00f;
    this->JumpCooldown = 0.10f;
    this->SteerMaxAngle = 30.00f;
    this->SteerAngleReduction = 0.50f;
    this->SteerAngleInterpSpeed = 1.00f;
    this->PedallingSpeedCap = 10.00f;
    this->JumpSound = NULL;
    this->TimeToBike = 30.00f;
}

void AGGVehicle_Bike::TriggerInstinct(AGGGoat* Goat) {
}

void AGGVehicle_Bike::ServerPlayJumpSound_Implementation() {
}

void AGGVehicle_Bike::ServerMove_Implementation(FVector_NetQuantize100 ClientLoc, FRotator ClientRot, FVector_NetQuantize100 ClientVelocity, FVector_NetQuantize100 ClientAngularVelocity, uint8 DriveTorque, int8 SteerAngle) {
}

void AGGVehicle_Bike::MulticastPlayJumpSound_Implementation() {
}

float AGGVehicle_Bike::GetPedalRotation() const {
    return 0.0f;
}

void AGGVehicle_Bike::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGVehicle_Bike, VehicleMovementComponent);
}


