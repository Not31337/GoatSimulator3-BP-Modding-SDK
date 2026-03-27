#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStatusEffectTypes.h"
#include "Templates/SubclassOf.h"
#include "GGStatusEffectPoolManager.generated.h"

class AActor;
class AGGStatusEffectBase;
class UGGStatusEffectDataAsset;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGStatusEffectPoolManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRadiusForSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPoolSize;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGGStatusEffectDataAsset>> SoftStatusEffectDefaultClassesDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGStatusEffectDataAsset*> StatusEffectDefaultClassesDataAssets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGStatusEffectBase*> ActiveStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGStatusEffectBase*> PooledStatusEffects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredBurningEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireGroupRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FiretruckCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroupedBurningDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceBetweenEventSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireGroupLocationDuration;
    
public:
    UGGStatusEffectPoolManager();

    UFUNCTION(BlueprintCallable)
    void PoolAllStatusEffects();
    
    UFUNCTION(BlueprintCallable)
    void MoveStatusEffectBetweenActors(AGGStatusEffectBase* StatusEffect, AActor* NewActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGStatusEffectBase*> GetStatusEffectPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AGGStatusEffectBase> GetDefaultClassFor(EStatusEffectTypes Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGStatusEffectBase*> GetActiveStatusEffects() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllPooledStatusEffects();
    
};

