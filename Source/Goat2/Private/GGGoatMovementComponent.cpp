#include "GGGoatMovementComponent.h"
#include "ECanStandUpBelowVehicle.h"
#include "Net/UnrealNetwork.h"

UGGGoatMovementComponent::UGGGoatMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPushForceUsingZOffset = true;
    this->bUseRVOAvoidance = true;
    this->bCanTriggerTurnInPlace = false;
    this->CanStandUpBelowVehicle = ECanStandUpBelowVehicle::Yes;
    this->OwnerGoat = NULL;
    this->PhysWaterVolume = NULL;
    this->AllowedGroundImpactDot = 0.95f;
    this->AllowedGroundImpactPitch = 5.00f;
    this->SidewaysLandVelocityThreshold = 700.00f;
    this->SimulatingActorBaseLaunchVelocity = 300.00f;
    this->GravityScaleOverride = 1.00f;
    this->ExternalMovementObject = NULL;
    this->AlternateMovementTurnRate = 0.00f;
    this->SprintParticles = NULL;
    this->HelicopterMovementMaxSpeed = 1200.00f;
    this->HelicopterBrakingDecelerationFactor = 0.20f;
    this->SprintParticleSystemComponent = NULL;
    this->bUseHelicopterControlsWhileFlying = false;
    this->BouncyJumpCameraShake = NULL;
    this->PrefectJumpCameraShake = NULL;
    this->PostProcessingJumpTimer = 0.80f;
    this->bCanDoBouncyJumps = true;
    this->JumpedTimeStamp = 0.00f;
    this->JumpModTrailPSC = NULL;
    this->BounceJumpMinHorizontalVelocity = 400.00f;
    this->PerfectLandingTolerance = 0.12f;
    this->bHasActiveJumpModifier = false;
    this->bCanGoatJump = true;
    this->PreviousPerfectLandingCount = 0;
    this->CoyoteJumpTime = 0.50f;
    this->bHasJustJumped = false;
    this->MinGGMeshBreakVel = 600.00f;
    this->bCanMoveWhileRagdoll = true;
    this->StuckRagdollVelocityThreshold = 500.00f;
    this->StuckRagdollStandupDelay = 2.00f;
    this->bUseSeparateRagdollPhysicsAsset = false;
    this->CachedPhysicsAsset = NULL;
    this->BrakingSound = NULL;
    this->BrakingParticles = NULL;
    this->bDebugPrintBraking = false;
    this->MinBrakeVelForEffects = 500.00f;
    this->BrakingVelocityDivide = 250000.00f;
    this->FrictionStrengthMin = 0.00f;
    this->VelLimitToStopBraking = 5.00f;
    this->BrakingMontage = NULL;
    this->BrakingParticleComp = NULL;
    this->BrakingAudioComp = NULL;
    this->AdditionalSlipperySettings.AddDefaulted(1);
    this->bIsSlippery = false;
    this->bHasActiveWallrunModifier = false;
    this->WallrunModContinuousEffect = NULL;
    this->WallrunModContinuousSound = NULL;
    this->WallrunEntryAngleThreshold = 80.00f;
    this->StartWallrunZVelocityThreshold = -300.00f;
    this->UprightSlantedWallAngleThreshold = 15.00f;
    this->bCanWallrunOnPlayers = false;
    this->WallJumpZ = 600.00f;
    this->WallRotInterpSpeed = 15.00f;
    this->WallrunTurnRate = 3.00f;
    this->WallrunMinInitialSpeed = 350.00f;
    this->WallrunMaxAcceleration = 2000.00f;
    this->WallrunMaxZAcceleration = 800.00f;
    this->WallrunMaxLateralAcceleration = 200.00f;
    this->WallrunMaxSpeed = 675.00f;
    this->WallrunBaseFrictionFactor = 1.75f;
    this->UprightSlantedWallFrictionModifier = 0.50f;
    this->DownrightSlantedWallFrictionModifier = 0.25f;
    this->WallrunMinSpeed = 5.00f;
    this->WallrunMinZVelocity = -175.00f;
    this->BumpCheckMinAngle = 80.00f;
    this->BumpLengthThreshold = 50.00f;
    this->BumpCheckTraceLength = 30.00f;
    this->BumpStepOverSpeedMultiplier = 1.40f;
    this->NonVelocityLoweringBumpHits = 20;
    this->MinSuccessfulForwardMovesBeforeNoBump = 10;
    this->HopCheckTraceLength = 50.00f;
    this->HopTraceLateralOffsetMultiplier = 0.75f;
    this->HopTraceVerticalOffsetMultiplier = 0.75f;
    this->MinHopBaseSpeed = 400.00f;
    this->MinHopFinalSpeed = 350.00f;
    this->MinWallrunDurationToReachMaxHopSpeed = 0.40f;
    this->MaxHopSpeedDownwardsRatio = 0.20f;
    this->PushDownSpeedMultiplier = 0.30f;
    this->MinWallInterpDistance = 5.00f;
    this->MinWallSnapDistance = 50.00f;
    this->WallrunCameraLagSpeed = 500.00f;
    this->SwitchToWalkingAngleMargin = 0.00f;
    this->UprightSlantedWallAngleAdditionalThreshold = 15.00f;
    this->MinGroundImpactDotAfterWallrun = 0.50f;
    this->bWasWallrunning = false;
    this->LadderAcceleration = 3000.00f;
    this->LadderMaxClimbingSpeed = 500.00f;
    this->LadderMaxStrafeSpeed = 250.00f;
    this->LadderDirectionCorrectionRate = 10.00f;
    this->LadderCenteringMaxLerpDist = 10.00f;
    this->LadderJumpSpeed = 550.00f;
    this->LeftLadderMaxVelocity = 300.00f;
    this->CurrentLadderComponent = NULL;
    this->ClimbRefreshTime = 0.30f;
    this->GodModeAcceleration = 50.00f;
    this->GodModeMaxSpeed = 2000.00f;
    this->GodModeSprintingMaxSpeed = 10000.00f;
    this->bIsGlidingEnabled = false;
    this->GlidingGravityOverride = 0.50f;
    this->GlidingMaxFallVelocity = 100.00f;
    this->EasyTrickName = TEXT("doublebackflip");
    this->MediumTrickName3 = TEXT("sidewaysdoublebackflip");
    this->MediumTrickName4 = TEXT("sidewaysdoublebackflipreverse");
    this->TrampolineBounceInstinct = NULL;
}

