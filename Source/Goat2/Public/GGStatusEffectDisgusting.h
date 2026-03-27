#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGStatusEffectBase.h"
#include "WeightedElement_ActorClass.h"
#include "GGStatusEffectDisgusting.generated.h"

class AGGGoat;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API AGGStatusEffectDisgusting : public AGGStatusEffectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapShapesScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoatOverlapShapesScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PukeThrusterStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BurstSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BurpSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* CleanedByWaterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BurstParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* EndBurstParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_ActorClass> DisgustingObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisgustingObjectNotifyRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisgustingObjectSpawnCooldown;
    
public:
    AGGStatusEffectDisgusting(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnBaaObject(AGGGoat* OwnerGoat);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatBaa(AGGGoat* GoatBaaing);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayDisgustingInWaterEffect(FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayBurst(bool ForEnd);
    
};

