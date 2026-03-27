#include "LSCharacterMovementComponent.h"
#include "LSDebugParameters.h"
#include "LSRagdollSyncParameters.h"
#include "Net/UnrealNetwork.h"

ULSCharacterMovementComponent::ULSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanWalkOffLedgesWhenCrouching = true;
    this->PelvisBoneName = TEXT("pelvis");
    this->PelvisSocket = TEXT("HipsSocket");
    this->MinimalTimeInRagdoll = 3.00f;
    this->bCanOnlyStandUpOnGround = true;
    this->NeckBoneName = TEXT("neck_01");
    this->RagdollAllowedStandupVelocityThreshold = 10.00f;
    this->InputBlockDurationDuringStandUp = 0.50f;
    this->RagdollSyncBone = TEXT("Spine_01");
    this->RagdollSyncParameters = CreateDefaultSubobject<ULSRagdollSyncParameters>(TEXT("Ragdoll Sync Parameters"));
    this->MaxRagdollImpulseStrength = 2000.00f;
    this->DefaultGait = ELSGait::Running;
    this->ProneMovementSpeed = 100.00f;
    this->ClientReplicationDeltaTime = 0.02f;
    this->DelayToClearForces = 0.50f;
    this->MaxCapsuleDiveDepthFactor = 2.00f;
    this->bCanTriggerTurnInPlace = true;
    this->bUseAirRotationModeWhileFlying = false;
    this->TurnInPlaceAngleThreshold = 30.00f;
    this->TurnInPlaceAimYawRateLimit = 50.00f;
    this->TurnInPlaceDelayTime = 0.30f;
    this->CharacterInAirRotationSpeed = 3.00f;
    this->CharacterFlyingRotationSpeed = 5.00f;
    this->bUseVelocityRotationWhileFlying = true;
    this->BufferAngle = 5.00f;
    this->bIsRotationModeLocked = false;
    this->ViewMode = ELSViewMode::ThirdPerson;
    this->RotationModeInAir = ELSInAirRotationMode::AlignToHorizon;
    this->RotationMode = ELSRotationMode::LookingDirection;
    this->bIsAirRotationModeLocked = false;
    this->bUseInputRotation = true;
    this->Gait = ELSGait::Running;
    this->PreviousMovementMode = MOVE_Walking;
    this->Stance = ELSStance::Standing;
    this->bIsAiming = false;
    this->AnimInstance = NULL;
    this->RagdollOnGroundTimeStamp = 0.00f;
    this->RagdollOnGroundTransitionRate = 0.00f;
    this->AllowedGait = ELSGait::Running;
    this->bReplicateRagdollLocation = true;
    this->RagdollAuthorityState = ERagdollAuthorityState::Owner;
    this->RagdollAuthorityController = NULL;
    this->DebugParameters = CreateDefaultSubobject<ULSDebugParameters>(TEXT("Debug Parameters"));
    this->DebugArrows = NULL;
    this->ControlRotationArrow = NULL;
    this->TargetRotationArrow = NULL;
    this->CharacterRotationArrow = NULL;
    this->MovementInputArrow = NULL;
    this->LastMovementInputRotationArrow = NULL;
    this->VelocityArrow = NULL;
    this->LastVelocityArrow = NULL;
}

bool ULSCharacterMovementComponent::WantToSprint() const {
    return false;
}

void ULSCharacterMovementComponent::UpdateRagdoll_Server_Implementation(FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize NewActorLocation) {
}

void ULSCharacterMovementComponent::UpdateFloatingRagdoll_Server_Implementation(FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize100 NewRagdollAngularVelocity, FVector_NetQuantize NewActorLocation) {
}

void ULSCharacterMovementComponent::UpdateCharacterMovementSettings() {
}

