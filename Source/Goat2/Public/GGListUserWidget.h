#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AdvancedRule.h"
#include "GGUserWidget.h"
#include "GGListUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGListUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UGGListUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetActiveSorting(TArray<FGameplayTag> InActiveSorting);
    
    UFUNCTION(BlueprintCallable)
    bool RebuildQuestList(TArray<FAdvancedRule> Rulesets, TArray<FGameplayTag> AdditionalHeaders);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRebuiltList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearedList();
    
    UFUNCTION(BlueprintCallable)
    void ClearList();
    
};

