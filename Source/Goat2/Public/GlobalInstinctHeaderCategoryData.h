#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GlobalInstinctHeaderCategoryData.generated.h"

class UGGInstinctCategoryDataAsset;

USTRUCT(BlueprintType)
struct FGlobalInstinctHeaderCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InstinctCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGGInstinctCategoryDataAsset> Category;
    
    GOAT2_API FGlobalInstinctHeaderCategoryData();
};

