#include "GGDLCShopCategoryHeaderWidget.h"
#include "Components/SlateWrapperTypes.h"

UGGDLCShopCategoryHeaderWidget::UGGDLCShopCategoryHeaderWidget() {
    this->Visibility = ESlateVisibility::Visible;
    this->bIsFocusable = true;
    this->CategoryTextBlock = NULL;
    this->AssociatedPanel = NULL;
}

void UGGDLCShopCategoryHeaderWidget::OnOffersUpdated() {
}

UWidget* UGGDLCShopCategoryHeaderWidget::GetWidgetToFocusNavigation(UWidget* PreviousFocus, EUINavigation Direction) {
    return NULL;
}


