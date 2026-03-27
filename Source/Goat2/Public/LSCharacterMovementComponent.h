#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Animation/PoseSnapshot.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "AimingChanged_SignatureDelegate.h"
#include "DirectionChanged_SignatureDelegate.h"
#include "ELSGait.h"
#include "ELSInAirRotationMode.h"
#include "ELSMovementDirection.h"
#include "ELSRotationMode.h"
#include "ELSStance.h"
#include "ELSViewMode.h"
#include "ERagdollAuthorityState.h"
#include "ERagdollStateOutputPins.h"
#include "FinishStandingUp_SignatureDelegate.h"
#include "GGPendingForce.h"
#include "GGPendingRadialForce.h"
#include "GaitChanged_SignatureDelegate.h"
#include "LSEssentialVariables.h"
#include "LSGaitsFloat.h"
#include "MovementModeChanged_SignatureDelegate.h"
#include "MovementSpeedChanged_SignatureDelegate.h"
#include "RagdollStateChangeSettings.h"
#include "RotationModeChanged_SignatureDelegate.h"
#include "StanceChanged_SignatureDelegate.h"
#include "ToRagdoll_SignatureDelegate.h"
#include "TurnInPlaceTriggered_SignatureDelegate.h"
#include "UnRagdoll_SignatureDelegate.h"
#include "ViewModeChanged_SignatureDelegate.h"
#include "LSCharacterMovementComponent.generated.h"

