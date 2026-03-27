#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Megaphone.generated.h"

class AActor;
class AGGGoat;
class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_Megaphone : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MegaphoneBaaSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ForceActorClass;
    
public:
    UGGGearAbility_Megaphone();

private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void PlayMegaphoneEffectServer(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable)
    void PlayMegaphoneEffects(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable)
    void PlayAbility(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCreateForceActor(AGGGoat* Goat);
    
};