void UGGGoatMovementComponent::UpdateRagdollMovementSettings(const UGGAlternativeGoatDataAsset* AGAsset) {
}

void UGGGoatMovementComponent::StopGrinding(bool bReplicateToServer) {
}

void UGGGoatMovementComponent::SetWallrunCameraBoomSettings(bool ResetValues) {
}

void UGGGoatMovementComponent::SetGoatJump(bool NewCanJump) {
}

void UGGGoatMovementComponent::SetExternalMovementObject(UObject* InExternalMovementObject) {
}

void UGGGoatMovementComponent::SetCanDoTrickRotation(bool bCanDoTricks) {
}

void UGGGoatMovementComponent::SetCanClimbLadders(bool NewCanClimbLadders) {
}

void UGGGoatMovementComponent::ServerStopGrinding_Implementation() {
}

void UGGGoatMovementComponent::ServerStartGrinding_Implementation(UGGGrindableSplineComponent* GrindSplineComp, EStartGrindingFlags Flags) {
}

void UGGGoatMovementComponent::ServerSetWasWallrunning_Implementation(bool NewWasWallrunning) {
}
bool UGGGoatMovementComponent::ServerSetWasWallrunning_Validate(bool NewWasWallrunning) {
    return true;
}

void UGGGoatMovementComponent::ServerSetSlippery_Implementation(bool bNewSlippery) {
}
bool UGGGoatMovementComponent::ServerSetSlippery_Validate(bool bNewSlippery) {
    return true;
}

void UGGGoatMovementComponent::ServerSetIsHyperspeedGrinding_Implementation(bool bIsHyperspeedGrindingNow) {
}
bool UGGGoatMovementComponent::ServerSetIsHyperspeedGrinding_Validate(bool bIsHyperspeedGrindingNow) {
    return true;
}

void UGGGoatMovementComponent::ServerSetIsDoingTricks_Implementation(bool bNewSpinning) {
}

void UGGGoatMovementComponent::ServerSetGodModeSpeed_Implementation(float NewSpeed) {
}

void UGGGoatMovementComponent::ServerSetCurrentFloorNormal_Implementation(const FVector_NetQuantize& newFloorNormal) {
}
bool UGGGoatMovementComponent::ServerSetCurrentFloorNormal_Validate(const FVector_NetQuantize& newFloorNormal) {
    return true;
}

void UGGGoatMovementComponent::ServerPlayContinuousWallrunModEffects_Implementation(FWallrunModifierEffectSettings WallrunModifierEffectSettings) {
}

void UGGGoatMovementComponent::ServerOnTrickCompleted_Implementation(int32 TrickIndex) {
}
bool UGGGoatMovementComponent::ServerOnTrickCompleted_Validate(int32 TrickIndex) {
    return true;
}

AGGInstinct* UGGGoatMovementComponent::ResolveTrampolineBounceInstinct() {
    return NULL;
}

void UGGGoatMovementComponent::PlayJumpModEffectsMultiCast_Implementation(FJumpModifierEffectSettings JumpModifierEffectSettings) {
}

