#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_TankSmash.generated.h"

class AActor;
class AGGGoat;
class UCameraShakeBase;
class UGGAlternativeGoatDataAsset;
class UGGRadialForceComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_TankSmash : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SmashCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LandingCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ForceActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> SmashCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownwardsVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UGGAlternativeGoatDataAsset*, float> AltGoatLocationOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRadialForceComponent* ForceComp;
    
public:
    UGGGearAbility_TankSmash();

    UFUNCTION(BlueprintCallable)
    void OnLanded(const FHitResult& Hit);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCreateForceActor(AGGGoat* Goat);
    
};

