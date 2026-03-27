#include "GGGoatSimulatorSettings.h"

UGGGoatSimulatorSettings::UGGGoatSimulatorSettings() {
    this->PreReleaseCertBuildTags_Apocalypse_Names.AddDefaulted(2);
    this->bIsPreReleaseCertBuild_Apocalypse = false;
    this->DebugLanguageName = TEXT("io");
    this->bShowGoatDLCs = false;
    this->Updates.AddDefaulted(11);
    this->GoatGearFolder = TEXT("DataAssets/GoatGear");
    this->ThumbnailSaveLocation = TEXT("UI/Textures/GoatGear");
    this->InstinctsFolder = TEXT("DataAssets/Instincts");
    this->QuestTemplateFolder = TEXT("Blueprints/Quests/Templates");
    this->NotificationWidgetClassesDataTables.AddDefaulted(2);
    this->bUseNewNotificationDataTables = false;
    this->MenuIconDataTables.AddDefaulted(1);
}

bool UGGGoatSimulatorSettings::UseNewNotificationDataTables() {
    return false;
}

bool UGGGoatSimulatorSettings::IsTagRestricted(FGameplayTag InTag) {
    return false;
}

bool UGGGoatSimulatorSettings::IsPreReleaseCertBuild_DLC(EGoatDLC InDLC) {
    return false;
}

bool UGGGoatSimulatorSettings::IsPreReleaseCertBuild_Apocalypse() {
    return false;
}

bool UGGGoatSimulatorSettings::IsKeyForbidden(const FKey& InKey) {
    return false;
}

bool UGGGoatSimulatorSettings::IsAnyPreReleaseCertBuild() {
    return false;
}

TArray<UDataTable*> UGGGoatSimulatorSettings::GetNotificationWidgetClassesDataTables() {
    return TArray<UDataTable*>();
}

TArray<UDataTable*> UGGGoatSimulatorSettings::GetMenuIconDataTables() {
    return TArray<UDataTable*>();
}

UDataTable* UGGGoatSimulatorSettings::GetInputButtonIcons() {
    return NULL;
}

FText UGGGoatSimulatorSettings::GetInputBindingsText(const FString& InKey) {
    return FText::GetEmpty();
}

UDataTable* UGGGoatSimulatorSettings::GetInputBindingsDataTable() {
    return NULL;
}

UDataTable* UGGGoatSimulatorSettings::GetGenericIconSet() {
    return NULL;
}

FString UGGGoatSimulatorSettings::GetGearFolderForUpdate(EGGUpdate Update) {
    return TEXT("");
}

FText UGGGoatSimulatorSettings::GetDisplayNameForSetting(FName SettingName) {
    return FText::GetEmpty();
}

TSoftObjectPtr<UDataTable> UGGGoatSimulatorSettings::GetDefaultNotificationWidgetClassesDataTable() {
    return NULL;
}

FText UGGGoatSimulatorSettings::GetCommonSettingsText(const FString& InKey) {
    return FText::GetEmpty();
}

UTexture2D* UGGGoatSimulatorSettings::GetAssociatedIconForMenuTag(FGameplayTag InTag, FDataTableRowHandle& OutDataTableRowHandle) {
    return NULL;
}

UGGGoatSimulatorSettings* UGGGoatSimulatorSettings::Get() {
    return NULL;
}

bool UGGGoatSimulatorSettings::ContainsRestrictedTag(FGameplayTagContainer InTagContainer) {
    return false;
}


