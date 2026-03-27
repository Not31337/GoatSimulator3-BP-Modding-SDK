#pragma once
#include "CoreMinimal.h"
#include "CheatMenuDataEntry.h"
#include "CheatMenuDataHolder.generated.h"

USTRUCT(BlueprintType)
struct FCheatMenuDataHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataHolderTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataHolderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheatMenuDataEntry> Entries;
    
    GOAT2_API FCheatMenuDataHolder();
};

