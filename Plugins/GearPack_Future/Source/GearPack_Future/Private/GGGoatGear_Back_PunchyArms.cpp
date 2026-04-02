#include "GGGoatGear_Back_PunchyArms.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Back_PunchyArms::UGGGoatGear_Back_PunchyArms(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterPowerScalar = 0.75f;
    this->VehiclePowerScalar = 15.00f;
    this->HitParticle = NULL;
    this->HitSound = NULL;
    this->RightHandSocket = TEXT("LeftHandSocket");
    this->LeftHandSocket = TEXT("RightHandSocket");
    this->PunchTraceRadius = 50.00f;
    this->PunchTraceDistance = 100.00f;
    this->PunchPower = 3000.00f;
    this->RightPunch = NULL;
    this->LeftPunch = NULL;
    this->PunchParticle = NULL;
    this->PunchMissParticle = NULL;
    this->PunchSound = NULL;
    this->PunchCameraShake = NULL;
    this->SlamPower = 3000.00f;
    this->DelayToCreateChargeEffects = 0.30f;
    this->PunchDamage = 100.00f;
    this->VehiclePunchDamage = 50.00f;
    this->LaunchPunch = NULL;
    this->ChargeParticle = NULL;
    this->SlamParticle = NULL;
    this->ChargeSound = NULL;
    this->ChargeReleaseSound = NULL;
    this->SlamSound = NULL;
    this->SlamCameraShake = NULL;
    this->SlamCameraShakeRadius = 1000.00f;
    this->bCharging = false;
    this->ChargeSoundComp = NULL;
    this->ChargeParticleComp1 = NULL;
    this->ChargeParticleComp2 = NULL;
    this->AnimInstance = NULL;
}

void UGGGoatGear_Back_PunchyArms::OnRep_Charging() {
}

void UGGGoatGear_Back_PunchyArms::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UGGGoatGear_Back_PunchyArms::MulticastSlamGround_Implementation(FVector_NetQuantize SlamLocation, FVector GroundNormal) {
}

void UGGGoatGear_Back_PunchyArms::MulticastReleaseChargeToSlam_Implementation() {
}

void UGGGoatGear_Back_PunchyArms::MulticastPunchCameraEffects_Implementation() {
}

void UGGGoatGear_Back_PunchyArms::MulticastPlayPunchAnimation_Implementation(int32 ArmIndex) {
}

void UGGGoatGear_Back_PunchyArms::MulticastDamagedArea_Implementation(int32 ArmIndex, bool bForSlam, int32 Hits) {
}

void UGGGoatGear_Back_PunchyArms::MulticastCancelCharge_Implementation() {
}

void UGGGoatGear_Back_PunchyArms::ClientLaunchGoat_Implementation(float Power) {
}

void UGGGoatGear_Back_PunchyArms::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Back_PunchyArms, bCharging);
}


