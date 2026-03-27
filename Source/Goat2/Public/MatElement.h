#pragma once
#include "CoreMinimal.h"
#include "MatElement.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct GOAT2_API FMatElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MatIns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FMatElement();
};

