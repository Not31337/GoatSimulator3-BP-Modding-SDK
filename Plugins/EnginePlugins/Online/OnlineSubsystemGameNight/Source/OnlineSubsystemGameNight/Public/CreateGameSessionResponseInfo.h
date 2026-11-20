#pragma once
#include "CoreMinimal.h"
#include "GameSesion.h"
#include "CreateGameSessionResponseInfo.generated.h"

USTRUCT(BlueprintType)
struct FCreateGameSessionResponseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSesion GameSession;
    
    ONLINESUBSYSTEMGAMENIGHT_API FCreateGameSessionResponseInfo();
};

