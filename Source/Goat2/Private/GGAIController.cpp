#include "GGAIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GGPathFollowingComponent.h"

AGGAIController::AGGAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGGPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->BrainComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
    this->Blackboard = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
    this->BehaviorTreeComp = (UBehaviorTreeComponent*)BrainComponent;
    this->BlackboardComp = (UBlackboardComponent*)Blackboard;
    this->RoamingTree = NULL;
    this->ControlledNPC = NULL;
}

void AGGAIController::SwitchToRoaming() {
}

void AGGAIController::StopBehavior() {
}

void AGGAIController::StartBehavior() {
}

void AGGAIController::SetNotChasingActor() {
}

AGGNPC* AGGAIController::GetControlledGGNPC() const {
    return NULL;
}


