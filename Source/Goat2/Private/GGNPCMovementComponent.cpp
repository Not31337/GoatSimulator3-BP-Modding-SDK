#include "GGNPCMovementComponent.h"
#include "ELSGait.h"

UGGNPCMovementComponent::UGGNPCMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoRegisterPhysicsVolumeUpdates = false;
    this->bComponentShouldUpdatePhysicsVolume = false;
    this->bUseAccelerationForPaths = true;
    this->bUseFixedBrakingDistanceForPaths = true;
    this->bSweepWhileNavWalking = false;
    this->bNetworkSkipProxyPredictionOnNetUpdate = true;
    this->DefaultLandMovementMode = MOVE_NavWalking;
    this->bUseRVOAvoidance = true;
    this->bProjectNavMeshWalking = true;
    this->NeckBoneName = TEXT("Neck");
    this->RagdollSyncBone = TEXT("Hips");
    this->DefaultGait = ELSGait::Walking;
    this->WalkFixedPathBrakingDistance = 60.00f;
    this->RunFixedPathBrakingDistance = 250.00f;
    this->TurnInPlaceRotationSpeed = 2.00f;
    this->NetworkSimulatedSmoothLocationTimeRunning = 0.10f;
    this->bBroadcastNavWalkOverlappedStatic = false;
    this->OwnerNPC = NULL;
}

void UGGNPCMovementComponent::SetProjectNavMeshWalking(bool bNewShouldProject) {
}

bool UGGNPCMovementComponent::GetUseFixedBrakingDistanceForPaths() const {
    return false;
}

float UGGNPCMovementComponent::GetFixedPathBrakingDistance() const {
    return 0.0f;
}


