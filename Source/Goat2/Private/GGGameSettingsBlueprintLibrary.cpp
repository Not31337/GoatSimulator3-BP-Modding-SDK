#include "GGGameSettingsBlueprintLibrary.h"

UGGGameSettingsBlueprintLibrary::UGGGameSettingsBlueprintLibrary() {
}

float UGGGameSettingsBlueprintLibrary::SettingToFloat(const FGGGameSetting& InSetting) {
    return 0.0f;
}

bool UGGGameSettingsBlueprintLibrary::SettingToBool(const FGGGameSetting& InSetting) {
    return false;
}

FString UGGGameSettingsBlueprintLibrary::GetSettingValueAsString(FName SettingName, FName SettingCategory, int32 OwningPlayerID, bool bIncludeValueTextFactor) {
    return TEXT("");
}

int32 UGGGameSettingsBlueprintLibrary::GetSettingValueAsInt(FName SettingName, FName SettingCategory, int32 OwningPlayerID, bool bIncludeValueTextFactor) {
    return 0;
}

float UGGGameSettingsBlueprintLibrary::GetSettingValueAsFloat(FName SettingName, FName SettingCategory, int32 OwningPlayerID, bool bIncludeValueTextFactor) {
    return 0.0f;
}

bool UGGGameSettingsBlueprintLibrary::GetSettingValueAsBool(FName SettingName, FName SettingCategory, int32 OwningPlayerID) {
    return false;
}


