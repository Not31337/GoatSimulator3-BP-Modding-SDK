#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGAnimNotifyTriggerDelegateDelegate.h"
#include "GGAnimInstanceInterface.generated.h"

class UAnimMontage;
class UObject;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class GOAT2_API UGGAnimInstanceInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGAnimInstanceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void RemoveEventFromAnimNotifyTriggerDelegate(FGGAnimNotifyTriggerDelegate Event) PURE_VIRTUAL(RemoveEventFromAnimNotifyTriggerDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveAllEventsForObjectFromAnimNotifyTriggerDelegate(UObject* TheObject) PURE_VIRTUAL(RemoveAllEventsForObjectFromAnimNotifyTriggerDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual float PlayMontageNetworked(UAnimMontage* MontageToPlay, float PlayRate, bool bStopAllMontages, float TimeToStartMontageAt) PURE_VIRTUAL(PlayMontageNetworked, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual float PlayGetUpAnimation() PURE_VIRTUAL(PlayGetUpAnimation, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetGetUpAnimationDuration() const PURE_VIRTUAL(GetGetUpAnimationDuration, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanPlayGetUpAnimation() const PURE_VIRTUAL(CanPlayGetUpAnimation, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindEventToAnimNotifyTriggerDelegate(FGGAnimNotifyTriggerDelegate Event) PURE_VIRTUAL(BindEventToAnimNotifyTriggerDelegate,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AnimNotifyTurningInPlace(bool bShouldTurnInPlace, bool bTurningRight) PURE_VIRTUAL(AnimNotifyTurningInPlace,);
    
};

