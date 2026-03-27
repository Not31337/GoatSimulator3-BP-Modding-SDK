#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "BoneContainer.h"
#include "Engine/EngineTypes.h"
#include "Animation/PoseSnapshot.h"
#include "BaseAnimInstanceProxy.h"
#include "ELSGait.h"
#include "ELSRotationMode.h"
#include "ELSStance.h"
#include "ELSViewMode.h"
#include "GGAnimInstanceInterface.h"
#include "GGAnimNotifyTriggerDelegateDelegate.h"
#include "GGHandIKInterface.h"
#include "HandIKBones.h"
#include "HandIKValue.h"
#include "LSGaitsFloat.h"
#include "LSTurnInPlaceAsset.h"
#include "RagdollStateChangeSettings.h"
#include "LSBaseAnimInstance.generated.h"

class AActor;
class ACharacter;
class UAnimMontage;
class UAnimSequenceBase;
class UGGCharacterPushComponent;
class ULSCharacterMovementComponent;
class UObject;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API ULSBaseAnimInstance : public UAnimInstance, public IGGAnimInstanceInterface, public IGGHandIKInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBaseAnimInstanceProxy Proxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveEnableLeftHandIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveEnableRightHandIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveLayeringArmLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveLayeringArmRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateInPlaceAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RotationAnimPlayRateRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveEnableTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Turn180Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveTurnRotationSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference LeftFootLockIKBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference LeftFootTargetBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference RightFootLockIKBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference RightFootTargetBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToTriggerTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleToTriggerTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSTurnInPlaceAsset TurnLeft90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSTurnInPlaceAsset TurnRight90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSTurnInPlaceAsset TurnLeft180;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSTurnInPlaceAsset TurnRight180;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSTurnInPlaceAsset CrouchTurnLeft90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSTurnInPlaceAsset CrouchTurnRight90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DynamicTransitionLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DynamicTransitionRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetUpFromBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetUpFromFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetUpFromLeftSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetUpFromRightSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseConstantInterpSpeedForLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtLocationConstantInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtLocationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSGaitsFloat AnimatedMovementSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimatedCrouchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStumbleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaDistanceForTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHandIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHandIKBones LeftHandBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHandIKBones RightHandBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroundedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODThresholdDynamicTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VisualDebugStringOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor VisualDebugStringColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHandIKValue LeftHandIKValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHandIKValue RightHandIKValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootBoneAdjustmentAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RootBoneTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RootBoneTargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot PoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastActiveTurnAnimation;
    
public:
    ULSBaseAnimInstance();

private:
    UFUNCTION(BlueprintCallable)
    void OnViewModeChanged(ELSViewMode NewMode, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnTurnInPlaceTriggered(ULSCharacterMovementComponent* MovementComp, float DeltaAngle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStumbled(UGGCharacterPushComponent* Stumbled, AActor* Pusher, float Speed, FVector Direction);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStanceChanged(ELSStance NewStance, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnRotationModeChanged(ELSRotationMode NewMode, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnRagdolling(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPushed(UGGCharacterPushComponent* Pushed, FVector Velocity);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(TEnumAsByte<EMovementMode> NewMode, TEnumAsByte<EMovementMode> PrevMode, uint8 NewCustomMode, uint8 PrevCustomMode, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnGaitChanged(ELSGait NewGait, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishStandingUp(ULSCharacterMovementComponent* MovementComp, ACharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrounded() const;
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void RemoveEventFromAnimNotifyTriggerDelegate(FGGAnimNotifyTriggerDelegate Event) override PURE_VIRTUAL(RemoveEventFromAnimNotifyTriggerDelegate,);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllEventsForObjectFromAnimNotifyTriggerDelegate(UObject* TheObject) override PURE_VIRTUAL(RemoveAllEventsForObjectFromAnimNotifyTriggerDelegate,);
    
    UFUNCTION(BlueprintCallable)
    float PlayMontageNetworked(UAnimMontage* MontageToPlay, float PlayRate, bool bStopAllMontages, float TimeToStartMontageAt) override PURE_VIRTUAL(PlayMontageNetworked, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    float PlayGetUpAnimation() override PURE_VIRTUAL(PlayGetUpAnimation, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    float GetGetUpAnimationDuration() const override PURE_VIRTUAL(GetGetUpAnimationDuration, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    bool CanPlayGetUpAnimation() const override PURE_VIRTUAL(CanPlayGetUpAnimation, return false;);
    
    UFUNCTION(BlueprintCallable)
    void BindEventToAnimNotifyTriggerDelegate(FGGAnimNotifyTriggerDelegate Event) override PURE_VIRTUAL(BindEventToAnimNotifyTriggerDelegate,);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotifyTurningInPlace(bool bShouldTurnInPlace, bool bTurningRight) override PURE_VIRTUAL(AnimNotifyTurningInPlace,);
    
};

