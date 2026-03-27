#include "GGCustomizationTabUserWidget.h"
#include "Templates/SubclassOf.h"

UGGCustomizationTabUserWidget::UGGCustomizationTabUserWidget() {
    this->bBoughtGearShouldBeRemovedImmediately = false;
    this->bEquipGearImmediatelyAfterBuying = true;
    this->bRightClickUnequipsGearInList = true;
    this->bUnequipOnLeftClick = false;
    this->StyleSelectGracePeriod = 0.50f;
    this->bShowDefaultBaaAsEmptySlotOverview = true;
    this->WidgetSwitcherCustomization = NULL;
    this->ItemCanvas = NULL;
    this->ContentPanel = NULL;
    this->GoatGearListWidget = NULL;
    this->BottomNotificationPanel = NULL;
    this->GearSetsButtonCustomization = NULL;
    this->StoreButtonNamedSlot = NULL;
    this->FeaturedButtonNamedSlot = NULL;
    this->StoreButton = NULL;
    this->GearListContainer = NULL;
    this->VerticalBoxCustomization = NULL;
    this->SelectedGearDataAsset = NULL;
    this->SelectedGearSlot = EGearSlot::GS_None;
    this->CachedSlot = EGearSlot::GS_None;
    this->CachedOptionalGearFocus = NULL;
    this->bCachedIsSorting = false;
    this->SortingPanel = NULL;
    this->SortingOption = NULL;
    this->GearSetsTileView = NULL;
    this->FeaturedTabWidget = NULL;
    this->OwningGoat = NULL;
    this->GearManager = NULL;
    this->GearPreviewManager = NULL;
    this->PreUdderGearRef = NULL;
    this->DLCShopTabWidget = NULL;
}

bool UGGCustomizationTabUserWidget::UnequipPreviewGear(EGearSlot GearSlot) {
    return false;
}

bool UGGCustomizationTabUserWidget::UnequipAllPreviewGear() {
    return false;
}

bool UGGCustomizationTabUserWidget::UncommitPreviewGearSlot(EGearSlot GearSlot, bool bRemovePreview) {
    return false;
}

void UGGCustomizationTabUserWidget::ToggleGearAsFavorite(UGGGoatGearInfoDataAsset* DataAsset, bool& bOutNewFavorite) {
}

void UGGCustomizationTabUserWidget::SwitchToSlotCanvas(EGearSlot InSlot, UGGGoatGearInfoDataAsset* OptionalGearFocus) {
}

void UGGCustomizationTabUserWidget::SetStoreMode() {
}

void UGGCustomizationTabUserWidget::SetSidebarButtonActive(UGGUserWidget* SidebarButton) {
}

void UGGCustomizationTabUserWidget::SetPresetsMode() {
}

void UGGCustomizationTabUserWidget::SetOverviewMode() {
}

void UGGCustomizationTabUserWidget::SetGearAsFavorite(UGGGoatGearInfoDataAsset* DataAsset, bool bFavorite) {
}

void UGGCustomizationTabUserWidget::SetFeaturedMode() {
}

void UGGCustomizationTabUserWidget::SetDLCShopMode() {
}

void UGGCustomizationTabUserWidget::SetCustomizationMode() {
}

void UGGCustomizationTabUserWidget::SetAbilityEnabledForCommitedSlot(EGearSlot GearSlot, bool bAbilityEnabled) {
}

bool UGGCustomizationTabUserWidget::SaveCurrentSortingIndexForMode(ECustomizationMode InMode, const FString& InSortingID) {
    return false;
}

void UGGCustomizationTabUserWidget::RevertPreviewToLastCommited(EGearSlot GearSlot) {
}


void UGGCustomizationTabUserWidget::RefreshGearPresets() {
}


EEquipResult UGGCustomizationTabUserWidget::PerformGearAction(UGGGoatGearInfoDataAsset* DataAsset, UGGGearItemButtonUserWidget* GearWidget) {
    return EEquipResult::None;
}


void UGGCustomizationTabUserWidget::OnSortingOptionIndexChanged(int32 NewIndex) {
}








void UGGCustomizationTabUserWidget::OnOwningGoatRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter) {
}

