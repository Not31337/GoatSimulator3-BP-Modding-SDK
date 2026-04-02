#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GGAnimInstance_StickyBomb_Blob.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class GEARPACK_FUTURE_API UGGAnimInstance_StickyBomb_Blob : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovingSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayStopMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimNotify_AttackAnimationEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasPlayedAttackAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCooldownOver;
    
    UGGAnimInstance_StickyBomb_Blob();

};

