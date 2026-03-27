#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGCachedOnlineImage.h"
#include "GGOnlineAssetCache.generated.h"

class UTexture;

UCLASS(Blueprintable)
class GOAT2_API UGGOnlineAssetCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCacheSizeBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGCachedOnlineImage> Images;
    
public:
    UGGOnlineAssetCache();

    UFUNCTION(BlueprintCallable)
    void SetMaxCacheSize(int32 NumBytes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsImageCached(const FString& URL) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxCacheSize() const;
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetImage(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void CacheImage(const FString& URL, UTexture* Image);
    
};

