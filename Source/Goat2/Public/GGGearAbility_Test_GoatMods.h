#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EGoatModType.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Test_GoatMods.generated.h"

class AActor;
class AGGCharacter;
class AGGGoat;
class UGameplayEffect;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_Test_GoatMods : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> MSGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSChangeMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SprintParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoubleJumpVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DoubleJumpParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ChillyBreathParticle;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EGoatModType CurrentModType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RunParticleComp;
    
public:
    UGGGearAbility_Test_GoatMods();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnJumped(AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatHeadbutting(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatBaa(AGGGoat* GoatBaaing);
    
};

