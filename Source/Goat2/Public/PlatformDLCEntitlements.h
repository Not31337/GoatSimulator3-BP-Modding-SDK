#pragma once
#include "CoreMinimal.h"
#include "DLCSettingEntry.h"
#include "PlatformDLCEntitlements.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FPlatformDLCEntitlements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlatformName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCSettingEntry DLCs;
    
    FPlatformDLCEntitlements();
};

