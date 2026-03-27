#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DownloadedImage.h"
#include "ENewsFeedURLTypes.h"
#include "FakeNews.h"
#include "NewsFeedMap.h"
#include "NewsPreviewEntry.h"
#include "OnNewsReceivedDelegate.h"
#include "ParsedNews.h"
#include "PendingNewsRequest.h"
#include "Templates/SubclassOf.h"
#include "GGNewsFeed.generated.h"

class AGGNewsFeed;
class UGGAsyncTaskDownloadImages;
class UObject;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API AGGNewsFeed : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFakeNews> FakeNews;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPendingNewsRequest> PendingNewsRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPendingNewsRequest> PendingWebContentRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGAsyncTaskDownloadImages* DownloadPreviewImagesTask;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewsEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRemoteNews;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URLPattern_ThumbnailData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URLPattern_ThumbnailImages;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URLPattern_News;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FallbackCulture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NewsFeedRequestFailedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TagImageURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TagHeadline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TagBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TagLinkName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TagLinkURL;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewsFeedMap> NewsFeedURLs;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewsReceived OnNewsReceived;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParsedNews ParsedNews;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewsReceivedSuccess;
    
public:
    AGGNewsFeed(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowEntryInCarousel(FNewsPreviewEntry InNewsPreviewEntry) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPreviewImagesDownloaded(TArray<FDownloadedImage> DownloadedImages);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReceivedNewsResponse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNewsPreviewText(const FNewsPreviewEntry& PreviewData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNewsPreviewEntry GetNewsPreviewDataBySlot(int32 NewsSlot, bool& bOutSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNewsPreviewEntry GetNewsPreviewDataByIndex(int32 NewsIndex, bool& bOutSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNewsFeedURL(int32 NewsSlot, ENewsFeedURLTypes Type, const FString& CultureOverride);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AGGNewsFeed* GetNewsFeedActor(UObject* WorldContext, TSubclassOf<AGGNewsFeed> ClassToSpawn);
    
};

