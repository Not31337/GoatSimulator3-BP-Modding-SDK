#pragma once
#include "CoreMinimal.h"
#include "GGCachedOnlineImage.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FGGCachedOnlineImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    GOAT2_API FGGCachedOnlineImage();
};

