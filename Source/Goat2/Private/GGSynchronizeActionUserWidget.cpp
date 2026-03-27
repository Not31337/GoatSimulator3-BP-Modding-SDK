#include "GGSynchronizeActionUserWidget.h"

UGGSynchronizeActionUserWidget::UGGSynchronizeActionUserWidget() {
    this->BodyLabel = NULL;
    this->OverlayGoats = NULL;
    this->IconBox = NULL;
    this->WidgetSwitcherIconBox = NULL;
    this->TowerIcon = NULL;
    this->Background = NULL;
    this->GoatHead0 = NULL;
    this->GoatHead1 = NULL;
    this->GoatHead2 = NULL;
    this->GoatHead3 = NULL;
    this->Arrow0 = NULL;
    this->Arrow1 = NULL;
    this->Arrow2 = NULL;
    this->ShowMobileAnim = NULL;
    this->HideMobileAnim = NULL;
    this->HideBodyAnim = NULL;
    this->StateFadeBumpAnim = NULL;
    this->Goat1JoinedAnim = NULL;
    this->Goat2JoinedAnim = NULL;
    this->Goat3JoinedAnim = NULL;
    this->CachedNumPlayers = -1;
    this->CachedJoinedPlayers = -1;
    this->bCachedShowAllGathered = false;
}

void UGGSynchronizeActionUserWidget::UpdateLabels(FNotification Notification) {
}


void UGGSynchronizeActionUserWidget::UpdateGatherStatus(int32 NumPlayers, int32 JoinedPlayers) {
}

void UGGSynchronizeActionUserWidget::PlayAnimationForJoiningGoat(int32 JoiningPlayerIndex) {
}



void UGGSynchronizeActionUserWidget::OnGatherEventGoatsUpdated(const FString& GatherID, const TArray<AGGPlayerState*>& Players) {
}

UTexture2D* UGGSynchronizeActionUserWidget::GetSynchronizeIcon_Implementation(FNotification Notification) {
    return NULL;
}


