#include "GGGearAbility_CameraGoat.h"
#include "GGCameraGoatGearCamera.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_CameraGoat::UGGGearAbility_CameraGoat() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->CameraClass = AGGCameraGoatGearCamera::StaticClass();
    this->CameraActor = NULL;
}

void UGGGearAbility_CameraGoat::OnRep_CameraActor() {
}

void UGGGearAbility_CameraGoat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_CameraGoat, CameraActor);
}


