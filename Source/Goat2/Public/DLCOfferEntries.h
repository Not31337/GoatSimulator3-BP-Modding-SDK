#pragma once
#include "CoreMinimal.h"
#include "EGoatDLC.h"
#include "DLCOfferEntries.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FDLCOfferEntries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGoatDLC, FString> OfferIDs;
    
    FDLCOfferEntries();
};

