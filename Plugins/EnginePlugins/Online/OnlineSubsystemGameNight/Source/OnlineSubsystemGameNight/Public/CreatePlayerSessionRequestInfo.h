#pragma once
#include "CoreMinimal.h"
#include "CreatePlayerSessionRequestInfo.generated.h"

USTRUCT(BlueprintType)
struct FCreatePlayerSessionRequestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString gameSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerId;
    
    ONLINESUBSYSTEMGAMENIGHT_API FCreatePlayerSessionRequestInfo();
};

