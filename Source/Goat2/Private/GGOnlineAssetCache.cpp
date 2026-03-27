#include "GGOnlineAssetCache.h"

UGGOnlineAssetCache::UGGOnlineAssetCache() {
    this->MaxCacheSizeBytes = 10485760;
}

void UGGOnlineAssetCache::SetMaxCacheSize(int32 NumBytes) {
}

bool UGGOnlineAssetCache::IsImageCached(const FString& URL) const {
    return false;
}

int32 UGGOnlineAssetCache::GetMaxCacheSize() const {
    return 0;
}

UTexture* UGGOnlineAssetCache::GetImage(const FString& URL) {
    return NULL;
}

void UGGOnlineAssetCache::CacheImage(const FString& URL, UTexture* Image) {
}


