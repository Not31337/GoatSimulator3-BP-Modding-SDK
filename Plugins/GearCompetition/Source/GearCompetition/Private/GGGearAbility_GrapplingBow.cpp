#include "GGGearAbility_GrapplingBow.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_GrapplingBow::UGGGearAbility_GrapplingBow() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bHasHitResult = false;
    this->MaxSpeed = 1000.00f;
    this->Acceleration = 200.00f;
    this->DamageNPCImpulseStrength = 100.00f;
    this->DamagePActorImpulseStrength = 100.00f;
    this->TraceDistance = 10000.00f;
    this->TraceChannel = ECC_WorldStatic;
    this->LaunchParticle = NULL;
    this->ImpactParticle = NULL;
    this->ReloadParticle = NULL;
    this->LaunchSound = NULL;
    this->ImpactSound = NULL;
    this->ReloadSound = NULL;
    this->DetachSound = NULL;
    this->OngoingPreGrappleSound = NULL;
    this->OngoingPreGrappleAC = NULL;
    this->OngoingGrappleSound = NULL;
    this->OngoingGrappleAC = NULL;
    this->PlungerClass = NULL;
    this->PlungerTravelSpeed = 50.00f;
    this->PlungerReachedDestinationDistanceThreshold = 30.00f;
    this->GoatMinDistance = 100.00f;
    this->MissedGrapplePointPlungerTravelDistance = 500.00f;
    this->PlungerMaterialIndex = 0;
    this->LoadedPlungerMaterial = NULL;
    this->LaunchedPlungerMaterial = NULL;
    this->LaunchedPlungerMatInst = NULL;
    this->LaunchPlungerMontage = NULL;
    this->ReloadPlungerMontage = NULL;
    this->CableMaterial = NULL;
    this->RopeWidth = 0.00f;
    this->CableSegments = 10;
    this->CurrentPlunger = NULL;
    this->GearMesh = NULL;
    this->GearAnimInstance = NULL;
    this->bHasCompletedInstinct = false;
    this->AccumulatedGrappleDistance = 0.00f;
    this->GrappleInstinctDistance = 25000.00f;
    this->OnlyCountTowardInstinctWhileActuallyGrappling = true;
}

void UGGGearAbility_GrapplingBow::UpdateGoatMovement(float DeltaSeconds, AGGGoat* Goat) {
}

void UGGGearAbility_GrapplingBow::PlungerReachedTarget() {
}

void UGGGearAbility_GrapplingBow::OnRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGGearAbility_GrapplingBow::OnMovementModeChanged(TEnumAsByte<EMovementMode> CurrentMovement, uint8 CustomMovement, TEnumAsByte<EMovementMode> PrevMovement, uint8 PrevCustomMovement) {
}

void UGGGearAbility_GrapplingBow::OnGoatJumped() {
}

bool UGGGearAbility_GrapplingBow::DoTargetTrace(FHitResult& OutResult) {
    return false;
}

void UGGGearAbility_GrapplingBow::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_GrapplingBow, CurrentPlunger);
}


