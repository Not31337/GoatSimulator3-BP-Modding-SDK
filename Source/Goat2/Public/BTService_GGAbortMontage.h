#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_GGAbortMontage.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class GOAT2_API UBTService_GGAbortMontage : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UBTService_GGAbortMontage();

};

