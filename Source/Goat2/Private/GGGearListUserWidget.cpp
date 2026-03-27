#include "GGGearListUserWidget.h"

UGGGearListUserWidget::UGGGearListUserWidget() {
    this->ListWidget = NULL;
    this->RulesDataAssets.AddDefaulted(2);
}

void UGGGearListUserWidget::UpdateGearWidgetGrid(EGearSlot InFilter, bool bShowNone, bool bShowStore, TArray<FGameplayTag> InSorting, bool bForceRefresh, UGGGoatGearInfoDataAsset* OptionalFocus, bool bSetFocus) {
}



bool UGGGearListUserWidget::IsDataAssetAvailibleInList(UGGGoatGearInfoDataAsset* DataAsset) {
    return false;
}

bool UGGGearListUserWidget::FilterGear_Implementation(UGGGoatGearInfoDataAsset* DataAsset, FGameplayTagContainer Filters) {
    return false;
}

bool UGGGearListUserWidget::FilterAltGoatRestriction_Implementation(UGGGoatGearInfoDataAsset* DataAsset) {
    return false;
}


