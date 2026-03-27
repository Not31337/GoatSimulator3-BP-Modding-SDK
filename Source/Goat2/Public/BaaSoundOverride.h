#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BaaSoundOverride.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct GOAT2_API FBaaSoundOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FGameplayTag Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BaaSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    FBaaSoundOverride();
};

