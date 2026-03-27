#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETowerPuzzleState.h"
#include "GoatTowerPuzzle.generated.h"

class AGGGoatTower_Apocalypse;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGoatTowerPuzzle : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoatTower_Apocalypse* OwnerTower;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TowerPuzzleState, meta=(AllowPrivateAccess=true))
    ETowerPuzzleState TowerPuzzleState;
    
public:
    AGoatTowerPuzzle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPuzzleCompleted(bool bFromSaveFile);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PuzzleCompleted(bool bFromSaveFile);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TowerPuzzleState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPuzzleCompleted() const;
    
};

