#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_GGBase.h"
#include "BTDecorator_GGCheckNPCIdTags.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGCheckNPCIdTags : public UBTDecorator_GGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector NPCToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToCheckFor;
    
    UBTDecorator_GGCheckNPCIdTags();

};

