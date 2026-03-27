#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AreasToConsider.generated.h"

USTRUCT(BlueprintType)
struct FAreasToConsider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> AreaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeNoAreaLines;
    
    GOAT2_API FAreasToConsider();
};

