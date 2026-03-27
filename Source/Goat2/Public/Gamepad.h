#pragma once
#include "CoreMinimal.h"
#include "Gamepad.generated.h"

USTRUCT(BlueprintType)
struct FGamepad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GamepadIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisconnectedTimestamp;
    
    GOAT2_API FGamepad();
};

