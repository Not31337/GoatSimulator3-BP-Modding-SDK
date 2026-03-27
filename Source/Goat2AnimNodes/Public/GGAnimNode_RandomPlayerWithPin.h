#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "SequenceEntryPinArray.h"
#include "GGAnimNode_RandomPlayerWithPin.generated.h"

USTRUCT(BlueprintType)
struct GOAT2ANIMNODES_API FGGAnimNode_RandomPlayerWithPin : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShuffleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRateOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceEntryPinArray PinArray;
    
    FGGAnimNode_RandomPlayerWithPin();
};

