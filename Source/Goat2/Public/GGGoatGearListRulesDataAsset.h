#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GGGoatGearListRule.h"
#include "GGGoatGearListRuleContext.h"
#include "GGGoatGearListRulesDataAsset.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGGoatGearListRulesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DLCDescriptorGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGGoatGearListRule> Rules;
    
    UGGGoatGearListRulesDataAsset();

    UFUNCTION(BlueprintCallable)
    static bool ExecuteRuleWithPredicate(FGGGoatGearListRule Rule, bool& bOutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool ExecuteRule(const FGGGoatGearListRule& Rule, bool& bOutResult, const FGGGoatGearListRuleContext& Context);
    
};

