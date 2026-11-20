#pragma once
#include "CoreMinimal.h"
#include "DuckfeedChannelSettings.h"
#include "DuckfeedConfig.generated.h"

USTRUCT(BlueprintType)
struct FDuckfeedConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClientSecret;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckfeedChannelSettings> Channels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxConcurrentRequests;
    
    DUCKFEED_API FDuckfeedConfig();
};

