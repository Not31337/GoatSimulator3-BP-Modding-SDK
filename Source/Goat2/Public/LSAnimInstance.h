#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Engine/EngineTypes.h"
#include "ELSGait.h"
#include "ELSRotationMode.h"
#include "ELSStance.h"
#include "ELSViewMode.h"
#include "GGAnimInstanceInterface.h"
#include "GGAnimNotifyTriggerDelegateDelegate.h"
#include "LSAnimInstanceProxy.h"
#include "LSAnimationSpeeds.h"
#include "LSTurnAnims.h"
#include "RagdollStateChangeSettings.h"
#include "LSAnimInstance.generated.h"

class ACharacter;
class UAnimMontage;
class UAnimSequenceBase;
class UCurveFloat;
class ULSCharacterMovementComponent;
class UObject;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API ULSAnimInstance : public UAnimInstance, public IGGAnimInstanceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TurnAngleCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TurnMontageSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSTurnAnims Turn90Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSTurnAnims Turn180Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSTurnAnims Turn90LeftFootAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSTurnAnims Turn90RightFootAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSTurnAnims TurnCrouchedRF90Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSTurnAnims TurnCrouchedLF90Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSTurnAnims TurnCrouched180Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FlailAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LandAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlailBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLSAnimationSpeeds AnimSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaDistanceForTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetUpFromBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetUpFromFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetUpFromLeftSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetUpFromRightSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AdditiveLandAnimation;
    
public:
    ULSAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnViewModeChanged(ELSViewMode NewMode, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnTurnInPlaceTriggered(ULSCharacterMovementComponent* MovementComp, float DeltaAngle);
    
    UFUNCTION(BlueprintCallable)
    void OnStanceChanged(ELSStance NewStance, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnRotationModeChanged(ELSRotationMode NewMode, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnRagdolling(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementSpeedChanged(ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(TEnumAsByte<EMovementMode> NewMode, TEnumAsByte<EMovementMode> PrevMode, uint8 NewCustomMode, uint8 PrevCustomMode, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnGaitChanged(ELSGait NewGait, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishStandingUp(ULSCharacterMovementComponent* MovementComp, ACharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnAimingChanged(bool bIsAimingNow, ULSCharacterMovementComponent* MovementComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLSAnimInstanceProxy GetProxyRef(bool& OutIsValid) const;
    

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

