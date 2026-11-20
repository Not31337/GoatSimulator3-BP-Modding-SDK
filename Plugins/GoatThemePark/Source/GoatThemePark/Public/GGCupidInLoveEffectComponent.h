#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GGCupidInLoveEffectComponent.generated.h"

class AGGCharacter;
class AGGGoat;
class AGGNPC;
class UGGEffectsSpawnHolderSoftPtrs;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGGCupidInLoveEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGEffectsSpawnHolderSoftPtrs* SoftEffectSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InLoveReactTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InLoveInstinctTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* OwnerNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* GoatInstigator;
    
public:
    UGGCupidInLoveEffectComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SpawnEffects();
    
    UFUNCTION(BlueprintCallable)
    void OnNPCOwnerPooled(AGGNPC* NPC, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnNPCGrabbedCharacter(AGGNPC* NPC, AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastTriggerInstinct(AGGGoat* InstinctOwner);
    
};

