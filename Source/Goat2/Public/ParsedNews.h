#pragma once
#include "CoreMinimal.h"
#include "NewsPreviewEntry.h"
#include "ParsedNews.generated.h"

USTRUCT(BlueprintType)
struct FParsedNews {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewsPreviewEntry> Previews;
    
    GOAT2_API FParsedNews();
};

