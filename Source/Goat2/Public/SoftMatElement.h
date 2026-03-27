#pragma once
#include "CoreMinimal.h"
#include "SoftMatElement.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSoftMatElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MatIns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    GOAT2_API FSoftMatElement();
};

