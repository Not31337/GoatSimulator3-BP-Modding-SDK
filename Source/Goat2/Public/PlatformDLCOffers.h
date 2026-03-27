#pragma once
#include "CoreMinimal.h"
#include "DLCOfferEntries.h"
#include "PlatformDLCOffers.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FPlatformDLCOffers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlatformName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCOfferEntries Offers;
    
    FPlatformDLCOffers();
};

