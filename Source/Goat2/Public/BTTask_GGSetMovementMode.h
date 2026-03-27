#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Engine/EngineTypes.h"
#include "ECustomMovementModes.h"
#include "BTTask_GGSetMovementMode.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGSetMovementMode : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> NewMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECustomMovementModes> CustomMovementMode;
    
public:
    UBTTask_GGSetMovementMode();

};

