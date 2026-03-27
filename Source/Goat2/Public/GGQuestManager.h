#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AdvancedRule.h"
#include "CompletedEventTags.h"
#include "EGoatDLC.h"
#include "ETowerSynchronizationEvent.h"
#include "GlobalInstinctCategoryOrder.h"
#include "GlobalInstinctCategoryPack.h"
#include "GlobalInstinctHeaderCategoryData.h"
#include "Notification.h"
#include "OnActorTookDamageDelegate.h"
#include "OnCharacterJumpedDelegate.h"
#include "OnHandlerGoatBaaDelegate.h"
#include "OnHandlerGoatHeadbuttedActorDelegate.h"
#include "OnHandlerGoatLickedActorDelegate.h"
#include "OnInitialQuestProgressionReplicatedDelegate.h"
#include "OnInstinctTriggeredDelegate.h"
#include "OnInteractedDelegate.h"
#include "OnQuestActivatedDelegate.h"
#include "OnQuestAddedToAvailableDelegate.h"
#include "OnQuestDeactivatedDelegate.h"
#include "OnQuestDiscoveredDelegate.h"
#include "OnQuestInitializedDelegate.h"
#include "OnQuestProgressionLoadedDelegate.h"
#include "TagTexturePair.h"
#include "Templates/SubclassOf.h"
#include "GGQuestManager.generated.h"

class AActor;
class AGGCharacter;
class AGGEventBase;
class AGGGoat;
class AGGGoatTower;
class AGGPlayerController;
class AGGQuestBase;
class AGGQuestSet;
class UDamageType;
class UGGInstinctCategoryDataAsset;
class UGGInstinctPackDataAsset;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGQuestManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowNewGoatTowerEventNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotification NewGoatTowerEventNotification;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterJumped OnCharacterJumpedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandlerGoatBaa OnHandlerGoatBaaDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandlerGoatLickedActor OnHandlerGoatLickedActorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandlerGoatHeadbuttedActor OnHandlerGoatHeadbuttedActorDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInstinctTriggered OnInstinctTriggeredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteracted OnInteractedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorTookDamage OnActorTookDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestInitialized OnQuestInitializedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestActivated OnQuestActivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestDeactivated OnQuestDeactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestDiscovered OnQuestDiscoveredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestProgressionLoaded OnQuestProgressionLoadedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitialQuestProgressionReplicated OnInitialQuestProgressionReplicatedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestTemplatesMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> QuestTemplatesStagingMapNames;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGGQuestBase>> QuestTemplates;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AGGQuestBase>> GlobalQuestTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGGQuestBase>> LoadedGlobalQuestTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<AGGQuestSet>> GlobalQuestSetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AGGQuestSet*> GlobalQuestSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CompletedEventTags, meta=(AllowPrivateAccess=true))
    FCompletedEventTags CompletedEventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<AGGEventBase>, TSubclassOf<AGGEventBase>> EventsInStreamingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FGameplayTag> QuestIdStringToTagMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowChaosRewardInQuestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTagTexturePair> ChaosRewardIconMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> InstinctCategoryOrderMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UGGInstinctPackDataAsset*> InstinctCategoryPackMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UGGInstinctCategoryDataAsset*> InstinctHeaderCategoryDataMap;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGlobalInstinctCategoryOrder> GlobalInstinctCategoryOrder;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGlobalInstinctCategoryPack> GlobalInstinctCategoryPack;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGlobalInstinctHeaderCategoryData> GlobalInstinctHeaderCategoryData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementInstinctID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestAddedToAvailable OnQuestAddedToAvailable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGQuestBase*> AvailableQuests;
    
public:
    UGGQuestManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SortLocalQuests(UPARAM(Ref) TArray<AGGQuestBase*>& QuestsToSort, TArray<FGameplayTag> SortingPasses);
    
    UFUNCTION(BlueprintCallable)
    void SortLocalQuestObjects(UPARAM(Ref) TArray<UObject*>& QuestObjectsToSort, TArray<FGameplayTag> SortingPasses);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CompletedEventTags(FCompletedEventTags LastCompletedEventTags);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnNotificationUpdated(FNotification Notification);
    
    UFUNCTION(BlueprintCallable)
    void OnNotificationShown(FNotification Notification);
    
    UFUNCTION(BlueprintCallable)
    void OnNotificationCleared(FNotification Notification);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractedEvent(AActor* SourceActor, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void OnInstinctTriggered(AGGGoat* Goat, FGameplayTag InstinctTag);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatTowerSynchronised(AGGGoatTower* GoatTower, ETowerSynchronizationEvent SynchronizationEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatLickedActor(AGGGoat* Goat, AActor* LickedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatHeadbuttedActor(AGGGoat* Goat, AActor* HeadbuttedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatBaa(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterJumped(AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnActorTookDamage(AActor* SourceActor, AActor* TargetActor, float DamageAmount, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInstinctsAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInstinctCategoryUnlocked(FGameplayTag CategoryTag) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasCompletedInstinctsInDLCLevel(EGoatDLC DLC);
    
    UFUNCTION(BlueprintCallable)
    bool HasCompletedAllInstincts(bool bIncludeGloballyAddedInstincts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGQuestBase* GetQuestWithActorTag(const FName& ActorTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<AGGQuestBase>> GetQuestTemplates() const;
    
    UFUNCTION(BlueprintCallable)
    void GetQuestsInCategory(FGameplayTagContainer QuestCategories, TArray<AGGQuestBase*>& OutQuests, const bool ExactMatch);
    
    UFUNCTION(BlueprintCallable)
    void GetQuestsFromFilter(TArray<FAdvancedRule> Rulesets, TArray<AGGQuestBase*>& OutQuests);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGQuestSet* GetQuestSetFromSetMemberID(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGQuestBase* GetQuestFromID(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGInstinctPackDataAsset* GetPackFromCategory(FGameplayTag CategoryTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNumInstinctsCompleted(int32& OutNumTotal, int32& OutNumCompleted, bool bIncludeGloballyAddedInstincts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGQuestSet* GetGlobalQuestSet(FGameplayTag SetCategory, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    AGGQuestBase* GetClosestActiveQuest(const FVector& Location, float& OutDistance, bool& bOutWithinRadius, AGGQuestBase* EventToAlwaysConsider);
    
    UFUNCTION(BlueprintCallable)
    TArray<AGGQuestBase*> GetAvailableQuestsSortedByDistanceToActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    TArray<AGGQuestBase*> GetAvailableQuests();
    
    UFUNCTION(BlueprintCallable)
    bool GetActiveInstincts(TArray<AGGQuestBase*>& OutQuests, int32 Amount, AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void FindDuplicateQuestIDs();
    
};

