#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EQuestDebugType.h"
#include "EQuestProgression.h"
#include "EQuestReplication.h"
#include "ESaveGameType.h"
#include "GGRadarInterface.h"
#include "QuestDebugMessage.h"
#include "QuestReward.h"
#include "QuestSharedProgress.h"
#include "QuestStep.h"
#include "QuestStepTier.h"
#include "QuestTier.h"
#include "GGQuestBase.generated.h"

class AGGPlayerState;
class AGGQuestBase;
class UGGQuestManager;
class UTexture;

UCLASS(Blueprintable)
class GOAT2_API AGGQuestBase : public AActor, public IGGRadarInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestReplication QuestReplicationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag QuestCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> QuestListIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag QuestIDTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestProgression QuestProgressionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MobileQuestDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestProgressTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestRewardSplashDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestCompletionSplashBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuestRewardSplashDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CompletedSplashNotificationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveGameType QuestSaveMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSecretProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStepsAsTierInHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReward QuestReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReward QuestRewardRepeated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestTier> QuestProgressTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStepTier> QuestStepTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> QuestCollectionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestTier> QuestCollectionMilestones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSavePartialCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveProgressionEveryUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnreadMenuCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnreadQuestCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowQuestIDAsUnread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableProgressSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableProgressLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrintErrorsOnScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarningsAsErrors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestDebugMessage> DebugMessages;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGQuestManager* QuestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SharedProgress, meta=(AllowPrivateAccess=true))
    FQuestSharedProgress SharedProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSharedProgressSynced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompletedThisPlaySession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompletedBeforeJoining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProgressionLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastProgressUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreviouslyDiscovered;
    
public:
    AGGQuestBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    bool UpdateQuestStepCompletion(const FString& StepID, bool bStepCompleted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString TagIdAsStringId(const FGameplayTag& TagIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void SetReplicationParameters(bool bShouldReplicate, float ReplicationInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetProgress(int32 Value, AGGPlayerState* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void SetMilestoneProgress(int32 Value, bool bInitializeOnly);
    
    UFUNCTION(BlueprintCallable)
    void ResetQuest();
    
    UFUNCTION(BlueprintCallable)
    void ReportProgress(int32 Value, AGGPlayerState* EventInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool QuestWasCompletedThisPlaySession();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SharedProgress();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuestProgressionLoadedBlueprint(bool bSaveExisted, bool bWasCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuestInitializedBlueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuestCompletedBlueprint();
    
    UFUNCTION(BlueprintCallable)
    void OnOtherQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialProgressReplicated();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetProgress(int32 Progress, AGGPlayerState* EventInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDiscoverQuest(const TArray<AGGPlayerState*>& PlayersInDiscoveryRange);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDeactivateQuest(bool bWasCompleted);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCompleteStep(const FString& StepID, AGGPlayerState* EventInstigator, bool Complete);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCompleteQuest(AGGPlayerState* EventInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActivateQuest();
    
public:
    UFUNCTION(BlueprintCallable)
    void LogQuestWarning(const FString& InFunction, const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    void LogQuestEvent(const FString& InFunction, const FString& InMessage, EQuestDebugType Verbosity);
    
    UFUNCTION(BlueprintCallable)
    void LogQuestError(const FString& InFunction, const FString& InMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTierCompleted(FQuestTier Tier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestUserVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestStepVisible(const FString& StepID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestSecret(bool bSecretIfCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitializedFully();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLoadedStateFromServer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQuestTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQuestTierDescription(FQuestTier Tier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FQuestStepTier> GetQuestSteps();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetQuestRewardSplashDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQuestProgressText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQuestDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQuestCompletionSplashTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQuestCompletionSplashBody();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProgress(bool& ReachedMaximum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuestTier GetPreviousQuestTier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfSteps();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfQuestTiers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfCompletedSteps();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuestStep GetNextUncompletedStep();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumTargetProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuestTier GetLastQuestTier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentQuestTierIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuestTier GetCurrentQuestTier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetCompletedOrderIndexForStep(int32 StepTier, const FString& StepID, int32& OutCompletedOrderIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void DiscoverQuest(AGGPlayerState* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void DecreaseProgress(int32 Value, AGGPlayerState* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateQuest(bool bWasCompleted);
    
    UFUNCTION(BlueprintCallable)
    void CompleteStepHUD(const FString& StepID, bool bComplete);
    
    UFUNCTION(BlueprintCallable)
    void CompleteStep(const FString& StepID, AGGPlayerState* EventInstigator, bool Complete, bool bDelayCompletionInHUD);
    
    UFUNCTION(BlueprintCallable)
    void CompleteQuest(AGGPlayerState* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void ClearQuestProgressionSaveDataDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanQuestBeCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreAllStepsInTierCompleted(const FQuestStepTier Tier);
    
    UFUNCTION(BlueprintCallable)
    void ActivateQuest();
    

    // Fix for true pure virtual functions not being implemented
};

