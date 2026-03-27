#include "GGHUDUserWidget.h"

UGGHUDUserWidget::UGGHUDUserWidget() {
    this->ClientTimeoutCheckLimit = 3.00f;
    this->HostTimeoutCheckLimit = 1.00f;
    this->ClientTimeoutCheckInterval = 1.50f;
    this->AdditionalRadarWidgetsDataAsset.AddDefaulted(1);
    this->PrototypeQuestWidget = NULL;
    this->PrototypeInstinctsUserWidget = NULL;
    this->PrototypeTokenUserWidget = NULL;
    this->PrototypeHUDItemWidget = NULL;
    this->PrototypeHUDMessageWidget = NULL;
    this->PrototypeChatUserWidget = NULL;
    this->PrototypeHUDActionWidget = NULL;
    this->PrototypeHUDHintWidget = NULL;
    this->PrototypeHUDSplashWidget = NULL;
    this->PrototypeHUDCustomNotificationWidget = NULL;
    this->PrototypePlayerGameScoreboard = NULL;
    this->PrototypeHUDInvitesWidget = NULL;
    this->PrototypeHUDTimerWidget = NULL;
    this->PrototypeHUDSaveProgressWidget = NULL;
    this->PrototypeCompassUserWidget = NULL;
    this->PrototypeTrackerUserWidget = NULL;
    this->ClientTimeoutUserWidget = NULL;
    this->HUDSubtitleWidget = NULL;
    this->Crosshair = NULL;
}

bool UGGHUDUserWidget::WidgetHasEffectSource(UGGUserWidget* Widget, FGameplayTag EffectTag) const {
    return false;
}


void UGGHUDUserWidget::SpawnSaveNotification() {
}


void UGGHUDUserWidget::RemoveEffectSources(FGameplayTag SourceTag, FGameplayTagContainer EffectTags, FGameplayTagContainer Targets) {
}

bool UGGHUDUserWidget::RemoveEffectSource(FGameplayTag SourceTag, FGameplayTag EffectTag, FGameplayTagContainer Targets) {
    return false;
}

void UGGHUDUserWidget::RemoveAllEffectsFromSource(FGameplayTag SourceTag) {
}


void UGGHUDUserWidget::OnShowCrosshairSettingChanged(FGGGameSetting& InChangedSetting) {
}

void UGGHUDUserWidget::OnPlayerGamePlayerInfoChanged(AGGPlayerGame_Base* PlayerGame) {
}

void UGGHUDUserWidget::OnMenuExited_Implementation(UUserWidget* Widget) {
}

void UGGHUDUserWidget::OnMenuEntered_Implementation(UUserWidget* Widget) {
}

void UGGHUDUserWidget::OnGameCurrentActiveGameChanged(AGGPlayerGame_Base* PlayerGame) {
}

void UGGHUDUserWidget::OnDelayedOnSplitScreenUpdated() {
}

void UGGHUDUserWidget::InitRadarComponent() {
}

bool UGGHUDUserWidget::HasEffectSource(FGameplayTag EffectTag) const {
    return false;
}

void UGGHUDUserWidget::AddEffectSources(FGameplayTag SourceTag, FGameplayTagContainer EffectTags, FGameplayTagContainer Targets) {
}

void UGGHUDUserWidget::AddEffectSource(FGameplayTag SourceTag, FGameplayTag EffectTag, FGameplayTagContainer Targets) {
}


