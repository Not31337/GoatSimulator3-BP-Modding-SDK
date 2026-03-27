#include "GGNewsSettingsDataAsset.h"

UGGNewsSettingsDataAsset::UGGNewsSettingsDataAsset() {
    this->bEnableNewsFeedOnMobileSwitchPIE = false;
    this->bPaginationSupported = true;
    this->bTabNavigationSupported = false;
    this->TabNavigationButtonWidthLimit = 250;
    this->TabNavigationOverflowMode = ENewsTabNavigationOverflowMode::PushFirst;
    this->bTabNavigationOverflowEnableCollapsedButtons = true;
    this->bTabNavigationOverflowCollapsedButtonsTextEnabled = false;
    this->TabNavigationOverflowCollapsedButtonsFillLeft = 0.20f;
    this->TabNavigationOverflowCollapsedButtonsFillRight = 0.20f;
    this->bShowUnreadNewsWithContinueButton = true;
    this->bShowTotalUnreadInContinueButton = true;
    this->bAnchorContinueButtonToBottom = true;
    this->bAppendOwnershipNoticeForOwnedDLC = true;
}


