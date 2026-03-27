#pragma once
#include "CoreMinimal.h"
#include "EInAreaState.h"
#include "InAreaState.generated.h"

class AGGTeleportAreaLogic;
class UGGTeleportAreaDataAsset;

USTRUCT(BlueprintType)
struct FInAreaState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGTeleportAreaDataAsset* CurrentArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInAreaState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishedLoadingOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGTeleportAreaLogic* AreaLogic;
    
    GOAT2_API FInAreaState();
};

