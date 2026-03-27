#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "Engine/Scene.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "Braking.h"
#include "ELSGait.h"
#include "ELSMovementDirection.h"
#include "EStartGrindingFlags.h"
#include "GGCharacterMovementComponent.h"
#include "GGGrindingParams.h"
#include "GGGrindingVariables.h"
#include "GGRagdollMovementSettings.h"
#include "GGTrickRotationParams.h"
#include "GGTrickRotationState.h"
#include "JumpModifierEffectSettings.h"
#include "JumpModifierSettings.h"
#include "OnGoatBouncyJumpDelegate.h"
#include "OnGoatPerfectLandingDelegate.h"
#include "OnGoatStartedWallrunningDelegate.h"
#include "OnGrindEndDelegate.h"
#include "OnGrindHyperspeedEndDelegate.h"
#include "OnGrindHyperspeedStartDelegate.h"
#include "OnGrindStartDelegate.h"
#include "OnPerfectJumpDelegate.h"
#include "OnTrickCompletedDelegate.h"
#include "RotationTrick.h"
#include "SlipperySetting.h"
#include "Templates/SubclassOf.h"
#include "WallrunModifierEffectSettings.h"
#include "WallrunModifierSettings.h"
#include "GGGoatMovementComponent.generated.h"

class AActor;
class AGGCharacter;
class AGGGoat;
class AGGInstinct;
class AGGNPC;
class AGGWaterPhysicsVolume;
class UAnimMontage;
class UAudioComponent;
class UCameraShakeBase;
class UGGAlternativeGoatDataAsset;
class UGGGoatMovementComponent;
class UGGGrindableSplineComponent;
class UGGLadderComponent;
class UGGWallrunModifierAssetUserData;
class ULSCharacterMovementComponent;
class UObject;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicsAsset;
class UPrimitiveComponent;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatMovementComponent : public UGGCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* OwnerGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGWaterPhysicsVolume* PhysWaterVolume;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedGroundImpactDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedGroundImpactPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SidewaysLandVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatingActorBaseLaunchVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScaleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ExternalMovementObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VelocityLastFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlternateMovementTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SprintParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HelicopterMovementMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HelicopterBrakingDecelerationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SprintParticleSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseHelicopterControlsWhileFlying;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatBouncyJump OnGoatBouncyJump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPerfectJump OnGoatPerfectJump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatPerfectLanding OnGoatPerfectLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> BouncyJumpCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> PrefectJumpCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PerfectJumpPostProcessingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostProcessingJumpTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDoBouncyJumps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpedTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* JumpModTrailPSC;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceJumpMinHorizontalVelocity;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerfectLandingTolerance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasActiveJumpModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpModifierSettings LastUsedJumpMod;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanGoatJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 PreviousPerfectLandingCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoyoteJumpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasJustJumped;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinGGMeshBreakVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanMoveWhileRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StuckRagdollVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StuckRagdollStandupDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSeparateRagdollPhysicsAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGRagdollMovementSettings GroundRagdollMovementSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGRagdollMovementSettings AirRagdollMovementSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGRagdollMovementSettings SwimmingRagdollMovementSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* CachedPhysicsAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BrakingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BrakingParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugPrintBraking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBrakeVelForEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakingVelocityDivide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrictionStrengthMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelLimitToStopBraking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HighSpeedInputRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HighSpeedOutputRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BrakingMontage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BrakingParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* BrakingAudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BrakingStruct, meta=(AllowPrivateAccess=true))
    FBraking BrakingStruct;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlipperySetting DefaultSlipperySetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlipperySetting> AdditionalSlipperySettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=UpdateCharacterMovementSettings, meta=(AllowPrivateAccess=true))
    bool bIsSlippery;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGTrickRotationParams TrickRotationParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotationTrick> RotationTricks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrickCompleted OnTrickCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGGTrickRotationState TrickRotationState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasActiveWallrunModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWallrunModifierSettings CurrentWallrunModSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWallrunModifierEffectSettings CurrentWallrunModEffectSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatStartedWallrunning OnGoatStartWallrunning;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* WallrunModContinuousEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* WallrunModContinuousSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallrunEntryAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartWallrunZVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UprightSlantedWallAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanWallrunOnPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGGNPC>> WallrunableNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallJumpZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallRotInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallrunTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallrunMinInitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallrunMaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallrunMaxZAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallrunMaxLateralAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallrunMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallrunBaseFrictionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UprightSlantedWallFrictionModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownrightSlantedWallFrictionModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallrunMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallrunMinZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BumpCheckMinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BumpLengthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BumpCheckTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BumpStepOverSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NonVelocityLoweringBumpHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MinSuccessfulForwardMovesBeforeNoBump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HopCheckTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HopTraceLateralOffsetMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HopTraceVerticalOffsetMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHopBaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHopFinalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWallrunDurationToReachMaxHopSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHopSpeedDownwardsRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LedgeHopCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushDownSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWallInterpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWallSnapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallrunCameraLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchToWalkingAngleMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UprightSlantedWallAngleAdditionalThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinGroundImpactDotAfterWallrun;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize CurrentWallrunFloorNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize PreviousWallrunFloorNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FQuat CurrentPotentialQuat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bWasWallrunning;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LadderAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LadderMaxClimbingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LadderMaxStrafeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LadderDirectionCorrectionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LadderCenteringMaxLerpDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LadderJumpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftLadderMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicalAnimationData LadderPhysAnimSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGLadderComponent* CurrentLadderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbRefreshTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGrindingParams GrindingParams;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGrindStart OnGrindStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGrindEnd OnGrindEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGrindHyperspeedStart OnGrindHyperspeedStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGrindHyperspeedEnd OnGrindHyperspeedEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGGrindingVariables GrindingVariables;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GodModeAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GodModeMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GodModeSprintingMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IgnoreClientMovementErrorChecksAndCorrectionEffectTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ServerAcceptClientAuthoritativePositionEffectTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGlidingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlidingGravityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlidingMaxFallVelocity;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EasyTrickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MediumTrickName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MediumTrickName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MediumTrickName3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MediumTrickName4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HardTrickName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HardTrickName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HardTrickName3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HardTrickName4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGInstinct* TrampolineBounceInstinct;
    
    UGGGoatMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateRagdollMovementSettings(const UGGAlternativeGoatDataAsset* AGAsset);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopGrinding(bool bReplicateToServer);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetWallrunCameraBoomSettings(bool ResetValues);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGoatJump(bool NewCanJump);
    
    UFUNCTION(BlueprintCallable)
    void SetExternalMovementObject(UObject* InExternalMovementObject);
    
    UFUNCTION(BlueprintCallable)
    void SetCanDoTrickRotation(bool bCanDoTricks);
    
    UFUNCTION(BlueprintCallable)
    void SetCanClimbLadders(bool NewCanClimbLadders);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopGrinding();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartGrinding(UGGGrindableSplineComponent* GrindSplineComp, EStartGrindingFlags Flags);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetWasWallrunning(bool NewWasWallrunning);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSlippery(bool bNewSlippery);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerSetIsHyperspeedGrinding(bool bIsHyperspeedGrindingNow);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetIsDoingTricks(bool bNewSpinning);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSetGodModeSpeed(float NewSpeed);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCurrentFloorNormal(const FVector_NetQuantize& newFloorNormal);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlayContinuousWallrunModEffects(FWallrunModifierEffectSettings WallrunModifierEffectSettings);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnTrickCompleted(int32 TrickIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    AGGInstinct* ResolveTrampolineBounceInstinct();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayJumpModEffectsMultiCast(FJumpModifierEffectSettings JumpModifierEffectSettings);
    
    UFUNCTION(BlueprintCallable)
    void PlayJumpModEffects(FJumpModifierEffectSettings JumpModifierEffectSettings);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayImpactWallrunModEffects(FWallrunModifierEffectSettings WallrunModifierEffectSettings, FHitResult Impact);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayContinuousWallrunModEffectsMultiCast(FWallrunModifierEffectSettings WallrunModifierEffectSettings);
    
    UFUNCTION(BlueprintCallable)
    void PlayContinuousWallrunModEffects(FWallrunModifierEffectSettings WallrunModifierEffectSettings);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentGrindedSpline();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BrakingStruct();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRemovePerfectJumpPostProcessing();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGaitChanged(ELSGait NewGait, ULSCharacterMovementComponent* MovementComp);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEffectSourceChanged(FGameplayTag EffectTag, bool IsAdded);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDirectionChanged(ELSMovementDirection NewDirection, ELSMovementDirection OldDirection, ULSCharacterMovementComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    void OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSetIsHyperspeedGrinding(bool bIsHyperspeedGrindingNow);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReplicateCurrentGrindedSpline(UGGGrindableSplineComponent* GrindedSpline);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastReactivateSprintingTrail();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnTrickCompleted(int32 TrickIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWallrunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlippery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHyperspeedGrinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHelicopterFlying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoingTricks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClimbingLadder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBraking() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnGoatJumped(AGGCharacter* CharacterGoat);
    
public:
    UFUNCTION(BlueprintCallable)
    UGGWallrunModifierAssetUserData* GetWallrunModAssetUserDataFromFloor(FFindFloorResult InFloor);
    
    UFUNCTION(BlueprintCallable)
    FVector GetNormalizedUnrotatedVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGGGoatMovementComponent* GetGoatMovementComponent(AActor* ActorWithComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FastEnoughForEffects() const;
    
    UFUNCTION(BlueprintCallable)
    bool DoBouncyJump(bool PerfectLanding);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetCanDoTrickRotation(bool bCanDoTricks);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanWallrunOnComponent(const UPrimitiveComponent* Component, bool bAssumeReadyToWallRun) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGoatJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BrakingChanged_K2(bool bIsBraking, float StartBrakingSpeed);
    
};

