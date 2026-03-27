#pragma once
#include "CoreMinimal.h"
#include "FakeNews.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFakeNews {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Headline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PreviewImage;
    
    GOAT2_API FFakeNews();
};

