#include "GGFriendListEntryUserWidget.h"

UGGFriendListEntryUserWidget::UGGFriendListEntryUserWidget() {
    this->Object = NULL;
    this->SplitScreenPlayer = NULL;
    this->PlayerState = NULL;
    this->PartyUserIndex = 0;
    this->PlayerLabel = NULL;
    this->StatusLabel = NULL;
    this->FriendListAvatar = NULL;
    this->EntryWidgetSwitcher = NULL;
    this->EmptyContainer = NULL;
    this->JoinText = NULL;
    this->Background = NULL;
    this->PlayerContainer = NULL;
    this->LeaderIcon = NULL;
    this->PlatformIndicatorWidget = NULL;
    this->KeyboardSizeBox = NULL;
    this->GamepadSizeBox = NULL;
    this->GamepadIndexLabel = NULL;
    this->ButtonsWidgetSwitcher = NULL;
    this->SizeBoxInvite = NULL;
    this->ButtonInvite = NULL;
    this->SizeBoxKick = NULL;
    this->ButtonKick = NULL;
    this->SizeBoxJoin = NULL;
    this->ButtonJoin = NULL;
    this->SizeBoxLeave = NULL;
    this->ButtonLeave = NULL;
    this->SizeBoxMute = NULL;
    this->ButtonMute = NULL;
    this->bIsEmpty = true;
}

void UGGFriendListEntryUserWidget::UpdateSplitScreenPlayer() {
}

void UGGFriendListEntryUserWidget::UpdatePlayerStatePlayer() {
}

void UGGFriendListEntryUserWidget::UpdateLobbyMember_Steam() {
}

void UGGFriendListEntryUserWidget::UpdateLobbyMember() {
}

void UGGFriendListEntryUserWidget::UpdateGoatFriend() {
}

void UGGFriendListEntryUserWidget::SetPlayerObject(UObject* InObject) {
}

void UGGFriendListEntryUserWidget::SetDelayUntilNextAction() {
}

void UGGFriendListEntryUserWidget::ResetPlayerObject() {
}

void UGGFriendListEntryUserWidget::ResetDelayUntilNextAction() {
}


void UGGFriendListEntryUserWidget::NativeOnWidgetHovered(UGGUserWidget* InWidget) {
}

ESlateVisibility UGGFriendListEntryUserWidget::LeaveButtonVisibility() {
    return ESlateVisibility::Visible;
}

void UGGFriendListEntryUserWidget::LeaveAction() {
}

ESlateVisibility UGGFriendListEntryUserWidget::KickButtonVisibility() {
    return ESlateVisibility::Visible;
}

void UGGFriendListEntryUserWidget::KickAction() {
}

ESlateVisibility UGGFriendListEntryUserWidget::JoinButtonVisibility() {
    return ESlateVisibility::Visible;
}

void UGGFriendListEntryUserWidget::JoinAction() {
}

bool UGGFriendListEntryUserWidget::IsValidEntry() {
    return false;
}

bool UGGFriendListEntryUserWidget::IsSplitScreenEntry() {
    return false;
}

bool UGGFriendListEntryUserWidget::IsPlayingThisGame() {
    return false;
}

bool UGGFriendListEntryUserWidget::IsPlayerStateEntry() {
    return false;
}

bool UGGFriendListEntryUserWidget::IsLobbyEntry() {
    return false;
}

bool UGGFriendListEntryUserWidget::IsFriendsEntry() {
    return false;
}

ESlateVisibility UGGFriendListEntryUserWidget::InviteButtonVisibility() {
    return ESlateVisibility::Visible;
}

void UGGFriendListEntryUserWidget::InviteAction() {
}

ESlateVisibility UGGFriendListEntryUserWidget::HoldToJoinTextVisibility() {
    return ESlateVisibility::Visible;
}

FSlateColor UGGFriendListEntryUserWidget::GetStatusTextColor() {
    return FSlateColor{};
}

FText UGGFriendListEntryUserWidget::GetStatusText() {
    return FText::GetEmpty();
}

FSlateColor UGGFriendListEntryUserWidget::GetPlayerTextColor() {
    return FSlateColor{};
}

FText UGGFriendListEntryUserWidget::GetPlayerLabelText() {
    return FText::GetEmpty();
}

int32 UGGFriendListEntryUserWidget::GetMaxPlayerCount() {
    return 0;
}

FText UGGFriendListEntryUserWidget::GetLocalizedGGStatusForSteam(const FString& InGGStatus) {
    return FText::GetEmpty();
}

FText UGGFriendListEntryUserWidget::GetLobbyPlayerCountText(int32 Current, int32 Max) {
    return FText::GetEmpty();
}

ESlateVisibility UGGFriendListEntryUserWidget::GetLeaderIconVisibility() {
    return ESlateVisibility::Visible;
}

UGGButtonUserWidget* UGGFriendListEntryUserWidget::GetFirstVisibleButton() const {
    return NULL;
}

FSlateBrush UGGFriendListEntryUserWidget::GetBackgroundTexture() {
    return FSlateBrush{};
}

TArray<UGGButtonUserWidget*> UGGFriendListEntryUserWidget::GetAllButtons() const {
    return TArray<UGGButtonUserWidget*>();
}

TArray<USizeBox*> UGGFriendListEntryUserWidget::GetAllButtonContainers() const {
    return TArray<USizeBox*>();
}

bool UGGFriendListEntryUserWidget::CanPlayerBeInvited() {
    return false;
}


