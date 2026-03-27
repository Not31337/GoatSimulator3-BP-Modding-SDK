#pragma once
#include "CoreMinimal.h"
#include "DownloadedImage.generated.h"

class UTexture2DDynamic;

USTRUCT(BlueprintType)
struct FDownloadedImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    GOAT2_API FDownloadedImage();
};

