#pragma once
#include "CoreMinimal.h"
#include "GGDialogueLineIndex.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGDialogueLineIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Branch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FGGDialogueLineIndex();
};

