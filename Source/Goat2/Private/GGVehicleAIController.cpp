#include "GGVehicleAIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

AGGVehicleAIController::AGGVehicleAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BrainComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
    this->Blackboard = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
    this->BehaviorTreeComp = (UBehaviorTreeComponent*)BrainComponent;
    this->BlackboardComp = (UBlackboardComponent*)Blackboard;
    this->ControlledVehicle = NULL;
}

void AGGVehicleAIController::StopBehavior(bool ClearBB) {
}

void AGGVehicleAIController::StartBehavior() {
}


