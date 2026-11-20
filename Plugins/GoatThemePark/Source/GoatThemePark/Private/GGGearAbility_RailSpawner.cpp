#include "GGGearAbility_RailSpawner.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_RailSpawner::UGGGearAbility_RailSpawner() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->RailSplineMesh = NULL;
    this->GrindableSplineDataAsset = NULL;
    this->MinDistanceBetweenPoints = 150.00f;
    this->FirstPointDistance = 100.00f;
    this->MaxTotalSplineLength = 50000.00f;
    this->PlacementTraceDistance = 500.00f;
    this->AboveGroundPlacement = 50.00f;
    this->TangentMultiplier = 1.00f;
    this->MaxPlacementDistanceFromPlayer = 1000.00f;
    this->CrosshairRadius = 15.00f;
    this->CrosshairMaterial = NULL;
    this->bShowDebug = false;
    this->CurrentRailSpline = NULL;
    this->bPlacementActive = false;
    this->CrosshairActor = NULL;
}

void UGGGearAbility_RailSpawner::OnGoatHeadbutt(AGGPlayerController* GoatPlayerController) {
}

void UGGGearAbility_RailSpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_RailSpawner, CurrentRailSpline);
}


