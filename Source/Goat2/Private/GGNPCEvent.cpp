#include "GGNPCEvent.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"

AGGNPCEvent::AGGNPCEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->QueryLocationComp = CreateDefaultSubobject<USceneComponent>(TEXT("QueryLocationComp"));
    this->QueryLocArrowComp = CreateDefaultSubobject<UArrowComponent>(TEXT("QueryLocArrowComp"));
    this->EventTree = NULL;
    this->bCanEditEventTree = true;
    this->EventType = EEventType::ET_EditorPlaced;
    this->EventActivation = EEventActivation::EA_AtStart;
    this->EventDeactivation = EEventDeactivation::ED_None;
    this->ChanceToEnable = 100;
    this->Enabled = false;
    this->IsInitialized = false;
    this->MaxAffectedNPCs = 5;
    this->bIgnoreNPCsHoldingObjects = false;
    this->HandsToCheckIn = EAttachmentHandSlot::AHS_Right;
    this->RecentNPCCooldown = 5.00f;
    this->HasDuration = false;
    this->Duration = 120.00f;
    this->bDestroyOnDurationEnd = false;
    this->ChanceToSetMood = 100;
    this->EnableMaxDistance = 7000.00f;
    this->EnableMinDistance = 6000.00f;
    this->RelevantDistanceMax = 8000.00f;
    this->bRemoveScaredNPCs = true;
    this->bRemoveAngryNPCs = true;
    this->bRemoveLovingNPCs = true;
    this->bRemovePanickedNPCs = false;
    this->bRemoveRagdolledNPCs = false;
    this->bRemovePassedOutNPCs = false;
    this->NPCEventManager = NULL;
    this->ShouldDrawEQS = false;
    this->EQSToDraw = ECrowdTypes::CT_None;
    this->QueryTemplate = NULL;
    this->QueryingMode = EEnvQueryRunMode::RandomBest25Pct;
    this->DrawLabels = false;
    this->QueryLocArrowComp->SetupAttachment(QueryLocationComp);
    this->QueryLocationComp->SetupAttachment(RootComponent);
}

void AGGNPCEvent::ToRagdollEvent(ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void AGGNPCEvent::RemoveAllAffectedNPCs() {
}

void AGGNPCEvent::RemoveAffectedNPC(AGGNPC_Humanoid* NPC) {
}


EMoods AGGNPCEvent::GetMoodFromEvent() {
    return EMoods::M_None;
}

UGGCrowdSystemComponent* AGGNPCEvent::GetCrowdSystemComp() {
    return NULL;
}

void AGGNPCEvent::EnableEvent() {
}

void AGGNPCEvent::DisableEvent() {
}



void AGGNPCEvent::AddAffectedNPC(AGGNPC_Humanoid* NPC) {
}


