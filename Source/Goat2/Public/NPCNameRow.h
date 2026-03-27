#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NPCNameRow.generated.h"

USTRUCT(BlueprintType)
struct FNPCNameRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    GOAT2_API FNPCNameRow();
};

