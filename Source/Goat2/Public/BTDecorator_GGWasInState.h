#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "EBTGGBlackboardRestart.h"
#include "EWasInStates.h"
#include "BTDecorator_GGWasInState.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGWasInState : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWasInStates State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBTGGBlackboardRestart::Type> NotifyObserver;
    
public:
    UBTDecorator_GGWasInState();

};

