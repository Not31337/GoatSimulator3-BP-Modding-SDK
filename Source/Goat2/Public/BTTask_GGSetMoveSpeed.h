#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ENPCMoveMode.h"
#include "BTTask_GGSetMoveSpeed.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGSetMoveSpeed : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCMoveMode MoveMode;
    
public:
    UBTTask_GGSetMoveSpeed();

};

