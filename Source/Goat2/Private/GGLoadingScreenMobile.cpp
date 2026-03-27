#include "GGLoadingScreenMobile.h"

UGGLoadingScreenMobile::UGGLoadingScreenMobile() {
    this->IsCompilingShaderCache = false;
    this->TimeSpentLoading = 0;
    this->TimeIncreasePerTimeout = 5;
    this->TimeBeforeFirstTimeout = 15;
    this->AssetPacksSubsystem = NULL;
}

int32 UGGLoadingScreenMobile::TotalNumShaderTasks() const {
    return 0;
}




int32 UGGLoadingScreenMobile::NumPrecompilesRemaining() {
    return 0;
}

void UGGLoadingScreenMobile::LogLoadingEvent(const FString& Step, const FString& Package, int32 LoadingTime) {
}

int32 UGGLoadingScreenMobile::GetTotalPacks() const {
    return 0;
}

int32 UGGLoadingScreenMobile::GetTotalBytesToDownload() const {
    return 0;
}

int32 UGGLoadingScreenMobile::GetRemainingBytesToDownload() const {
    return 0;
}

int32 UGGLoadingScreenMobile::GetNumberAssetPacksToDownload() const {
    return 0;
}

FName UGGLoadingScreenMobile::GetLevelNameToOpen() const {
    return NAME_None;
}

int32 UGGLoadingScreenMobile::GetCurrentAssetPackNumber() const {
    return 0;
}

void UGGLoadingScreenMobile::FetchAssetPackStatus() {
}

void UGGLoadingScreenMobile::FetchAssetPackCallback(const FString& AssetPack, EAssetPackState Status, int64 DownloadedBytes, int64 TotalBytes) {
}



void UGGLoadingScreenMobile::DownloadAndLoadAssetPacks() {
}

void UGGLoadingScreenMobile::CancelAllDownloads() {
}

void UGGLoadingScreenMobile::AssetPackCallback(const FString& AssetPack, EAssetPackState Status, int64 DownloadedBytes, int64 TotalBytes) {
}


