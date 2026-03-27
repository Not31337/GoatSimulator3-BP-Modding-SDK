#include "GGGearItemButtonUserWidget.h"

UGGGearItemButtonUserWidget::UGGGearItemButtonUserWidget() {
    this->bFocusOnHover = true;
    this->bHoldToInteract = true;
    this->DataAsset = NULL;
    this->CustomizationMode = ECustomizationMode::Customization;
    this->StaticGearSlot = EGearSlot::GS_None;
    this->BuyText = FText::FromString(TEXT("<keybind action=\"MenuNavSelect\"/> Buy"));
    this->HoldBuyText = FText::FromString(TEXT("<keybind action=\"MenuNavSelect\" hold=\"{Duration}\"/> Buy"));
    this->NotYetUnlockedText = FText::FromString(TEXT("Not yet unlocked..."));
    this->EquippedOverlay = NULL;
    this->NewOverlay = NULL;
    this->PriceOverlay = NULL;
    this->BuyingOverlay = NULL;
    this->NotEnoughTokensOverlay = NULL;
    this->FavoriteOverlay = NULL;
    this->ErrorOverlay = NULL;
    this->LoadingOverlay = NULL;
    this->AdditionalBackgroundOverlay = NULL;
    this->AdditionalBackgroundSwitcher = NULL;
    this->TestGearOverlay = NULL;
    this->GearNameLabel = NULL;
    this->GearPriceLabel = NULL;
    this->GearImage = NULL;
    this->BaaGearImageBackground = NULL;
    this->AbilityIcon = NULL;
    this->AbilityIconContainer = NULL;
    this->AbilityFXOverlay = NULL;
    this->FavoriteCheckbox = NULL;
    this->StyleIcon = NULL;
    this->DLCIcon = NULL;
    this->GearBought = NULL;
    this->NotEnoughTokens = NULL;
    this->GearSelected = NULL;
    this->BuyCameraShake = NULL;
    this->CameraShakeInnerRadius = 0.00f;
    this->CameraShakeOuterRadius = 5000.00f;
    this->CameraShakeFallOff = 1.00f;
    this->bCameraShakeOrientTowardsEpicenter = false;
    this->Tier = 0;
    this->StyleSeed = 0;
    this->NameLimitWidth = 400;
    this->bGearWasJustEquipped = false;
    this->bSupportsBuying = true;
    this->bSupportsEquipping = true;
    this->bSupportsFavoriting = true;
    this->bSupportsRightClick = true;
    this->bSupportsShowingAbilityIcon = true;
    this->bSupportsShowingAbilityStateInList = false;
    this->bUpdateThumbnailOnStylePreview = true;
    this->bRevertStyleThumbnailOnUnequip = false;
    this->GearIcon = NULL;
    this->LastIconDataAsset = NULL;
}

void UGGGearItemButtonUserWidget::UpdateIconAsset(UGGGoatGearInfoDataAsset* GearAsset) {
}

void UGGGearItemButtonUserWidget::ToggleError(bool bHasError) {
}

void UGGGearItemButtonUserWidget::ToggleBuyMode(bool bEnable) {
}

bool UGGGearItemButtonUserWidget::SupportsRightClick() {
    return false;
}

bool UGGGearItemButtonUserWidget::SupportsFavoriting() {
    return false;
}

bool UGGGearItemButtonUserWidget::SupportsEquipping() {
    return false;
}

bool UGGGearItemButtonUserWidget::SupportsBuying() {
    return false;
}

bool UGGGearItemButtonUserWidget::ShouldUpdateIcon(UGGGoatGearInfoDataAsset* GearAsset) {
    return false;
}

bool UGGGearItemButtonUserWidget::ShouldUpdateAGTag_Implementation() {
    return false;
}


void UGGGearItemButtonUserWidget::SetUnread() {
}

void UGGGearItemButtonUserWidget::SetTier() {
}

void UGGGearItemButtonUserWidget::SetTestGear() {
}

void UGGGearItemButtonUserWidget::SetStyles() {
}

void UGGGearItemButtonUserWidget::SetPrice() {
}

void UGGGearItemButtonUserWidget::SetName_Implementation() {
}

void UGGGearItemButtonUserWidget::SetIcon(UTexture2D* InTexture) {
}

void UGGGearItemButtonUserWidget::SetFavorite() {
}

void UGGGearItemButtonUserWidget::SetEquipped() {
}

void UGGGearItemButtonUserWidget::SetDLCRestricted() {
}

void UGGGearItemButtonUserWidget::SetDLC() {
}

void UGGGearItemButtonUserWidget::SetAbility_Implementation() {
}

void UGGGearItemButtonUserWidget::ResetVisuals_Implementation() {
}

void UGGGearItemButtonUserWidget::PreformGearAction(EEquipResult Action) {
}
















void UGGGearItemButtonUserWidget::OnGearWasUpdated(AGGGoat* Goat, const TArray<USceneComponent*>& CurrentGoatGear) {
}


void UGGGearItemButtonUserWidget::OnFavoriteCheckStateChange(bool IsChecked) {
}

void UGGGearItemButtonUserWidget::NativeOnWidgetUnhovered(UGGUserWidget* InWidget) {
}

void UGGGearItemButtonUserWidget::NativeOnWidgetHovered(UGGUserWidget* InWidget) {
}

void UGGGearItemButtonUserWidget::LoadIconTexture(TSoftObjectPtr<UTexture2D> InGearIcon) {
}

void UGGGearItemButtonUserWidget::LoadAndSetIcon(UGGGoatGearInfoDataAsset* GearAsset) {
}

bool UGGGearItemButtonUserWidget::IsInBuyMode() {
    return false;
}

bool UGGGearItemButtonUserWidget::IsGearUnlocked() {
    return false;
}

bool UGGGearItemButtonUserWidget::IsGearUnknown() {
    return false;
}

bool UGGGearItemButtonUserWidget::IsGearDLCRestricted(EGoatDLCRestriction& OutRestriction) const {
    return false;
}

bool UGGGearItemButtonUserWidget::HasDescriptor(FGameplayTag InTag) {
    return false;
}

int32 UGGGearItemButtonUserWidget::GetUnlockTypeFromTag(FGameplayTag UnlockType, bool& Found) {
    return 0;
}

int32 UGGGearItemButtonUserWidget::GetRarityFromTag(FGameplayTag Rarity, bool& Found) {
    return 0;
}

TSoftObjectPtr<UTexture2D> UGGGearItemButtonUserWidget::DetermineIcon(UGGGoatGearInfoDataAsset* GearAsset) {
    return NULL;
}

void UGGGearItemButtonUserWidget::DetermineAdditionalBackgroundOverlay() {
}

bool UGGGearItemButtonUserWidget::CanCurrentAGEquipThis(UGGGoatGearInfoDataAsset* GearAsset) {
    return false;
}

bool UGGGearItemButtonUserWidget::CanAffordGear() {
    return false;
}


