#include "GGNewsFeed.h"
#include "Templates/SubclassOf.h"

AGGNewsFeed::AGGNewsFeed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DownloadPreviewImagesTask = NULL;
    this->bNewsEnabled = true;
    this->bEnableRemoteNews = false;
    this->URLPattern_ThumbnailData = TEXT("newsdata-slot{slot}.json");
    this->URLPattern_ThumbnailImages = TEXT("preview-promo{slot}/");
    this->URLPattern_News = TEXT("promo{slot}/{lang}");
    this->FallbackCulture = TEXT("en");
    this->NewsFeedRequestFailedText = FText::FromString(TEXT("Unable to fetch News Feed."));
    this->TagImageURL = TEXT("image");
    this->TagHeadline = TEXT("headline");
    this->TagBody = TEXT("body");
    this->TagLinkName = TEXT("linkName");
    this->TagLinkURL = TEXT("linkURL");
    this->NewsFeedURLs.AddDefaulted(1);
    this->bNewsReceivedSuccess = false;
}

bool AGGNewsFeed::ShouldShowEntryInCarousel(FNewsPreviewEntry InNewsPreviewEntry) const {
    return false;
}

void AGGNewsFeed::OnPreviewImagesDownloaded(TArray<FDownloadedImage> DownloadedImages) {
}

bool AGGNewsFeed::HasReceivedNewsResponse() const {
    return false;
}

FText AGGNewsFeed::GetNewsPreviewText(const FNewsPreviewEntry& PreviewData) const {
    return FText::GetEmpty();
}

FNewsPreviewEntry AGGNewsFeed::GetNewsPreviewDataBySlot(int32 NewsSlot, bool& bOutSuccess) const {
    return FNewsPreviewEntry{};
}

FNewsPreviewEntry AGGNewsFeed::GetNewsPreviewDataByIndex(int32 NewsIndex, bool& bOutSuccess) const {
    return FNewsPreviewEntry{};
}

FString AGGNewsFeed::GetNewsFeedURL(int32 NewsSlot, ENewsFeedURLTypes Type, const FString& CultureOverride) {
    return TEXT("");
}

AGGNewsFeed* AGGNewsFeed::GetNewsFeedActor(UObject* WorldContext, TSubclassOf<AGGNewsFeed> ClassToSpawn) {
    return NULL;
}


