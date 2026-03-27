#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_GGEndInteraction.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGEndInteraction : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetOwnBBValues;
    
public:
    UBTTask_GGEndInteraction();

};

