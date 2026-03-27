#include "GGCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

UGGCharacterMovementComponent::UGGCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GeometryAdjustmentHitThreshold = 100.00f;
    this->RagdollDamageThreshold = 100.00f;
    this->BouncyRagdollOnLandedVelocityThreshold = 1800.00f;
    this->RagdollOnLandedVelocityThreshold = 1300.00f;
    this->CanStandUpBelowVehicle = ECanStandUpBelowVehicle::No;
    this->RagdollTimeUntilMedicEvent = 10.00f;
    this->PActorBaseGracePeriod = 1.00f;
    this->MinTimeOnGroundForStandup = 1.00f;
    this->bIsInShallowWater = false;
    this->ShallowWaterDepth = 35.00f;
    this->bCanDive = false;
    this->IdleUnderWaterBuoyancy = 0.50f;
    this->DiveBuoyancy = 0.00f;
    this->FloatUpBuoyancy = 2.00f;
    this->DiveAcceleration = 600.00f;
    this->GeneralSpeedMultiplier = 1.00f;
    this->GeneralAccelerationMultiplier = 1.00f;
    this->CurrentConveyor = NULL;
    this->OwnerCharacter = NULL;
}

void UGGCharacterMovementComponent::SetGravityScale(float NewGravityScale) {
}

void UGGCharacterMovementComponent::SetDiveBuoyancy() {
}

void UGGCharacterMovementComponent::SetDesiredBuoyancy(EDesiredBuoyancy Value) {
}

void UGGCharacterMovementComponent::SetCurrentConveyor(UGGConveyorComponent* NewConveyor) {
}

void UGGCharacterMovementComponent::SetBuoyancy(float Value) {
}

void UGGCharacterMovementComponent::ServerSetBuoyancy_Implementation(float Value) {
}

void UGGCharacterMovementComponent::ServerSendReplicationData_Implementation(UGGCharacterMovementComponent* TargetMovementComponent, FVector_NetQuantize InLocation, FQuat InRotation, FVector_NetQuantize InVelocity) {
}

void UGGCharacterMovementComponent::ResetVelocity() {
}

void UGGCharacterMovementComponent::ResetMeshVelocity() {
}

void UGGCharacterMovementComponent::ResetBuoyancy() {
}

void UGGCharacterMovementComponent::PreventCharacterFromUnRagdollingForDuration(const FGameplayTag& SourceTag, float Duration) {
}

void UGGCharacterMovementComponent::MulticastSetGravityScale_Implementation(float NewGravityScale) {
}

void UGGCharacterMovementComponent::MulticastResetVelocity_Implementation() {
}

void UGGCharacterMovementComponent::MulticastResetMeshVelocity_Implementation() const {
}

void UGGCharacterMovementComponent::MulticastResetBase_Implementation() {
}

bool UGGCharacterMovementComponent::IsOnConveyorBelt() const {
    return false;
}

bool UGGCharacterMovementComponent::IsDiving() const {
    return false;
}

bool UGGCharacterMovementComponent::IsCompletelyUnderWater(bool bCheckForOxygenVolumes) const {
    return false;
}

UGGCharacterMovementComponent* UGGCharacterMovementComponent::GetGGMovementComp(const AActor* ActorWithComp) {
    return NULL;
}

EDesiredBuoyancy UGGCharacterMovementComponent::GetDesiredBuoyancy() const {
    return EDesiredBuoyancy::Negative;
}

bool UGGCharacterMovementComponent::CanDive() const {
    return false;
}

void UGGCharacterMovementComponent::AddToGeneralSpeedMulti(float Value) {
}

void UGGCharacterMovementComponent::AddToGeneralAccelerationMultiplier(float Value) {
}

void UGGCharacterMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGCharacterMovementComponent, ActorsThatMayNotRagdollCharacter);
    DOREPLIFETIME(UGGCharacterMovementComponent, GeneralSpeedMultiplier);
    DOREPLIFETIME(UGGCharacterMovementComponent, GeneralAccelerationMultiplier);
    DOREPLIFETIME(UGGCharacterMovementComponent, CurrentConveyor);
}


