#pragma once
#include "CoreMinimal.h"
#include "PlayerSession.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString endpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Port;
    
    ONLINESUBSYSTEMGAMENIGHT_API FPlayerSession();
};

