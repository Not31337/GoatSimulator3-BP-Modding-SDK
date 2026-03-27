#pragma once
#include "CoreMinimal.h"
#include "SplitScreenPlayerData.generated.h"

class AGGPlayerController;
class AGGPlayerState;
class UGGLocalPlayer;

USTRUCT(BlueprintType)
struct FSplitScreenPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGLocalPlayer* LocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerId;
    
    GOAT2_API FSplitScreenPlayerData();
};

