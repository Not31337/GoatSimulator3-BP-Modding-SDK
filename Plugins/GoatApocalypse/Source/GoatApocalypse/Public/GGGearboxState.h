#pragma once
#include "CoreMinimal.h"
#include "GGGearboxState.generated.h"

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGGearboxState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetGear;
    
    FGGGearboxState();
};

