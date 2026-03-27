#pragma once
#include "CoreMinimal.h"
#include "NewsTabEntry.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FNewsTabEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewsID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    FNewsTabEntry();
};

