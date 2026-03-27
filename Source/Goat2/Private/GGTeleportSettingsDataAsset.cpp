#include "GGTeleportSettingsDataAsset.h"

UGGTeleportSettingsDataAsset::UGGTeleportSettingsDataAsset() {
}

FTeleportParameters UGGTeleportSettingsDataAsset::MakeTeleportParameters(FTeleportParameters BaseParameters, int32 Priority, AGGVehicle* TeleportIntoVehicle, AActor* LocationRelativeToActor) {
    return FTeleportParameters{};
}

FTeleportParameters UGGTeleportSettingsDataAsset::GetTeleportParameters() const {
    return FTeleportParameters{};
}

FTeleportParameters UGGTeleportSettingsDataAsset::GetTeleportAssetParameters(UGGTeleportSettingsDataAsset* SettingAsset, int32 Priority, AGGVehicle* TeleportIntoVehicle, AActor* LocationRelativeToActor, FSpecialLocationAdjust SpecialAdjust, FLoadingScreenParameters& LoadingScreenParams) {
    return FTeleportParameters{};
}

FLoadingScreenParameters UGGTeleportSettingsDataAsset::GetLoadingScreenParameters() const {
    return FLoadingScreenParameters{};
}