class AActor;
class AController;
class UAnimInstance;
class UAnimMontage;
class UArrowComponent;
class UCurveFloat;
class ULSCharacterMovementComponent;
class ULSDebugParameters;
class ULSRagdollSyncParameters;
class UObject;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API ULSCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGaitChanged_Signature GaitChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStanceChanged_Signature StanceChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewModeChanged_Signature ViewModeChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAimingChanged_Signature AimingChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotationModeChanged_Signature RotationModeChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementModeChanged_Signature MovementModeChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToRagdoll_Signature ToRagdollEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnRagdoll_Signature UnRagdollEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishStandingUp_Signature FinishStandingUpEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementSpeedChanged_Signature CharacterMovementSettingsChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectionChanged_Signature DirectionChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurnInPlaceTriggered_Signature TurnInPlaceTriggeredEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PelvisBoneName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PelvisSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimalTimeInRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanOnlyStandUpOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NeckBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollAllowedStandupVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputBlockDurationDuringStandUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RagdollSyncBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULSRagdollSyncParameters* RagdollSyncParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRagdollImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELSGait DefaultGait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSGaitsFloat MovementSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSGaitsFloat CrouchMovementSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSGaitsFloat FlyingSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProneMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSGaitsFloat MovementGroundFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientReplicationDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayToClearForces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCapsuleDiveDepthFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSGaitsFloat CharacterRotationSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSGaitsFloat CharacterRotationSpeed_AimingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* StationaryTurnSpeed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTriggerTurnInPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAirRotationModeWhileFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HelicopterFlyingPitchAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HelicopterFlyingRollAngleRange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnInPlaceAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnInPlaceAimYawRateLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnInPlaceDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterInAirRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterFlyingRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVelocityRotationWhileFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BufferAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsRotationModeLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELSViewMode ViewMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ELSInAirRotationMode RotationModeInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ELSRotationMode RotationMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAirRotationModeLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInputRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSEssentialVariables Variables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnGaitReplicated, meta=(AllowPrivateAccess=true))
    ELSGait Gait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> PreviousMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnStanceReplicated, meta=(AllowPrivateAccess=true))
    ELSStance Stance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnAimingReplicated, meta=(AllowPrivateAccess=true))
    bool bIsAiming;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot RagdollSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RootBoneTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator TargetRotation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollOnGroundTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollOnGroundTransitionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=UpdateCharacterMovementSettings, meta=(AllowPrivateAccess=true))
    ELSGait AllowedGait;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bReplicateRagdollLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize RagdollVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 RagdollAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize RagdollLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ERagdollAuthorityState RagdollAuthorityState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AController* RagdollAuthorityController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FRotator ControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RagdollChangeSettings, meta=(AllowPrivateAccess=true))
    FRagdollStateChangeSettings RagdollChangeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FGGPendingForce> PendingForces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FGGPendingRadialForce> PendingRadialForces;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULSDebugParameters* DebugParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DebugArrows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ControlRotationArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* TargetRotationArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* CharacterRotationArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* MovementInputArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* LastMovementInputRotationArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* VelocityArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* LastVelocityArrow;
    
    ULSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WantToSprint() const;
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void UpdateRagdoll_Server(FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize NewActorLocation);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void UpdateFloatingRagdoll_Server(FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize100 NewRagdollAngularVelocity, FVector_NetQuantize NewActorLocation);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateCharacterMovementSettings();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UnRagdollOther_Server(ULSCharacterMovementComponent* Other, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UnRagdoll_Server(const FRagdollStateChangeSettings& StateChangeSettings);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool UnRagdoll_K2(UPARAM(Ref) FRagdollStateChangeSettings& StateChangeSettings);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UnRagdoll_Client(const FRagdollStateChangeSettings& StateChangeSettings);
    
public:
    UFUNCTION(BlueprintCallable)
    void UnProne(ELSStance NewStance);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ToRagdoll_Server(const FRagdollStateChangeSettings& StateChangeSettings);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ToRagdoll_K2(UPARAM(Ref) FRagdollStateChangeSettings& StateChangeSettings);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ToRagdoll_Client(const FRagdollStateChangeSettings& StateChangeSettings);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ToggleDebugInfo();
    
    UFUNCTION(BlueprintCallable)
    void ToggleAiming();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float TimeSinceRagdoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float TimeSinceLastStandUp() const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TeleportRagdoll_Server(FVector TeleportLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TeleportRagdoll_Multicast(FVector TeleportLocation, bool bFromServer);
    
public:
    UFUNCTION(BlueprintCallable)
    void TeleportRagdoll(const FVector& TeleportLocation, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void StopAiming();
    
    UFUNCTION(BlueprintCallable)
    void StartAiming();
    
    UFUNCTION(BlueprintCallable)
    void SetViewMode(ELSViewMode newViewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetUseVelocityRotationWhileFlying(bool bNewValue);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetStance_Server(ELSStance NewStance);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStance(ELSStance NewStance, bool bMaintainBaseLocation);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetRotationMode_Server(ELSRotationMode newRotationMode, bool bIsLocked);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRotationMode(ELSRotationMode newRotationMode);
    
    UFUNCTION(BlueprintCallable)
    void SetInAirRotationMode(ELSInAirRotationMode NewInAirRotationMode);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetGait_Server(ELSGait NewGait, ELSGait NewAllowedGait);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGait(ELSGait NewGait);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetFixedRotationMode_Server(FRotator FixedRotation, bool bIsLocked);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SetCharacterRotation_Server(FRotator NewCharacterRotation, bool bInterpolate);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetCharacterRotation_Multicast(FRotator NewCharacterRotation);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCharacterRotation(FRotator Rotation, bool bInterpolate, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void SetCanChangeRagdollState(bool bCanChangeState);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetAiming_Server(bool bNewIsAiming);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerUpdateRagdollOnTarget(ULSCharacterMovementComponent* TargetComp, FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize NewActorLocation);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerUpdateFloatingRagdollOnTarget(ULSCharacterMovementComponent* TargetComp, FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize100 NewRagdollAngularVelocity, FVector_NetQuantize NewActorLocation);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerUpdateControlRotation(FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTeleportRagdollFinished();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetReplicateRagdollLocation(bool bShouldReplicate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetInAirRotationMode(ELSInAirRotationMode NewInAirRotationMode, bool bIsLocked);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEndTempServerRagdollOverride();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerChangeRagdollAuthority(ULSCharacterMovementComponent* MovementComponent, AController* Controller, ERagdollAuthorityState AuthorityMode);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void SafeMovementInput_Server(FVector_NetQuantize10 newMovementInput);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ResetRagdollAuthorityToOwner_Multicast();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ReplicateTargetRotationServer(FRotator NewTargetRotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void ReplicateMovementInput_Multicast(FVector_NetQuantize10 newMovementInput);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RagdollOther_Server(ULSCharacterMovementComponent* Other, const FRagdollStateChangeSettings& StateChangeSettings);
    
public:
    UFUNCTION(BlueprintCallable)
    void Prone();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PlayMontage_Server(UAnimMontage* InMontage, float PlayRate, float TimeToStartMontageAt, bool bStopAllMontages, bool bIsFromServer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayMontage_Multicast(UAnimMontage* InMontage, float PlayRate, float TimeToStartMontageAt, bool bStopAllMontages, bool bIsFromServer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStanceReplicated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RagdollChangeSettings();
    
    UFUNCTION(BlueprintCallable)
    void OnRagdollAuthControllerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnRagdollAuthControllerDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnGaitReplicated();
    
    UFUNCTION(BlueprintCallable)
    void OnAimingReplicated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandingUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRotating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRagdollOnGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRagdoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProne() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingSideways() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLayingOnRightSide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInZeroGEnvironment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFaceDown() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    static void IsActorRagdoll_Branch(const AActor* Actor, ERagdollStateOutputPins& OutputPins);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorRagdoll(const AActor* ActorWithLocomotionComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVelocity() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetOwnerBaseTransformOffset() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULSCharacterMovementComponent* GetLSMovementComponent(const AActor* ActorWithLSMovementComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELSMovementDirection GetCurrentMovementDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClientReplicationDeltaTime() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetRagdollOverride(FVector_NetQuantize RagdollVelocityOverride);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSprint() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CanOnlyStandUpOnGround() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeRagdollState(UPARAM(Ref) FRagdollStateChangeSettings& StateChangeSettings) const;
    
    UFUNCTION(BlueprintCallable)
    void AddCharacterRotation(FRotator DeltaRotation, bool bInterpolate, bool bReplicate);
    
};