void UGGGoatMovementComponent::PlayJumpModEffects(FJumpModifierEffectSettings JumpModifierEffectSettings) {
}

void UGGGoatMovementComponent::PlayImpactWallrunModEffects_Implementation(FWallrunModifierEffectSettings WallrunModifierEffectSettings, FHitResult Impact) {
}

void UGGGoatMovementComponent::PlayContinuousWallrunModEffectsMultiCast_Implementation(FWallrunModifierEffectSettings WallrunModifierEffectSettings) {
}

void UGGGoatMovementComponent::PlayContinuousWallrunModEffects(FWallrunModifierEffectSettings WallrunModifierEffectSettings) {
}

void UGGGoatMovementComponent::OnRep_CurrentGrindedSpline() {
}

void UGGGoatMovementComponent::OnRep_BrakingStruct() {
}

void UGGGoatMovementComponent::OnRemovePerfectJumpPostProcessing() {
}

void UGGGoatMovementComponent::OnGaitChanged(ELSGait NewGait, ULSCharacterMovementComponent* MovementComp) {
}

void UGGGoatMovementComponent::OnEffectSourceChanged(FGameplayTag EffectTag, bool IsAdded) {
}

void UGGGoatMovementComponent::OnDirectionChanged(ELSMovementDirection NewDirection, ELSMovementDirection OldDirection, ULSCharacterMovementComponent* Comp) {
}

void UGGGoatMovementComponent::OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}

void UGGGoatMovementComponent::MulticastSetIsHyperspeedGrinding_Implementation(bool bIsHyperspeedGrindingNow) {
}

void UGGGoatMovementComponent::MulticastReplicateCurrentGrindedSpline_Implementation(UGGGrindableSplineComponent* GrindedSpline) {
}

void UGGGoatMovementComponent::MulticastReactivateSprintingTrail_Implementation() {
}

void UGGGoatMovementComponent::MulticastOnTrickCompleted_Implementation(int32 TrickIndex) {
}

bool UGGGoatMovementComponent::IsWallrunning() const {
    return false;
}

bool UGGGoatMovementComponent::IsSlippery() const {
    return false;
}

bool UGGGoatMovementComponent::IsHyperspeedGrinding() const {
    return false;
}

bool UGGGoatMovementComponent::IsHelicopterFlying() const {
    return false;
}

bool UGGGoatMovementComponent::IsGrinding() const {
    return false;
}

bool UGGGoatMovementComponent::IsDoingTricks() const {
    return false;
}

bool UGGGoatMovementComponent::IsClimbingLadder() const {
    return false;
}

bool UGGGoatMovementComponent::IsBraking() const {
    return false;
}

void UGGGoatMovementComponent::HandleOnGoatJumped(AGGCharacter* CharacterGoat) {
}

UGGWallrunModifierAssetUserData* UGGGoatMovementComponent::GetWallrunModAssetUserDataFromFloor(FFindFloorResult InFloor) {
    return NULL;
}

FVector UGGGoatMovementComponent::GetNormalizedUnrotatedVelocity() {
    return FVector{};
}

UGGGoatMovementComponent* UGGGoatMovementComponent::GetGoatMovementComponent(AActor* ActorWithComp) {
    return NULL;
}

bool UGGGoatMovementComponent::FastEnoughForEffects() const {
    return false;
}

bool UGGGoatMovementComponent::DoBouncyJump(bool PerfectLanding) {
    return false;
}

void UGGGoatMovementComponent::ClientSetCanDoTrickRotation_Implementation(bool bCanDoTricks) {
}

bool UGGGoatMovementComponent::CanWallrunOnComponent(const UPrimitiveComponent* Component, bool bAssumeReadyToWallRun) const {
    return false;
}

bool UGGGoatMovementComponent::CanGoatJump() const {
    return false;
}


void UGGGoatMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatMovementComponent, bUseHelicopterControlsWhileFlying);
    DOREPLIFETIME(UGGGoatMovementComponent, bCanGoatJump);
    DOREPLIFETIME(UGGGoatMovementComponent, PreviousPerfectLandingCount);
    DOREPLIFETIME(UGGGoatMovementComponent, BrakingStruct);
    DOREPLIFETIME(UGGGoatMovementComponent, bIsSlippery);
    DOREPLIFETIME(UGGGoatMovementComponent, TrickRotationState);
    DOREPLIFETIME(UGGGoatMovementComponent, CurrentWallrunFloorNormal);
    DOREPLIFETIME(UGGGoatMovementComponent, PreviousWallrunFloorNormal);
    DOREPLIFETIME(UGGGoatMovementComponent, CurrentPotentialQuat);
    DOREPLIFETIME(UGGGoatMovementComponent, bWasWallrunning);
}


