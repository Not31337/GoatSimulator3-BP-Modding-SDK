#include "GGGoatGear_Back_Test_PunchyArms.h"

UGGGoatGear_Back_Test_PunchyArms::UGGGoatGear_Back_Test_PunchyArms(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PunchParticle = NULL;
    this->DamageDelay = 0.10f;
    this->TraceRadius = 1000.00f;
    this->PunchPower = 1000.00f;
    this->CharacterPowerScalar = 1.00f;
    this->VehiclePowerScalar = 1.00f;
}

void UGGGoatGear_Back_Test_PunchyArms::PlayPunchAnimationServer_Implementation(int32 ArmIndex) {
}

void UGGGoatGear_Back_Test_PunchyArms::PlayPunchAnimationMulticast_Implementation(int32 ArmIndex) {
}



