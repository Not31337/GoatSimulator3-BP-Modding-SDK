#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESaveGameType.h"
#include "ESaveSlotProvider.h"
#include "OnFullResetPlayerSaveDelegate.h"
#include "OnSaveObjectReloadedDelegate.h"
#include "OnTotalChaosChangedDelegate.h"
#include "OnWorldCollectionsReloadedDelegate.h"
#include "OnWorldStatsChangedDelegate.h"
#include "SavedQuestData.h"
#include "WorldCollection.h"
#include "WorldStats.h"
#include "GGProgression.generated.h"

class AActor;
class UGGSaveGame;
class UGGStretchGoalGroup;
class UGGWorldCollectionsSave;
class UGGWorldSave;
class UWorld;

UCLASS(Blueprintable, Transient)
class GOAT2_API UGGProgression : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveObjectReloaded OnSaveObjectReloaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGSaveGame* CachedSaveGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldCollectionsReloaded OnWorldColectionsReloaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGGWorldCollectionsSave* CachedWorldCollectionsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGWorldSave* CachedWorldSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasInitialized;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTotalChaosChanged TotalChaosChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldStatsChanged OnWorldStatsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFullResetPlayerSave OnFullResetPlayerSave;
    
    UGGProgression();

    UFUNCTION(BlueprintCallable)
    void UploadToCloud();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateLastLoadedLevel(int32 SlotIndex, const FString& LevelDataID);
    
    UFUNCTION(BlueprintCallable)
    bool SelectNewWorldCollection(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveWorldCollection(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void PostLoadMapWithWorld(UWorld* World);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSnapShotLoaded(const FString& Filename, TArray<uint8> SaveData);
    
public:
    UFUNCTION(BlueprintCallable)
    FSavedQuestData LoadQuestProgress(const FString& QuestID, ESaveGameType SaveGameType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotADefaultSlot(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestStepCompleted(const FString& QuestID, const FString& StepID, ESaveGameType QuestType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsEventCompleted(const FString& EventID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyWorldCollections();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWorldStats GetWorldStatsForWorld(int32 SlotIndex, const FString& WorldName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextActor"))
    FGuid GetWorldSaveGuid(AActor* WorldContextActor);
    
    UFUNCTION(BlueprintCallable)
    UGGWorldSave* GetWorldSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FWorldCollection> GetWorldCollections();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWorldCollection GetWorldCollection(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetUnlockedStretchGoals(UGGStretchGoalGroup* GoalGroup);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnlockedStretchGoalNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalWorldChaosAcquired();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSlotsClaimedByProvider(ESaveSlotProvider Provider) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedWorldCollectionSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWorldCollection GetSelectedWorldCollection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetProviderClaimingSlot(int32 SlotIndex, ESaveSlotProvider& ClaimedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLastLoadedLevelByProvider(ESaveSlotProvider Provider, int32& SlotIndex, FString& LevelDataID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLastLoadedLevel(int32& SlotIndex, FString& LevelDataID);
    
    UFUNCTION(BlueprintCallable)
    FVector GetGameStartLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFirstEmptyWorldCollectionSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWorldStats GetCurrentWorldStats();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimecode GetCurrentPlaytime(bool bGetSavedPlaytime);
    
    UFUNCTION(BlueprintCallable)
    TSet<FString> GetCompletedLocalEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCollectedTrinketNum();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetCollectedChaosSources();
    
    UFUNCTION(BlueprintCallable)
    void DownloadFromCloud();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesWorldCollectionExist(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCreateAdditionalWorldCollection();
    
    UFUNCTION(BlueprintCallable)
    bool AddNewWorldCollection(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool AddAndSelectNewWorldCollection(int32 SlotIndex);
    
};

