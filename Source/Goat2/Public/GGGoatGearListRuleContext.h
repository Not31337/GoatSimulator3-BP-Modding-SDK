#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EGoatDLC.h"
#include "GGGoatGearListRuleContext.generated.h"

class UGGGoatGearInfoDataAsset;

USTRUCT(BlueprintType)
struct FGGGoatGearListRuleContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Filters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGearUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGoatDLC CurrentDLC;
    
    GOAT2_API FGGGoatGearListRuleContext();
};

