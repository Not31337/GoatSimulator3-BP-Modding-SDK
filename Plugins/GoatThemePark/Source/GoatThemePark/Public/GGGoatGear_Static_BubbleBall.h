#pragma once
#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "GameplayTagContainer.h"
#include "GGGoatGear_Static_Base.h"
#include "BubbleScaleUpState.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Static_BubbleBall.generated.h"

class AGGPhysicsActor_BubbleBall;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGGoatGear_Static_BubbleBall : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor_BubbleBall> BubbleBallClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* InflateSound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MaxBallCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RumbleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BubbleScaleUpState, meta=(AllowPrivateAccess=true))
    FBubbleScaleUpState BubbleScaleUpState;
    
public:
    UGGGoatGear_Static_BubbleBall(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BubbleScaleUpState();
    
};

