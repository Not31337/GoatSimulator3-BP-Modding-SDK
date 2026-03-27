#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_PigSlide.generated.h"

class AActor;
class AGGCharacter;
class AGGGoat;
class AGGStatusEffectSlippery_Greasy;
class AGGVehicle;
class UGGAnimNotify;
class UGGRadialForceComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_PigSlide : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGStatusEffectSlippery_Greasy> GreasyStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSlideImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideImpulsePush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyVelocityLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideVelocityLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusRagdollOnLandedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PigTurnRateWhileSliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGRadialForceComponent> ForceCompClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeForceCompLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceCompSlideVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceCompMinActiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PigSlideGameplayCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PigSlidePushGameplayCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ListenForNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PigSlideEffectSourceTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGStatusEffectSlippery_Greasy* CachedGreasyStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRadialForceComponent* ForceComp;
    
public:
    UGGGearAbility_PigSlide();

private:
    UFUNCTION(BlueprintCallable)
    void OnSlideKickFinished(AGGCharacter* Goat, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerRespawn(AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJump(AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHeadbutt(AGGGoat* GoatHeadbutting);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerBackkick(AGGGoat* GoatKicking, bool bHitSomething, const TArray<AActor*>& KickedActors);
    
};

