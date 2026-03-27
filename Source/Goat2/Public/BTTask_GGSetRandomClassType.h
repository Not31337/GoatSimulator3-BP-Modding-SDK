#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "Templates/SubclassOf.h"
#include "BTTask_GGSetRandomClassType.generated.h"

class AActor;

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGSetRandomClassType : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ClassesToChooseFrom;
    
public:
    UBTTask_GGSetRandomClassType();

};

