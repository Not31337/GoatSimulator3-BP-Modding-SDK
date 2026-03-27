#include "GGGearAbility_Satellite.h"
#include "GGDamageType_Impact.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_Satellite::UGGGearAbility_Satellite() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->LaunchPower = 2500.00f;
    this->VehicleLaunchPower = 25000.00f;
    this->LaunchImpulseDamageType = UGGDamageType_Impact::StaticClass();
    this->bNoLaunchIfBlocked = true;
    this->SuckCapsuleRadius = 85.00f;
    this->SuckCapsuleHalfHeight = 100.00f;
    this->SuckDistFromPlayer = 100.00f;
    this->TimeToScaleDownVictim = 0.10f;
    this->CooldownBetweenLaunchAndPickUp = 0.50f;
    this->SocketSpawnLocation = TEXT("SatelliteMuzzleSocket");
    this->DefaultDamageOnRelease = 50.00f;
    this->bRagdollCharacterOnLaunch = true;
    this->CurrentVictim = NULL;
    this->SatelliteGear = NULL;
}

void UGGGearAbility_Satellite::ServerReleaseGrabbedActor_Implementation(AActor* GrabbedActor, FVector ReleaseLocation, FGGReleaseOptions Options) {
}

void UGGGearAbility_Satellite::ServerCatchActor_Implementation(AActor* ActorToGrab, FGGCatchOptions Options) {
}

void UGGGearAbility_Satellite::OnOwnerRespawned(AGGCharacter* Character) {
}

void UGGGearAbility_Satellite::OnOwnerPreScaled(bool bIsBeingCatched) {
}

void UGGGearAbility_Satellite::OnOwnerEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGGearAbility_Satellite::OnOwnerCatched(AActor* CatchedActor, AActor* Catcher) {
}

void UGGGearAbility_Satellite::MulticastReleaseGrabbedActor_Implementation(AActor* GrabbedActor, FVector ReleaseLocation, FGGReleaseOptions Options) {
}

void UGGGearAbility_Satellite::MulticastCatchActor_Implementation(AActor* ActorToGrab, AGGGoat* GrabbingGoat, FGGCatchOptions Options) {
}

void UGGGearAbility_Satellite::ForceReleaseVictim() {
}

void UGGGearAbility_Satellite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_Satellite, SatelliteGear);
}


