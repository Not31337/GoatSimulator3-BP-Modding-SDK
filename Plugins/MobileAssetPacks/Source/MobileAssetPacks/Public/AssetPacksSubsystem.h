#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AssetPackCallbackDelegate.h"
#include "AssetPacksSubsystem.generated.h"

UCLASS(Blueprintable)
class MOBILEASSETPACKS_API UAssetPacksSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAssetPacksSubsystem();

    UFUNCTION(BlueprintCallable)
    void TryResumeNonWifiDownloads();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllAssetPacks();
    
    UFUNCTION(BlueprintCallable)
    bool FetchStatus(const FString& AssetPack, FAssetPackCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    bool DownloadPack(const FString& AssetPack, FAssetPackCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void CancelAllDownloads();
    
};

