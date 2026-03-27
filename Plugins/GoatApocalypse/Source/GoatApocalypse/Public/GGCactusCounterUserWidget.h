#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGNotificationWidgetInterface.h"
#include "GGUserWidget.h"
#include "GGCactusCounterUserWidget.generated.h"

class AGGPlayerState_Apocalypse;
class UGGCactusScoreSubsystem;
class UGGRichTextBlock;
class UPanelWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GOATAPOCALYPSE_API UGGCactusCounterUserWidget : public UGGUserWidget, public IGGNotificationWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CounterEntrySoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CounterExitSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* CactusCountSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CactusCountCurrentScoreContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* CurrentCactusCountRichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* CurrentCactusTimerRichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CactusCountHighScoreContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* LastCactusCountRichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* HighscoreCactusCountRichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GainCacti;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandleHighscore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGCactusScoreSubsystem* CactusSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerState_Apocalypse* OwningPlayerState;
    
public:
    UGGCactusCounterUserWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowHighScore(float InDuration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewHighscore_BP(int32 PreviousHighScore, int32 NewHighScore);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCactusStreakStarted(AGGPlayerState_Apocalypse* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnCactusStreakEnded(AGGPlayerState_Apocalypse* Player, int32 CactusCount, bool bNewHighScore, int32 HighScore);
    
    UFUNCTION(BlueprintCallable)
    void HideHighScore();
    

    // Fix for true pure virtual functions not being implemented
};

