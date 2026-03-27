#include "GGGearAbility_Prototype_IcePath.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_Prototype_IcePath::UGGGearAbility_Prototype_IcePath() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->IcePathClass = NULL;
    this->DistanceBetweenPoints = 500.00f;
    this->bPlaceInFront = true;
    this->DistInFront = 200.00f;
    this->DistInFrontWalking = 400.00f;
    this->CurrentIcePath = NULL;
}

void UGGGearAbility_Prototype_IcePath::OnRep_CurrentIcePath() {
}

void UGGGearAbility_Prototype_IcePath::OnGoatRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGGearAbility_Prototype_IcePath::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_Prototype_IcePath, CurrentIcePath);
}


