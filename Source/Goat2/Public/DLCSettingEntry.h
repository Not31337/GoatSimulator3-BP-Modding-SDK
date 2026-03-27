#pragma once
#include "CoreMinimal.h"
#include "EGoatDLC.h"
#include "DLCSettingEntry.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FDLCSettingEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGoatDLC, FName> EntitlementIds;
    
    FDLCSettingEntry();
};

