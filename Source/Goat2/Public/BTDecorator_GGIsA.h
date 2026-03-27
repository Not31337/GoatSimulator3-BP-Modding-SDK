#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_GGIsA.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsA : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassToCheck;
    
    UBTDecorator_GGIsA();

};

