#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "Engine/EngineTypes.h"
#include "GGGearAbility.h"
#include "GGGearAbility_PurityRing.generated.h"

class AGGGoat;
class UGGAlternativeGoatDataAsset;
class UGGGoatGear_Static_Base;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_PurityRing : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvisibilityDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle InvisDelayHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings RingEffectPostProcessing;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanActivateAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGAlternativeGoatDataAsset* RegularGoatData;
    
public:
    UGGGearAbility_PurityRing();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimation(AGGGoat* Goat, UGGGoatGear_Static_Base* PurityRing);
    
    UFUNCTION(BlueprintCallable)
    void OnEquippedRing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEffectsEnabled(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEffectsDisabled(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEnableEffect(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDisableEffect(AGGGoat* Goat);
    
};