void ULSCharacterMovementComponent::UnRagdollOther_Server_Implementation(ULSCharacterMovementComponent* Other, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void ULSCharacterMovementComponent::UnRagdoll_Server_Implementation(const FRagdollStateChangeSettings& StateChangeSettings) {
}

bool ULSCharacterMovementComponent::UnRagdoll_K2(FRagdollStateChangeSettings& StateChangeSettings) {
    return false;
}

void ULSCharacterMovementComponent::UnRagdoll_Client_Implementation(const FRagdollStateChangeSettings& StateChangeSettings) {
}

void ULSCharacterMovementComponent::UnProne(ELSStance NewStance) {
}

void ULSCharacterMovementComponent::ToRagdoll_Server_Implementation(const FRagdollStateChangeSettings& StateChangeSettings) {
}

bool ULSCharacterMovementComponent::ToRagdoll_K2(FRagdollStateChangeSettings& StateChangeSettings) {
    return false;
}

void ULSCharacterMovementComponent::ToRagdoll_Client_Implementation(const FRagdollStateChangeSettings& StateChangeSettings) {
}

void ULSCharacterMovementComponent::ToggleDebugInfo() {
}

void ULSCharacterMovementComponent::ToggleAiming() {
}

float ULSCharacterMovementComponent::TimeSinceRagdoll() const {
    return 0.0f;
}

float ULSCharacterMovementComponent::TimeSinceLastStandUp() const {
    return 0.0f;
}

void ULSCharacterMovementComponent::TeleportRagdoll_Server_Implementation(FVector TeleportLocation) {
}

void ULSCharacterMovementComponent::TeleportRagdoll_Multicast_Implementation(FVector TeleportLocation, bool bFromServer) {
}

void ULSCharacterMovementComponent::TeleportRagdoll(const FVector& TeleportLocation, bool bReplicate) {
}

void ULSCharacterMovementComponent::StopAiming() {
}

void ULSCharacterMovementComponent::StartAiming() {
}

void ULSCharacterMovementComponent::SetViewMode(ELSViewMode newViewMode) {
}

void ULSCharacterMovementComponent::SetUseVelocityRotationWhileFlying(bool bNewValue) {
}

void ULSCharacterMovementComponent::SetStance_Server_Implementation(ELSStance NewStance) {
}

void ULSCharacterMovementComponent::SetStance(ELSStance NewStance, bool bMaintainBaseLocation) {
}

void ULSCharacterMovementComponent::SetRotationMode_Server_Implementation(ELSRotationMode newRotationMode, bool bIsLocked) {
}

void ULSCharacterMovementComponent::SetRotationMode(ELSRotationMode newRotationMode) {
}

void ULSCharacterMovementComponent::SetInAirRotationMode(ELSInAirRotationMode NewInAirRotationMode) {
}

void ULSCharacterMovementComponent::SetGait_Server_Implementation(ELSGait NewGait, ELSGait NewAllowedGait) {
}

void ULSCharacterMovementComponent::SetGait(ELSGait NewGait) {
}

void ULSCharacterMovementComponent::SetFixedRotationMode_Server_Implementation(FRotator FixedRotation, bool bIsLocked) {
}

void ULSCharacterMovementComponent::SetCharacterRotation_Server_Implementation(FRotator NewCharacterRotation, bool bInterpolate) {
}

void ULSCharacterMovementComponent::SetCharacterRotation_Multicast_Implementation(FRotator NewCharacterRotation) {
}

void ULSCharacterMovementComponent::SetCharacterRotation(FRotator Rotation, bool bInterpolate, bool bReplicate) {
}

void ULSCharacterMovementComponent::SetCanChangeRagdollState(bool bCanChangeState) {
}

void ULSCharacterMovementComponent::SetAiming_Server_Implementation(bool bNewIsAiming) {
}

void ULSCharacterMovementComponent::ServerUpdateRagdollOnTarget_Implementation(ULSCharacterMovementComponent* TargetComp, FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize NewActorLocation) {
}

void ULSCharacterMovementComponent::ServerUpdateFloatingRagdollOnTarget_Implementation(ULSCharacterMovementComponent* TargetComp, FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize100 NewRagdollAngularVelocity, FVector_NetQuantize NewActorLocation) {
}

void ULSCharacterMovementComponent::ServerUpdateControlRotation_Implementation(FRotator NewRotation) {
}

void ULSCharacterMovementComponent::ServerTeleportRagdollFinished_Implementation() {
}

void ULSCharacterMovementComponent::ServerSetReplicateRagdollLocation_Implementation(bool bShouldReplicate) {
}

void ULSCharacterMovementComponent::ServerSetInAirRotationMode_Implementation(ELSInAirRotationMode NewInAirRotationMode, bool bIsLocked) {
}

void ULSCharacterMovementComponent::ServerEndTempServerRagdollOverride_Implementation() {
}

void ULSCharacterMovementComponent::ServerChangeRagdollAuthority_Implementation(ULSCharacterMovementComponent* MovementComponent, AController* Controller, ERagdollAuthorityState AuthorityMode) {
}

void ULSCharacterMovementComponent::SafeMovementInput_Server_Implementation(FVector_NetQuantize10 newMovementInput) {
}

void ULSCharacterMovementComponent::ResetRagdollAuthorityToOwner_Multicast_Implementation() {
}

void ULSCharacterMovementComponent::ReplicateTargetRotationServer_Implementation(FRotator NewTargetRotation) {
}

void ULSCharacterMovementComponent::ReplicateMovementInput_Multicast_Implementation(FVector_NetQuantize10 newMovementInput) {
}

void ULSCharacterMovementComponent::RagdollOther_Server_Implementation(ULSCharacterMovementComponent* Other, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void ULSCharacterMovementComponent::Prone() {
}

void ULSCharacterMovementComponent::PlayMontage_Server_Implementation(UAnimMontage* InMontage, float PlayRate, float TimeToStartMontageAt, bool bStopAllMontages, bool bIsFromServer) {
}

void ULSCharacterMovementComponent::PlayMontage_Multicast_Implementation(UAnimMontage* InMontage, float PlayRate, float TimeToStartMontageAt, bool bStopAllMontages, bool bIsFromServer) {
}

void ULSCharacterMovementComponent::OnStanceReplicated() {
}

void ULSCharacterMovementComponent::OnRep_RagdollChangeSettings() {
}

void ULSCharacterMovementComponent::OnRagdollAuthControllerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ULSCharacterMovementComponent::OnRagdollAuthControllerDestroyed(AActor* Actor) {
}

void ULSCharacterMovementComponent::OnGaitReplicated() {
}

void ULSCharacterMovementComponent::OnAimingReplicated() {
}

bool ULSCharacterMovementComponent::IsStandingUp() const {
    return false;
}

bool ULSCharacterMovementComponent::IsSprinting() const {
    return false;
}

bool ULSCharacterMovementComponent::IsRotating() const {
    return false;
}

bool ULSCharacterMovementComponent::IsRagdollOnGround() const {
    return false;
}

bool ULSCharacterMovementComponent::IsRagdoll() const {
    return false;
}

bool ULSCharacterMovementComponent::IsProne() const {
    return false;
}

bool ULSCharacterMovementComponent::IsMovingSideways() const {
    return false;
}

bool ULSCharacterMovementComponent::IsMovingForward() const {
    return false;
}

bool ULSCharacterMovementComponent::IsMoving() const {
    return false;
}

bool ULSCharacterMovementComponent::IsLayingOnRightSide() const {
    return false;
}

bool ULSCharacterMovementComponent::IsInZeroGEnvironment() const {
    return false;
}

bool ULSCharacterMovementComponent::IsFaceDown() const {
    return false;
}

void ULSCharacterMovementComponent::IsActorRagdoll_Branch(const AActor* Actor, ERagdollStateOutputPins& OutputPins) {
}

bool ULSCharacterMovementComponent::IsActorRagdoll(const AActor* ActorWithLocomotionComp) {
    return false;
}

FVector ULSCharacterMovementComponent::GetVelocity() const {
    return FVector{};
}

FTransform ULSCharacterMovementComponent::GetOwnerBaseTransformOffset() const {
    return FTransform{};
}

ULSCharacterMovementComponent* ULSCharacterMovementComponent::GetLSMovementComponent(const AActor* ActorWithLSMovementComp) {
    return NULL;
}

ELSMovementDirection ULSCharacterMovementComponent::GetCurrentMovementDirection() const {
    return ELSMovementDirection::Forward;
}

float ULSCharacterMovementComponent::GetClientReplicationDeltaTime() const {
    return 0.0f;
}

void ULSCharacterMovementComponent::ClientSetRagdollOverride_Implementation(FVector_NetQuantize RagdollVelocityOverride) {
}

bool ULSCharacterMovementComponent::CanSprint() const {
    return false;
}

bool ULSCharacterMovementComponent::CanOnlyStandUpOnGround() const {
    return false;
}

bool ULSCharacterMovementComponent::CanChangeRagdollState(FRagdollStateChangeSettings& StateChangeSettings) const {
    return false;
}

void ULSCharacterMovementComponent::AddCharacterRotation(FRotator DeltaRotation, bool bInterpolate, bool bReplicate) {
}

void ULSCharacterMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULSCharacterMovementComponent, bIsRotationModeLocked);
    DOREPLIFETIME(ULSCharacterMovementComponent, RotationModeInAir);
    DOREPLIFETIME(ULSCharacterMovementComponent, RotationMode);
    DOREPLIFETIME(ULSCharacterMovementComponent, bIsAirRotationModeLocked);
    DOREPLIFETIME(ULSCharacterMovementComponent, Gait);
    DOREPLIFETIME(ULSCharacterMovementComponent, Stance);
    DOREPLIFETIME(ULSCharacterMovementComponent, bIsAiming);
    DOREPLIFETIME(ULSCharacterMovementComponent, TargetRotation);
    DOREPLIFETIME(ULSCharacterMovementComponent, AllowedGait);
    DOREPLIFETIME(ULSCharacterMovementComponent, bReplicateRagdollLocation);
    DOREPLIFETIME(ULSCharacterMovementComponent, RagdollVelocity);
    DOREPLIFETIME(ULSCharacterMovementComponent, RagdollAngularVelocity);
    DOREPLIFETIME(ULSCharacterMovementComponent, RagdollLocation);
    DOREPLIFETIME(ULSCharacterMovementComponent, RagdollAuthorityState);
    DOREPLIFETIME(ULSCharacterMovementComponent, RagdollAuthorityController);
    DOREPLIFETIME(ULSCharacterMovementComponent, ControlRotation);
    DOREPLIFETIME(ULSCharacterMovementComponent, RagdollChangeSettings);
}


