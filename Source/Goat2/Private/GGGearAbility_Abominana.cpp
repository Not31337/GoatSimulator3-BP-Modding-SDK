#include "GGGearAbility_Abominana.h"

UGGGearAbility_Abominana::UGGGearAbility_Abominana() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->MaxChargeTime = 3.00f;
    this->HoldTimeAtMaxCharge = 0.00f;
    this->MinProjectileLaunchPitchAngle = 10.00f;
    this->MaxProjectileLaunchPitchAngle = 20.00f;
    this->MinProjectileSize = 0.30f;
    this->MaxProjectileSize = 1.50f;
    this->SmallProjectileMesh = NULL;
    this->BigProjectileMesh = NULL;
    this->ChargingSound = NULL;
    this->ChargePercentageToBigProjectile = 0.30f;
    this->GooProjectileClass = NULL;
    this->SkelMeshComp = NULL;
    this->ChargingSoundComp = NULL;
}

USkeletalMeshComponent* UGGGearAbility_Abominana::GetGoatMesh() {
    return NULL;
}


