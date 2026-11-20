#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GGAnimInstanceInterface.h"
#include "GGAnimNotifyTriggerDelegateDelegate.h"
#include "GGCthillaTentaclesAnimInstance.generated.h"

class UAnimMontage;
class UObject;

UCLASS(Blueprintable, NonTransient)
class GOATTHEMEPARK_API UGGCthillaTentaclesAnimInstance : public UAnimInstance, public IGGAnimInstanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPreviewGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftTentacleWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightTentacleWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedLeftGrabbedWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedRightGrabbedWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLeftGrabbedWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRightGrabbedWait;
    
    UGGCthillaTentaclesAnimInstance();


    // Fix for true pure virtual functions not being implemented
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

