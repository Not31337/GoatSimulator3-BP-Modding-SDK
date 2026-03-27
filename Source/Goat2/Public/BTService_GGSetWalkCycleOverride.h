#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_GGSetWalkCycleOverride.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class GOAT2_API UBTService_GGSetWalkCycleOverride : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> WalkCycleOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> RunCycleOverrides;
    
    UBTService_GGSetWalkCycleOverride();

};

