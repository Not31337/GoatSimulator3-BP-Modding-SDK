#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_GGReturnFromIdleNPC.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGReturnFromIdleNPC : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttemptToResetCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysSucceed;
    
public:
    UBTTask_GGReturnFromIdleNPC();

};

