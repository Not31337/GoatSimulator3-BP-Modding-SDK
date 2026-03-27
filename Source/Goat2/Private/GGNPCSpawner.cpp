#include "GGNPCSpawner.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"

AGGNPCSpawner::AGGNPCSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
    this->RootComp = (USceneComponent*)RootComponent;
    this->SizeIndicatorCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Size Indicator"));
    this->Enabled = true;
    this->ShouldSpawnAtGameStart = false;
    this->bCanBeRagdolledThroughImpact = true;
    this->bCanEditRagdolledThroughImpact = true;
    this->bCanPassOut = true;
    this->bCanEditPassedOut = true;
    this->bPassOutOnRagdoll = false;
    this->bCanEditPassOutOnRagdoll = true;
    this->ShowSpawnerCapsuleInGame = false;
    this->NPCType = ENPCType::NT_None;
    this->LastUsedTimestamp = -100.00f;
    this->DefaultPActorAttachmentClass = NULL;
    this->bSetForcedNPCName = false;
    this->bOverrideNameDataTableRows = false;
    this->NPCNameDataTable = NULL;
    this->Dialogue = NULL;
    this->bAnimalSpawner = false;
    this->SizeIndicatorCapsule->SetupAttachment(RootComponent);
}

AGGNPC* AGGNPCSpawner::SpawnNPC() {
    return NULL;
}

void AGGNPCSpawner::SpawnAndAttachDialogueActor(AGGNPCSpawner* ThisSpawner, AGGNPC* NPC) {
}

void AGGNPCSpawner::OnAppearanceLoadedAndSet(AGGNPC_Humanoid* NPC) {
}

bool AGGNPCSpawner::InitializeResetNPC(AGGNPC* NPC) {
    return false;
}


