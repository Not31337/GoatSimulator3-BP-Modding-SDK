#pragma once
#include "CoreMinimal.h"
#include "GGPopupResponseDelegateDelegate.h"
#include "QueuedSavePopups.generated.h"

USTRUCT(BlueprintType)
struct FQueuedSavePopups {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGPopupResponseDelegate Event;
    
    GOAT2_API FQueuedSavePopups();
};

