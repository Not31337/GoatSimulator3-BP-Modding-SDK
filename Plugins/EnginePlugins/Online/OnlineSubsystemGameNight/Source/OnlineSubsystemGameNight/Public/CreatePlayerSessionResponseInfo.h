#pragma once
#include "CoreMinimal.h"
#include "PlayerSession.h"
#include "CreatePlayerSessionResponseInfo.generated.h"

USTRUCT(BlueprintType)
struct FCreatePlayerSessionResponseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSession PlayerSession;
    
    ONLINESUBSYSTEMGAMENIGHT_API FCreatePlayerSessionResponseInfo();
};

