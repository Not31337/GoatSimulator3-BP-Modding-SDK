#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "GGCompanionAIController.generated.h"

UCLASS(Abstract, Blueprintable)
class GEARPACK_MAGIC_API AGGCompanionAIController : public AAIController {
    GENERATED_BODY()
public:
    AGGCompanionAIController(const FObjectInitializer& ObjectInitializer);

};

