#pragma once
#include "CoreMinimal.h"
#include "GoatInTriggers.generated.h"

class AGGExponentialFogTrigger;
class AGGGoat;

USTRUCT(BlueprintType)
struct FGoatInTriggers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* Goat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGExponentialFogTrigger*> Triggers;
    
    GOAT2_API FGoatInTriggers();
};

