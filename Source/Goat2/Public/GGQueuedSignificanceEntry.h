#pragma once
#include "CoreMinimal.h"
#include "GGQueuedSignificanceEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GOAT2_API FGGQueuedSignificanceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    FGGQueuedSignificanceEntry();
};

