#pragma once
#include "CoreMinimal.h"
#include "InputUser.generated.h"

class UGGLocalPlayer;

USTRUCT(BlueprintType)
struct FInputUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClaimedGamepadIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGLocalPlayer* ClaimedByPlayer;
    
    GOAT2_API FInputUser();
};

