#pragma once
#include "CoreMinimal.h"
#include "LocalGoatOverlap.generated.h"

class AGGGoat;

USTRUCT(BlueprintType)
struct FLocalGoatOverlap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* Goat;
    
    GOAT2_API FLocalGoatOverlap();
};