void UGGCustomizationTabUserWidget::OnGearWasUpdated(AGGGoat* Goat, const TArray<USceneComponent*>& CurrentGoatGear) {
}

void UGGCustomizationTabUserWidget::OnGearUnEquipped(AGGGoat* Goat, const TArray<TSubclassOf<USceneComponent>>& GearUnequipped) {
}

void UGGCustomizationTabUserWidget::OnGearEquipped(AGGGoat* Goat, const TArray<TSubclassOf<USceneComponent>>& GearEquipped) {
}

void UGGCustomizationTabUserWidget::OnFeaturedButtonWidgetInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

void UGGCustomizationTabUserWidget::OnDLCShopButtonWidgetInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

void UGGCustomizationTabUserWidget::OnCustomizationModeChangedInternal(ECustomizationMode CustomizationMode) {
}

void UGGCustomizationTabUserWidget::OnCommittedPreviewGear(UGGGoatGearInfoDataAsset* DataAsset) {
}

bool UGGCustomizationTabUserWidget::IsStoreButtonAvailable() {
    return false;
}

bool UGGCustomizationTabUserWidget::IsNoneButtonAvailable() {
    return false;
}

bool UGGCustomizationTabUserWidget::IsInStoreMode() {
    return false;
}

bool UGGCustomizationTabUserWidget::IsGearSlotTabAvailable(EGearSlot InSlot) {
    return false;
}

bool UGGCustomizationTabUserWidget::IsGearCommited(UGGGoatGearInfoDataAsset* DataAsset) {
    return false;
}

bool UGGCustomizationTabUserWidget::IsAbilityEnabledForCommitedGearForSlot(EGearSlot GearSlot) {
    return false;
}

bool UGGCustomizationTabUserWidget::HasRecentlySpawnedChoiceWidget() {
    return false;
}

bool UGGCustomizationTabUserWidget::HasRecentlySelectedStyle() {
    return false;
}

UGGSidebarListButtonUserWidget* UGGCustomizationTabUserWidget::GetStoreButtonPanelButton() const {
    return NULL;
}




bool UGGCustomizationTabUserWidget::GetCurrentSortingPasses(TArray<FGameplayTag>& SortingPasses) {
    return false;
}

bool UGGCustomizationTabUserWidget::GetCurrentFiltersForSorting(FGameplayTagContainer& Filters) {
    return false;
}

ECustomizationMode UGGCustomizationTabUserWidget::GetCurrentCustomizationMode() {
    return ECustomizationMode::Overview;
}

UGGGoatGearInfoDataAsset* UGGCustomizationTabUserWidget::GetCommitedGearForSlot(EGearSlot GearSlot) {
    return NULL;
}

FText UGGCustomizationTabUserWidget::GetBottomNotificationWidgetText() {
    return FText::GetEmpty();
}

int32 UGGCustomizationTabUserWidget::FindSavedSortingIndexForMode(ECustomizationMode InMode) {
    return 0;
}

bool UGGCustomizationTabUserWidget::EquipPreviewGear(UGGGoatGearInfoDataAsset* DataAsset, bool bEquip, UGGGoatGearStyleDataAsset* StyleAsset) {
    return false;
}

void UGGCustomizationTabUserWidget::CreateStyleChoiceWidget(UGGGoatGearInfoDataAsset* DataAsset, UGGUserWidget* FromWidget) {
}

void UGGCustomizationTabUserWidget::CreateBottomNotificationWidget(TSoftClassPtr<UUserWidget> WidgetClass) {
}

EEquipResult UGGCustomizationTabUserWidget::CommitPreviewGear(UGGGoatGearInfoDataAsset* DataAsset, bool bGiveAbility, bool bPreview, bool bWasUnlocked) {
    return EEquipResult::None;
}

bool UGGCustomizationTabUserWidget::CanGearBePreviewed(UGGGoatGearInfoDataAsset* DataAsset) {
    return false;
}

EEquipResult UGGCustomizationTabUserWidget::BuyGear(UGGGoatGearInfoDataAsset* DataAsset, bool bShouldPreview) {
    return EEquipResult::None;
}


