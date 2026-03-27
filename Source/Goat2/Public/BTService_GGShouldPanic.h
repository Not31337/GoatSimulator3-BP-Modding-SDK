#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_GGShouldPanic.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTService_GGShouldPanic : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckForBurning;
    
    UBTService_GGShouldPanic();

};

