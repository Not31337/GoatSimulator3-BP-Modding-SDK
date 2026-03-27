#include "GGGearPresetSettingsDataAsset.h"

UGGGearPresetSettingsDataAsset::UGGGearPresetSettingsDataAsset() {
    this->MaxNumPresets = 10;
    this->GearPresetMenuLabel = FText::FromString(TEXT("Gear Sets"));
    this->bHoldToDeletePreset = true;
    this->bSmallIconsHasDesignatedSlots = true;
    this->SmallIconsDesignatedSlots.AddDefaulted(4);
    this->NumberOfColumns = 3;
    this->bShowDisabledGearAsGrayedOut = true;
    this->bAGDeterminesPresetAvailability = true;
    this->bUnavailableGearsInPresetAreNotPreviewed = true;
    this->bUnavailablePresetAreNotPreviewed = false;
    this->PresetDefaultNameFormat = FText::FromString(TEXT("Gear set {0}"));
    this->bUseGearTierColorsInIcons = false;
    this->bUseAGTierColorForAllSlots = true;
    this->bUseAGTierAsBorderColor = true;
    this->bBlockNextCreatedPresetFromBeingIdentical = false;
    this->bDisallowIdenticalPresets = false;
    this->GearSlotCountingAsIdentical.AddDefaulted(7);
    this->bAllowPresetNaming = false;
    this->PresetNameMaxLength = 20;
    this->PresetNamingWidgetClass = NULL;
}


