#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RecentVector.generated.h"

USTRUCT(BlueprintType)
struct FRecentVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Vector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    GOAT2_API FRecentVector();
};

