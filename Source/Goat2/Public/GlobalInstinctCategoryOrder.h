#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GlobalInstinctCategoryOrder.generated.h"

USTRUCT(BlueprintType)
struct FGlobalInstinctCategoryOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InstinctCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Order;
    
    GOAT2_API FGlobalInstinctCategoryOrder();
};

