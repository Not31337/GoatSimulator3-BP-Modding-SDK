#pragma once
#include "CoreMinimal.h"
#include "ETowerSynchronizationEvent.h"
#include "GGWorldSubsystem.h"
#include "GGGoatTowerSubsystem.generated.h"

class AActor;
class AGGGoatTower;

UCLASS(Blueprintable)
class GOAT2_API UGGGoatTowerSubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGGoatTower*> GoatTowers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoatTower* LatestSynchronizedGoatTower;
    
public:
    UGGGoatTowerSubsystem();

    UFUNCTION(BlueprintCallable)
    void OnGoatTowerSynchronised(AGGGoatTower* GoatTower, ETowerSynchronizationEvent SynchronizationEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimaryTower(AGGGoatTower* GoatTower);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoatTower* GetLatestSynchronizedGoatTower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGGoatTower*> GetGoatTowers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoatTower* GetGoatTowerFromID(const FString& TowerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoatTower* GetFirstSynchronizedGoatTower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoatTower* GetClosestGoatTower(AActor* ToActor);
    
    UFUNCTION(BlueprintCallable)
    void AddGoatTower(AGGGoatTower* GoatTower);
    
};

