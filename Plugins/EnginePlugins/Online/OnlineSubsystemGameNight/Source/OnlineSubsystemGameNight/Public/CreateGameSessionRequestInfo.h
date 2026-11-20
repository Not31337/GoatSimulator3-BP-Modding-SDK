#pragma once
#include "CoreMinimal.h"
#include "ContextInfo.h"
#include "CreateGameSessionRequestInfo.generated.h"

USTRUCT(BlueprintType)
struct FCreateGameSessionRequestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maximumPlayerSessionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameClientId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameVersionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString idempotencyToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContextInfo Context;
    
    ONLINESUBSYSTEMGAMENIGHT_API FCreateGameSessionRequestInfo();
};

