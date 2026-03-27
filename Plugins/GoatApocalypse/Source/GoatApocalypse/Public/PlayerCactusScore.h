#pragma once
#include "CoreMinimal.h"
#include "PlayerCactusScore.generated.h"

class AGGPlayerState_Apocalypse;

USTRUCT(BlueprintType)
struct FPlayerCactusScore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerState_Apocalypse* LocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentCountdown;
    
    GOATAPOCALYPSE_API FPlayerCactusScore();
};

