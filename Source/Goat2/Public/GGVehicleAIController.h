#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "GGVehicleAIController.generated.h"

class AGGVehicle;
class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGVehicleAIController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehaviorTreeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* ControlledVehicle;
    
public:
    AGGVehicleAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopBehavior(bool ClearBB);
    
    UFUNCTION(BlueprintCallable)
    void StartBehavior();
    
};

