#pragma once
#include "CoreMinimal.h"
#include "EGoatDLC.h"
#include "UpdateNotificationsPrefNames.generated.h"

USTRUCT(BlueprintType)
struct FUpdateNotificationsPrefNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGoatDLC DLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClientNotificationPrefName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClientJoinNotificationPrefName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HostNotificationPrefName;
    
    GOAT2_API FUpdateNotificationsPrefNames();
};

