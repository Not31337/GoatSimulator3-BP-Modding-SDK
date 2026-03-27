#pragma once
#include "CoreMinimal.h"
#include "GGGoatTower.h"
#include "GGGoatTower_Apocalypse.generated.h"

class AGoatTowerPuzzle;
class UAudioComponent;
class UGGDynamicAssetHoldingComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGGoatTower_Apocalypse : public AGGGoatTower {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AmbientSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ActiveOngoingParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGDynamicAssetHoldingComponent* DynamicAssetHolding;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGoatTowerPuzzle> TowerPuzzle;
    
    AGGGoatTower_Apocalypse(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnLostSignificance(UGGDynamicAssetHoldingComponent* DynAssetComp);
    
    UFUNCTION(BlueprintCallable)
    void OnGainedSignificance(UGGDynamicAssetHoldingComponent* DynAssetComp);
    
    UFUNCTION(BlueprintCallable)
    void OnDynamicLoadingFinished(UGGDynamicAssetHoldingComponent* DynAssetComp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LinkedPuzzleCompleted(bool bFromSaveFile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPuzzleComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DynamicAssetsLoaded();
    
};

