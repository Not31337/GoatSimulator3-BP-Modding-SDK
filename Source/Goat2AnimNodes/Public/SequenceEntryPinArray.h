#pragma once
#include "CoreMinimal.h"
#include "GGRandomPlayerSequenceEntry.h"
#include "SequenceEntryPinArray.generated.h"

USTRUCT(BlueprintType)
struct GOAT2ANIMNODES_API FSequenceEntryPinArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGRandomPlayerSequenceEntry> Entries;
    
    FSequenceEntryPinArray();
};

