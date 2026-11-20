#include "GGGearAbility_RollerCoasterSpawner.h"
#include "GGRollerCoasterSpawnedTrack.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_RollerCoasterSpawner::UGGGearAbility_RollerCoasterSpawner() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->TrackActorClass = AGGRollerCoasterSpawnedTrack::StaticClass();
    this->GrindableSplineDataAsset = NULL;
    this->GrindsplineOffsets.AddDefaulted(2);
    this->SnapDistanceToCloseLoop = 150.00f;
    this->SnapDistanceToConnectExistingTrack = 150.00f;
    this->MinDistanceBetweenPoints = 150.00f;
    this->MaxDistanceBetweenPoints = 300.00f;
    this->MaxYawTurnDegrees = 75.00f;
    this->MaxPitchChangeDegrees = 45.00f;
    this->AboveGroundPlacement = 50.00f;
    this->TraceHeightAdjustment = 100.00f;
    this->TangentMultiplier = 1.00f;
    this->MaxPlacementDistanceFromPlayer = 1000.00f;
    this->LookingUpMultiplier = 2.00f;
    this->PreviewMaterial = NULL;
    this->PreviewDisabledMaterial = NULL;
    this->SoundTrackPlacement = NULL;
    this->LoopSound = NULL;
    this->CurrentTrack = NULL;
    this->bPlacementActive = false;
    this->bPlacementRestricted = false;
    this->bCurrentTrackWasAdopted = false;
    this->PreviewActor = NULL;
    this->PreviewSpline = NULL;
    this->StartPointPreviewActor = NULL;
    this->AudioComponent = NULL;
}

void UGGGearAbility_RollerCoasterSpawner::Server_AddPointToSpline_Implementation(FVector WorldLocation) {
}

void UGGGearAbility_RollerCoasterSpawner::OnGoatHeadbutt(AGGPlayerController* GoatPlayerController) {
}

void UGGGearAbility_RollerCoasterSpawner::MulticastPlayHaptics_Implementation(bool CloseSpline) {
}

void UGGGearAbility_RollerCoasterSpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_RollerCoasterSpawner, CurrentTrack);
}


