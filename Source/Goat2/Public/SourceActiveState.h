#pragma once
#include "CoreMinimal.h"
#include "SourceActiveState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSourceActiveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSourceActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActivatedBy;
    
    GOAT2_API FSourceActiveState();
};

