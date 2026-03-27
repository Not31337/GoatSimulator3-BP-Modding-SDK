#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GGGameSetting.h"
#include "GGHUDUserWidgetBase.h"
#include "GGHUDUserWidget.generated.h"

class AGGPlayerGame_Base;
class UDataTable;
class UGGChatUserWidget;
class UGGCompassUserWidget;
class UGGInstinctsUserWidget;
class UGGNotificationContainerWidget;
class UGGNotificationUserWidget;
class UGGQuestUserWidget;
class UGGRadarWidgetClassCollectionDataAsset;
class UGGSubtitleNotificationUserWidget;
class UGGTrackerUserWidget;
class UGGUserWidget;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class GOAT2_API UGGHUDUserWidget : public UGGHUDUserWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientTimeoutCheckLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostTimeoutCheckLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientTimeoutCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> NotificationWidgetClassesDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGGRadarWidgetClassCollectionDataAsset>> AdditionalRadarWidgetsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGUserWidget*> PreHUDWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGUserWidget*> HUDWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGQuestUserWidget* PrototypeQuestWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGInstinctsUserWidget* PrototypeInstinctsUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNotificationContainerWidget* PrototypeTokenUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNotificationContainerWidget* PrototypeHUDItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNotificationContainerWidget* PrototypeHUDMessageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGChatUserWidget* PrototypeChatUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNotificationContainerWidget* PrototypeHUDActionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNotificationContainerWidget* PrototypeHUDHintWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNotificationContainerWidget* PrototypeHUDSplashWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNotificationContainerWidget* PrototypeHUDCustomNotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNotificationUserWidget* PrototypePlayerGameScoreboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNotificationContainerWidget* PrototypeHUDInvitesWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNotificationUserWidget* PrototypeHUDTimerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNotificationUserWidget* PrototypeHUDSaveProgressWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCompassUserWidget* PrototypeCompassUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGTrackerUserWidget* PrototypeTrackerUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGUserWidget* ClientTimeoutUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGSubtitleNotificationUserWidget* HUDSubtitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGUserWidget* Crosshair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WidgetsToHideInMinigames;
    
    UGGHUDUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WidgetHasEffectSource(UGGUserWidget* Widget, FGameplayTag EffectTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleChat(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSaveNotification();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPlayerGameResults(AGGPlayerGame_Base* PlayerGame, float ResultDuration);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEffectSources(FGameplayTag SourceTag, FGameplayTagContainer EffectTags, FGameplayTagContainer Targets);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEffectSource(FGameplayTag SourceTag, FGameplayTag EffectTag, FGameplayTagContainer Targets);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllEffectsFromSource(FGameplayTag SourceTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnViewportResizedBP(int32 ViewportX, int32 ViewportY);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnShowCrosshairSettingChanged(FGGGameSetting& InChangedSetting);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerGamePlayerInfoChanged(AGGPlayerGame_Base* PlayerGame);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMenuExited(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMenuEntered(UUserWidget* Widget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGameCurrentActiveGameChanged(AGGPlayerGame_Base* PlayerGame);
    
    UFUNCTION(BlueprintCallable)
    void OnDelayedOnSplitScreenUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitRadarComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEffectSource(FGameplayTag EffectTag) const;
    
    UFUNCTION(BlueprintCallable)
    void AddEffectSources(FGameplayTag SourceTag, FGameplayTagContainer EffectTags, FGameplayTagContainer Targets);
    
    UFUNCTION(BlueprintCallable)
    void AddEffectSource(FGameplayTag SourceTag, FGameplayTag EffectTag, FGameplayTagContainer Targets);
    
};

