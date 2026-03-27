#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGGoatAbility_Headbutt.h"
#include "GGGoatAbility_Lunge.generated.h"

class AActor;
class APhysicsVolume;

UCLASS(Blueprintable)
class GOAT2_API UGGGoatAbility_Lunge : public UGGGoatAbility_Headbutt {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTwoPhasedLunge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnHitRepelSizeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LungeImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LungeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailSafeLungeResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InWaterResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LungeStartCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LungeTrailCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LungeHitCueTag;
    
public:
    UGGGoatAbility_Lunge();

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRepelImpulse(bool SaveRepelledActors, bool ApplySweep, bool IgnoreSavedActors);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnteredWater(APhysicsVolume* WaterVolume);
    
    UFUNCTION(BlueprintCallable)
    void OnCollidedWithSomething(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
};

