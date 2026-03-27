#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GGInstinctPickup.generated.h"

class AGGPlayerController;
class UGGInstinctPackDataAsset;
class UGGInventory;

UCLASS(Blueprintable)
class GOAT2_API AGGInstinctPickup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGInstinctPackDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlockMultiple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGInstinctPackDataAsset*> Packs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGInstinctPackDataAsset* TutorialDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPickedUp;
    
public:
    AGGInstinctPickup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UnlockTutorialInstinct(AGGPlayerController* InInstigator, bool& bOutFirstPack);
    
    UFUNCTION(BlueprintCallable)
    bool UnlockInstincts(AGGPlayerController* InInstigator, bool& bOutFirstPack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInventoryInitialized(UGGInventory* Inventory);
    
    UFUNCTION(BlueprintCallable)
    void OnInstinctPackUnlocked(UGGInstinctPackDataAsset* InDataAsset, FGameplayTag Context);
    
    UFUNCTION(BlueprintCallable)
    void OnInstinctPacksLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivateInstinctPickup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPickupActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPickedUp();
    
    UFUNCTION(BlueprintCallable)
    static void CreateUnlockedInstinctNotification(AGGPlayerController* InInstigator, UGGInstinctPackDataAsset* InDataAsset);
    
};

