#pragma once
#include "CoreMinimal.h"
#include "NPCNameIndexes.generated.h"

USTRUCT(BlueprintType)
struct FNPCNameIndexes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 FirstNameInt;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastNameInt;
    
    GOAT2_API FNPCNameIndexes();
};

