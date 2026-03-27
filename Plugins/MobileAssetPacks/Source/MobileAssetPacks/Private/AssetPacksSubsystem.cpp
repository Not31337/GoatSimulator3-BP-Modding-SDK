#include "AssetPacksSubsystem.h"

UAssetPacksSubsystem::UAssetPacksSubsystem() {
}

void UAssetPacksSubsystem::TryResumeNonWifiDownloads() {
}

TArray<FString> UAssetPacksSubsystem::GetAllAssetPacks() {
    return TArray<FString>();
}

bool UAssetPacksSubsystem::FetchStatus(const FString& AssetPack, FAssetPackCallback Callback) {
    return false;
}

bool UAssetPacksSubsystem::DownloadPack(const FString& AssetPack, FAssetPackCallback Callback) {
    return false;
}

void UAssetPacksSubsystem::CancelAllDownloads() {
}


