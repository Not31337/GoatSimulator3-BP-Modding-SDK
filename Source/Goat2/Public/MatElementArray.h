#pragma once
#include "CoreMinimal.h"
#include "MatElement.h"
#include "MatElementArray.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FMatElementArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> Materials;
    
    FMatElementArray();
};

