#pragma once
#include "CoreMinimal.h"
#include "EGameVersion.h"
#include "NewsFeedMap.generated.h"

USTRUCT(BlueprintType)
struct FNewsFeedMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameVersion GameVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    GOAT2_API FNewsFeedMap();
};

