#include "GGAIController_Humanoid.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

AGGAIController_Humanoid::AGGAIController_Humanoid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComp"));
    this->SightRadius = 1200.00f;
    this->LoseSightRadius = 1300.00f;
    this->PeripheralVisionAngleDegrees = 80.00f;
    this->BraceForImpactDotCompare = 0.92f;
    this->ChanceToBraceForImpact = 80;
    this->ForgetBraceIgnoreAfter = 5.00f;
    this->NPCManager = NULL;
    this->SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
    this->ControlledHumanoid = NULL;
}

void AGGAIController_Humanoid::TargetPerceptionUpdated(AActor* UpdatedActor, FAIStimulus Stimulus) {
}

void AGGAIController_Humanoid::SetSightEnabled(bool bNewEnabled) {
}

void AGGAIController_Humanoid::PerceptionUpdated(const TArray<AActor*>& UpdatedActors) {
}

void AGGAIController_Humanoid::NPCPerceptionUpdated(AGGNPC_Humanoid* UpdatedNPC, FAIStimulus Stimulus) {
}

bool AGGAIController_Humanoid::JoinEvent(AGGNPCEvent* EventToStart, bool CalledFromEvent) {
    return false;
}

bool AGGAIController_Humanoid::IsSightEnabled() {
    return false;
}

void AGGAIController_Humanoid::GoatPerceptionUpdated(AGGGoat* UpdatedGoat, FAIStimulus Stimulus) {
}

AGGNPCEvent* AGGAIController_Humanoid::GetCurrentEvent() {
    return NULL;
}

AGGNPC_Humanoid* AGGAIController_Humanoid::GetControlledHumanoid() const {
    return NULL;
}

void AGGAIController_Humanoid::AbortEvent(bool CalledFromEvent) {
}


