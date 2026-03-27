#pragma once
#include "CoreMinimal.h"
#include "AreaAssetOnSlot.generated.h"

class UGGTeleportAreaDataAsset;

USTRUCT(BlueprintType)
struct FAreaAssetOnSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGTeleportAreaDataAsset* AreaAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Slot;
    
    GOAT2_API FAreaAssetOnSlot();
};

