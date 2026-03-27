#pragma once
#include "CoreMinimal.h"
#include "GGPopupResponseDelegateDelegate.h"
#include "QueuedOnlinePopups.generated.h"

USTRUCT(BlueprintType)
struct FQueuedOnlinePopups {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGPopupResponseDelegate Event;
    
    GOAT2_API FQueuedOnlinePopups();
};

