#include "GGTileView.h"

UGGTileView::UGGTileView(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsFocusable = false;
    this->bWrapVerticalNavigation = false;
    this->bAllowScrolling = true;
    this->bCenterItemOnScrollIntoView = false;
    this->bHandleGamepadAnalogScrolling = false;
    this->bGamepadSelectFromVisibleWidgets = false;
    this->ScrollBarOrientation = Orient_Vertical;
    this->ScrollBarVisibility = ESlateVisibility::Visible;
}


