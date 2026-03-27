#pragma once
#include "CoreMinimal.h"
#include "NewsWebContent.generated.h"

USTRUCT(BlueprintType)
struct FNewsWebContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewsSlot;
    
    GOAT2_API FNewsWebContent();
};

