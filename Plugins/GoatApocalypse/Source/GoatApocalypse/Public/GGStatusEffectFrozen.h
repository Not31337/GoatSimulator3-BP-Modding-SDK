#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EStatusEffectTypes.h"
#include "GGStatusEffectBase.h"
#include "FrozenSettings.h"
#include "Templates/SubclassOf.h"
#include "GGStatusEffectFrozen.generated.h"

class AActor;
class AController;
class AGGCharacter;
class UDamageType;
class UGGFreezeComponent;
class UGGStatusEffectManager;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGStatusEffectFrozen : public AGGStatusEffectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FFrozenSettings> FrozenSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGFreezeComponent> FreezeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreezeGoats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeadbuttsNeededToBreakFree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FrozenGoatNotificationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FrozenGoatNotificationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FrozenStartParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* FrozenStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FrozenShatterParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* FrozenShatterSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGFreezeComponent* FreezeComp;
    
public:
    AGGStatusEffectFrozen(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnUnfrozen(AGGCharacter* Character, UGGFreezeComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnActorGotNewStatusEffect(AActor* Actor, UGGStatusEffectManager* Manager, AGGStatusEffectBase* NewStatusEffect, EStatusEffectTypes Type);
    
};

