#include "GGListView.h"

UGGListView::UGGListView() : UListView(FObjectInitializer::Get()) {
    this->bIsFocusable = false;
    this->bWrapVerticalNavigation = false;
    this->bAllowScrolling = true;
    this->bHandleGamepadAnalogScrolling = false;
    this->bHandleGamepadAnalogScrollingLeftStick = false;
    this->bAutoSelectOnAnalogScroll = true;
    this->ScrollBarOrientation = Orient_Vertical;
    this->ScrollBarVisibility = ESlateVisibility::Visible;
}

float UGGListView::GetScrollDistanceRemaining() const {
    return 0.0f;
}

float UGGListView::GetScrollDistance() const {
    return 0.0f;
}

int32 UGGListView::GetDisplayedItemIndex(bool bFromTop, int32 OffsetCount, UUserWidget*& OutDisplayedWidget) {
    return 0;
}

float UGGListView::GetAnalogScrollInput() const {
    return 0.0f;
}


