#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NotificationDelay.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FNotificationDelay {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
public:
    FNotificationDelay();
};

