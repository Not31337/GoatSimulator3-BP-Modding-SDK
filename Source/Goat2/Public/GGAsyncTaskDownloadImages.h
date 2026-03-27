#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DownloadImagesDelegateDelegate.h"
#include "DownloadedImage.h"
#include "PendingImageRequest.h"
#include "GGAsyncTaskDownloadImages.generated.h"

class UGGAsyncTaskDownloadImages;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGAsyncTaskDownloadImages : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadImagesDelegate OnFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPendingImageRequest> PendingImageRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDownloadedImage> DownloadedImages;
    
public:
    UGGAsyncTaskDownloadImages();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGGAsyncTaskDownloadImages* DownloadImages(const TArray<FString>& URLs, UObject* WorldContextObject);
    
};

