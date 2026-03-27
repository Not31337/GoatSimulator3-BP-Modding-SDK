#include "GGGearAbility_RelicDetector.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_RelicDetector::UGGGearAbility_RelicDetector() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->MaxDistanceToPoint = 9000.00f;
    this->DigDistance = 500.00f;
    this->RelicSpotClass = NULL;
    this->DishSocketName = TEXT("DishSocket");
    this->SonarSound = NULL;
    this->SonarParticle = NULL;
    this->FailedDigSound = NULL;
    this->FailedDigParticle = NULL;
    this->RelicSearchAttempts = 10;
    this->LocationSearchInterval = 2.00f;
    this->RelicLocationRadius = 7000.00f;
    this->RelicLocationMinRadius = 3000.00f;
    this->RelicGroundTraceHeight = 2500.00f;
    this->RelicGroundTraceDownHeight = -1500.00f;
    this->CollisionCheckCapsuleRadius = 100.00f;
    this->CollisionCheckCapsuleHalfHeight = 120.00f;
    this->SonarSoundComponent = NULL;
}

void UGGGearAbility_RelicDetector::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_RelicDetector, CurrentRelicLoc);
}


