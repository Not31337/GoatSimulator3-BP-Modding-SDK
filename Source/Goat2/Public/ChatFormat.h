#pragma once
#include "CoreMinimal.h"
#include "ChatFormat.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FChatFormat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultStyle;
    
    FChatFormat();
};

