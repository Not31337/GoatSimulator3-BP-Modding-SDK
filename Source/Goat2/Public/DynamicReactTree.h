#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DynamicReactTree.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FDynamicReactTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBehaviorTree> SoftBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTreeHardRef;
    
    GOAT2_API FDynamicReactTree();
};

