#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGGoatAbility_BackKick.h"
#include "GGGoatAbility_BackLunge.generated.h"

class AActor;
class APhysicsVolume;

UCLASS(Blueprintable)
class GOAT2_API UGGGoatAbility_BackLunge : public UGGGoatAbility_BackKick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTwoPhasedBackLunge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnHitRepelSizeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackLungeImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackLungeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailSafeBackLungeResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InWaterResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BackLungeStartCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BackLungeTrailCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BackLungeHitCueTag;
    
public:
    UGGGoatAbility_BackLunge();

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRepelImpulse(bool SaveRepelledActors, bool ApplySweep, bool IgnoreSavedActors);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnteredWater(APhysicsVolume* WaterVolume);
    
    UFUNCTION(BlueprintCallable)
    void OnCollidedWithSomething(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
};

