#pragma once
#include "CoreMinimal.h"
#include "EAssetPackState.h"
#include "GGLoadingScreen.h"
#include "GGLoadingScreenMobile.generated.h"

class UAssetPacksSubsystem;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGLoadingScreenMobile : public UGGLoadingScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsCompilingShaderCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString DebugString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TimeSpentLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeIncreasePerTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeBeforeFirstTimeout;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetPacksSubsystem* AssetPacksSubsystem;
    
public:
    UGGLoadingScreenMobile();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 TotalNumShaderTasks() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipDownloadingPackages();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshProgressText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PackageDownloadTimedOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumPrecompilesRemaining();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LogLoadingEvent(const FString& Step, const FString& Package, int32 LoadingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPacks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalBytesToDownload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingBytesToDownload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberAssetPacksToDownload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLevelNameToOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAssetPackNumber() const;
    
    UFUNCTION(BlueprintCallable)
    void FetchAssetPackStatus();
    
private:
    UFUNCTION()
    void FetchAssetPackCallback(const FString& AssetPack, EAssetPackState Status, int64 DownloadedBytes, int64 TotalBytes);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FailedToFetchPackage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FailedToDownloadPackage();
    
    UFUNCTION(BlueprintCallable)
    void DownloadAndLoadAssetPacks();
    
    UFUNCTION(BlueprintCallable)
    void CancelAllDownloads();
    
private:
    UFUNCTION()
    void AssetPackCallback(const FString& AssetPack, EAssetPackState Status, int64 DownloadedBytes, int64 TotalBytes);
    
};

