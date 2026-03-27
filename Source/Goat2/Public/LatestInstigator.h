#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LatestInstigator.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FLatestInstigator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpireTs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetOnUnragdoll;
    
public:
    GOAT2_API FLatestInstigator();
};

