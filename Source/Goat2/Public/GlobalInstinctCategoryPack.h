#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GlobalInstinctCategoryPack.generated.h"

class UGGInstinctPackDataAsset;

USTRUCT(BlueprintType)
struct FGlobalInstinctCategoryPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InstinctCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGGInstinctPackDataAsset> Pack;
    
    GOAT2_API FGlobalInstinctCategoryPack();
};

