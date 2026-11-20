#pragma once
#include "CoreMinimal.h"
#include "ContextInfo.generated.h"

USTRUCT(BlueprintType)
struct FContextInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString lunaSessionId;
    
    ONLINESUBSYSTEMGAMENIGHT_API FContextInfo();
};

