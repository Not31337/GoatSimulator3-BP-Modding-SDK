#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "GGAIController.generated.h"

class AGGNPC;
class UBehaviorTree;
class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehaviorTreeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* RoamingTree;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* ControlledNPC;
    
public:
    AGGAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchToRoaming();
    
    UFUNCTION(BlueprintCallable)
    void StopBehavior();
    
    UFUNCTION(BlueprintCallable)
    void StartBehavior();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetNotChasingActor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGNPC* GetControlledGGNPC() const;
    
};

